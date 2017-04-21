#include "camera.h"



Camera::Camera()
{
	m_position = glm::vec3(0.0f, 0.0f, 0.0f);
	m_up = glm::vec3(0.0f, 1.0f, 0.0f);
	m_yaw = CAMERA_YAW;
	m_pitch = CAMERA_PITCH;
	m_speed = CAMERA_SPEED;
	m_sensitivity = CAMERA_SENSITIVITY;
	m_fov = CAMERA_FOV;
}

Camera::Camera(glm::vec3 position, glm::vec3 up, GLfloat yaw, GLfloat pitch, GLfloat speed,
	GLfloat sensitivity, GLfloat fov)
{
	m_position = glm::normalize(position);
	m_up = glm::normalize(up);
	m_yaw = yaw;
	m_pitch = pitch;
	m_speed = speed;
	m_sensitivity = sensitivity;
	m_fov = fov;
}
