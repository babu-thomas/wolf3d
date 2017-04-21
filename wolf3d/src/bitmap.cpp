#include <SOIL.h>
#include <glm/glm.hpp>
#include "bitmap.h"

Bitmap::Bitmap(const std::string& filename)
{
	pixels = SOIL_load_image("level1.png", &m_width, &m_height, 0, SOIL_LOAD_RGB);
}


Bitmap::~Bitmap()
{
	SOIL_free_image_data(pixels);
}

glm::ivec3 Bitmap::getPixelAt(int x, int y) const
{
	glm::ivec3 p;

	p.r = pixels[(x * m_width + y) * 3 + 0];
	p.g = pixels[(x * m_width + y) * 3 + 1];
	p.b = pixels[(x * m_width + y) * 3 + 2];

	return p;
}
