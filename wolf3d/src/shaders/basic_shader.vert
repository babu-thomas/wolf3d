#version 330 core

layout(location=0) in vec4 vertex_position;
layout(location=1) in vec2 texCoord;

out vec4 vertex_color;
out vec2 TexCoord;

uniform mat4 pr_matrix = mat4(1.0);
uniform mat4 vw_matrix = mat4(1.0);
uniform mat4 ml_matrix = mat4(1.0);

void main()
{
	gl_Position = pr_matrix * vw_matrix * ml_matrix * vertex_position;
	vertex_color = vec4(1.0, 0.0, 0.0, 1.0);
	// Flip the origin as opengl expects it in the lower left but images use upper left 
	TexCoord = vec2(texCoord.x, 1.0 - texCoord.y);
}