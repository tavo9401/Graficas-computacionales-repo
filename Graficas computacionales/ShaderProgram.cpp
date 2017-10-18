#include "ShaderProgram.h"

ShaderProgram::ShaderProgram()
{
	GLuint _programHandle = 0;
}

ShaderProgram::~ShaderProgram()
{
	DeleteProgram();
}

void ShaderProgram::CreateProgram()
{
	_programHandle = glCreateProgram();
}

void ShaderProgram::AttachShader(std::string name, GLenum type)
{
	//Create and add the shaders to a list
	std::unique_ptr<Shader>shader(new Shader);
	shader->CreateShader(name,type);
	_attachedShaders.push_back(std::move(shader));
}

void ShaderProgram::LinkProgram()
{
	glLinkProgram(_programHandle);
	DeleteAndDetachShaders();
}

void ShaderProgram::Activate()
{
	glUseProgram(_programHandle);
}

void ShaderProgram::Deactivate()
{
	glUseProgram(0);
}

void ShaderProgram::SetAttribute(GLuint locationIndex, std::string name)
{
	glAttachShader(_programHandle, vertexShaderHandle);
	//este manager va a administrar el fragment shader con identificador fragmentShaderHandle
	glAttachShader(_programHandle, fragmentShaderHandle);
}

void ShaderProgram::SetUniformf(std::string name, float value)
{
	glBindAttribLocation(_programHandle, 0, "VertexPosition");
	//Asciamos el indice del buffer (VBO) de colores con el nombre de la variable correspondiente con el shader
	glBindAttribLocation(_programHandle, 1, "VertexColor");
}

void ShaderProgram::SetUniformf(std::string name, float x, float y)
{
}

void ShaderProgram::SetUniformf(std::string name, float x, float y, float z)
{
}

void ShaderProgram::SetUniformf(std::string name, float x, float y, float z, float w)
{
}
