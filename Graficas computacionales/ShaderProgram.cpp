#include "InputFile.h"
#include "ShaderProgram.h"
#include "Shader.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>
#include <memory>

ShaderProgram::ShaderProgram()
{
	_programHandle = 0;
}

void ShaderProgram::createProgram()
{
	_programHandle = glCreateProgram();
}
void ShaderProgram::attachShader(std::string name, GLenum type)
{
	//SE CREA EL SHADER
	std::unique_ptr<Shader> shader(new Shader);
	shader->createShader(name, type);
	//AÑADIMOS UN SHADER AL PROGRAMA SHADER(ADMINISTRADOR DE SHADERS)
	_attachedShaders.push_back(std::move(shader));
}
void ShaderProgram::linkProgram()
{
	for (int i = 0; i < _attachedShaders.size(); i++) {
		glAttachShader(_programHandle, _attachedShaders[i]->getHandle());
	}
	//JUNTAMOS TODAS LAS ETAPAS SHADER DEL PROGRAMA SHADER PARA QUE SEA EJECUTABLE 
	glLinkProgram(_programHandle);
	deleteAndDetachShaders();
}
void ShaderProgram::deleteAndDetachShaders()
{
	for (int i = 0; i < _attachedShaders.size(); i++) {
		//QUITAMOS SHADERS DEL PROGRAMA SHADER(ADMINISTRADOR DE SHADERS)
		glDetachShader(_programHandle, _attachedShaders[i]->getHandle());
	}
	_attachedShaders.clear();
}
void ShaderProgram::activate()
{
	//ACTIVO EL PROGRAMA SHADER PARA USARSE
	glUseProgram(_programHandle);
}
void ShaderProgram::deactivate()
{
	glUseProgram(0);
}
void ShaderProgram::setAttribute(GLuint locationIndex, std::string name)
{
	//DAMOS NOMBRE A UN ATRIBUTO DENTRO DEL SHADER
	glBindAttribLocation(_programHandle, locationIndex, name.c_str());
}
void ShaderProgram::deleteProgram()
{
	deleteAndDetachShaders();
	glDeleteProgram(_programHandle);
}
ShaderProgram::ShaderProgram() {
	//SE BORRA EL PROGRAMA SHADER
	deleteProgram();
}