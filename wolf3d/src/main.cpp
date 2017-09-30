#include <iostream>
#include <vector>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <SOIL.h>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include "graphics/shader.h"
#include "graphics/window.h"
#include "graphics/buffers/buffer.h"
#include "graphics/buffers/indexbuffer.h"
#include "graphics/buffers/vertexarray.h"

#include "bitmap.h"

// To enable NVIDIA Graphics card
//extern "C" {
//	_declspec(dllexport) unsigned long NvOptimusEnablement = 0x00000001;
//}

int main()
{
	using namespace clone;
	using namespace graphics;

	Window window("Wolf3D!", 800, 600);

	Bitmap level1("level1.png");

	/*int img_width = level1.getWidth();
	int img_height = level1.getHeight();

	for (int i = 0; i < img_height; i++)
	{
		for (int j = 0; j < img_width; j++)
		{
			glm::ivec3 pixel = level1.getPixelAt(i, j);
			std::cout << pixel.r << ", " << pixel.g << ", " << pixel.b << " : ";
		}
		std::cout << std::endl;
	}*/

	Assimp::Importer importer;
	const aiScene* scene = importer.ReadFile("cube.obj", aiProcess_Triangulate | aiProcess_FlipUVs);
	if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode)
	{
		std::cout << "ERROR::ASSIMP::" << importer.GetErrorString() << std::endl;
	}

	while (!window.closed())
	{
		window.clear();

		window.update();
	}

	return 0;
}