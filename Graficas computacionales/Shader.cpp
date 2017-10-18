#include "Shader.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

Shader::Shader()
{
	GLuint _shaderHandle = 0;
}

Shader::~Shader()
{
	glDeleteBuffers(1, _shaderHandle);
}

void Shader::CreateShader(std::string path, GLenum type)
{
	InputFile path;

	//Leemos codigo fuente del vertex shadre con la clase auxiliar InputFile
	path.Read("Default.vert");
	std::string vertexSource = path.GetHandle();
	//Hacemos un cast porque no le podemos mandar strings a OpenGL. Necesitamos mandarle const GLchar*
	const GLchar *vertexSource_c = (const GLchar*)vertexSource.c_str();
	//Creamos un shader de tipo VertexShader y guardamos su id en la variable vertexShaderHandle
	GLuint shaderHandle = glCreateShader(GL_VERTEX_SHADER);
	//Le mandamos el codigo fuente que leimos previamente a OpenGL
	glShaderSource(vertexShaderHandle, 1, &vertexSource_c, nullptr);
	//Le pedimos que compile
	glCompileShader(vertexShaderHandle);

	path.Read("Default.frag");
	std::string fragmentSource = path.GetHandle();
	//Hacemos un cast porque no le podemos mandar strings a OpenGL. Necesitamos mandarle const GLchar*
	const GLchar *fragmentSource_c = (const GLchar*)fragmentSource.c_str();
	//Creamos un shader de tipo fragmentShader y guardamos su id en la variable fragmentShaderHandle
	GLuint fragmentShaderHandle = glCreateShader(GL_FRAGMENT_SHADER);
	//Le mandamos el codigo fuente que leimos previamente a OpenGL
	glShaderSource(fragmentShaderHandle, 1, &fragmentSource_c, nullptr);
	//Le pedimos que compile
	glCompileShader(fragmentShaderHandle);
}

GLuint Shader::GetHandle()
{
	return _shaderHandle;
}
