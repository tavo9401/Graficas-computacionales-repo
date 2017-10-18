#include "Mesh.h"

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
	GLuint _vertexArrayObject = 0;
		GLuint _positionsVertexBufferObject = 0;
		GLuint _colorsVertexBufferObject = 0;
		GLint _vertexCount = 0;
}

Mesh::~Mesh()
{
	glDeleteBuffers(1, positionsVertexBufferObject);
	glDeleteBuffers(1, colorsVertexBufferObject);
	glDeleteVertexArrays(1, vertexArrayObject);
}

void Mesh::CreateMesh(GLint vertexCount)
{
	_vertexCount = vertexCount;
	glGenVertexArrays(1, &vertexArrayObject);
}

void Mesh::Draw(GLenum primitive)
{
	glBindVertexArray(vertexArrayObject);



	glDrawArrays(GL_TRIANGLES, 0, 3);
	glBindVertexArray(0);
}

void Mesh::SetPositionAttribute(vector<vec2> positions, GLenum usage, GLuint locationIndex)
{
	std::vector<glm::vec2> positions;
	positions.push_back(glm::vec2(-1.0f, -1.0f));
	positions.push_back(glm::vec2(1.0f, -1.0f));
	positions.push_back(glm::vec2(0.0f, 1.0f));

	GLuint positionsVertexBufferObject;
	
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * positionsVertexBufferObject.size(), positionsVertexBufferObject.data(), GL_STATIC_DRAW);
	// Quiero activar el atributo con indice 0 en la tarjeta de video
	glEnableVertexAttribArray(0);
	// Configuramos el atributo con indice 0 en la tarjeta de video.
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	// Desactivamos el uso del VBO de posiciones
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	SetAtttributeData();

}

void Mesh::SetColorAttribute(vector<vec3> colors, GLenum usage, GLuint locationIndex)
{
	std::vector<glm::vec3> colors;
	// RGB -> Rojo
	colors.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	// RGB -> Verde
	colors.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	// RGB -> Azul
	colors.push_back(glm::vec3(0.0f, 0.0f, 1.0f));

	GLuint colorsVertexBufferObject;
	
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3) * colorsVertexBufferObject.size(), colorsVertexBufferObject.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);



}

void Mesh::SetAtttributeData(GLuint & buffer, const GLsizeiptr size, const void * data, GLenum usage, GLuint locationIndex, const GLint components)
{
	// Identificador del VBO de posiciones. Aqui lo vamos a almacenar.
	GLuint buffer;
	// Creamos un VBO y almacenamos el id en la variable positionsVBO
	glGenBuffers(1, &buffer);

}
