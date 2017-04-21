#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>

const GLfloat CAMERA_YAW = -90.0f;
const GLfloat CAMERA_PITCH = 0.0f;
const GLfloat CAMERA_SPEED = 6.0f;
const GLfloat CAMERA_SENSITIVITY = 0.25f;
const GLfloat CAMERA_FOV = 45.0f;

class Camera
{
public:
	Camera();
	Camera(glm::vec3 position, glm::vec3 up, GLfloat yaw, GLfloat pitch, GLfloat speed,
		GLfloat sensitivity, GLfloat fov);
private:
	glm::vec3 m_position;
	glm::vec3 m_up;
	GLfloat m_yaw;
	GLfloat m_pitch;
	GLfloat m_speed;
	GLfloat m_sensitivity;
	GLfloat m_fov;
};

