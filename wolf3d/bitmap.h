#pragma once

#include <string>
#include <glm/fwd.hpp>

class Bitmap
{
public:
	Bitmap(const std::string& filename);
	~Bitmap();

	inline int getWidth()  const { return m_width;  }
	inline int getHeight() const { return m_height; }

	unsigned char* getPixels() const { return pixels; }
	glm::ivec3 getPixelAt(int x, int y) const;

private:
	int m_width;
	int m_height;
	unsigned char* pixels;

};

