#pragma once
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

class Shader
{
public:
	Shader();
	~Shader();
	void createShader(std::string path, GLenum type);
	GLuint getHandle();

private:
	GLuint _shaderHandle;
};