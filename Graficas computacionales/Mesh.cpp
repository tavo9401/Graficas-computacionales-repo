#include "Mesh.h"
#include "InputFile.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

Mesh::Mesh()
{
	 _vertexArrayObject = 0;
	 _positionsVertexBufferObject = 0;
	_colorsVertexBufferObject = 0;
	_vertexCount = 0;
}

Mesh::~Mesh()
{
	glDeleteVertexArrays(1, &_vertexArrayObject);
	glDeleteBuffers(1, &_positionsVertexBufferObject);
	glDeleteBuffers(1, &_colorsVertexBufferObject);
	_vertexCount = 0;
}

void Mesh::CreateMesh(GLint vertexCount)
{
	_vertexCount = vertexCount;
	glGenVertexArrays(1, &_vertexArrayObject);
}

void Mesh::Draw(GLenum primitive)
{
	glBindVertexArray(_vertexArrayObject);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glBindVertexArray(0);
}

void Mesh::SetPositionAttribute(std::vector<glm::vec2> positions, GLenum usage, GLuint locationIndex)
{
	if (positions.size == _vertexCount && positions.size > 0)
		SetAtttributeData(_positionsVertexBufferObject, positions.size * sizeof(glm::vec2), positions.data, usage, locationIndex, 2);
}

void Mesh::SetColorAttribute(std::vector<glm::vec3> colors, GLenum usage, GLuint locationIndex)
{
	if (colors.size == _vertexCount && colors.size > 0)
		SetAtttributeData(_positionsVertexBufferObject, colors.size * sizeof(glm::vec3), colors.data, usage, locationIndex, 2);
}

void Mesh::SetAtttributeData(GLuint & buffer, const GLsizeiptr size, const void * data, GLenum usage, GLuint locationIndex, const GLint components)
{

	if (buffer != 0)
	{
		glDeleteBuffers(1,&buffer);
	}
	glBindVertexArray(_vertexArrayObject);
	glGenBuffers(1, &buffer);
	// Le decimos a OpenGL que lo queremos utilizar como un atributo.
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	// Asignamos los datos al buffer y los mandamos a la tarjeta de video.
	glBufferData(GL_ARRAY_BUFFER, size,data,usage);
	// Quiero activar el atributo con indice 0 en la tarjeta de video
	glEnableVertexAttribArray(locationIndex);
	// Configuramos el atributo con indice 0 en la tarjeta de video.
	glVertexAttribPointer(locationIndex,components, GL_FLOAT, GL_FALSE, 0, nullptr);
	// Desactivamos el uso del VBO de posiciones
	glBindBuffer(GL_ARRAY_BUFFER, 0);

}
