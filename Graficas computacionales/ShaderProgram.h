#pragma once
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

class ShaderProgram
{
public:
	ShaderProgram();
	~ShaderProgram();
	void CreateProgram();
	void AttachShader(std::string path,GLenum type);
	void LinkProgram();
	void Activate();
	void Deactivate();
	void SetAttribute(GLuint locationIndex,std::string name);
	void SetUniformf(std::string name,float value);
	void SetUniformf(std::string name, float x,float y);
	void SetUniformf(std::string name, float x, float y,float z);
	void SetUniformf(std::string name, float x, float y,float z,float w);

private:
	GLuint _programHandle;
	vector<unique_ptr<Shader>> _attachedShaders;
	void DeleteAndDetachShaders();
	void DeleteProgram();
};
