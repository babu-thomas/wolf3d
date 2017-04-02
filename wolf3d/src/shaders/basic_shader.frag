#version 330 core

in vec4 vertex_color;
in vec2 TexCoord;

out vec4 frag_color;

uniform sampler2D cardboardTex;
uniform sampler2D faceTex;

void main()
{
	frag_color = mix(texture(cardboardTex, TexCoord), texture(faceTex, TexCoord), 0.2);
}