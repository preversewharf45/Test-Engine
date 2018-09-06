//#VERTEX
#version 460 core

layout (location = 0) in vec2 aPos;
layout (location = 1) in vec2 aTexCoords;

out vec2 TexCoords;

void main() {
	TexCoords = aTexCoords;
	gl_Position =  vec4(aPos.x, aPos.y, 0, 1);
}

//#FRAGMENT
#version 460 core

out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D tQuadImage;

void main() {
	FragColor = texture(tQuadImage, TexCoords);
}

//#UNIFORMS
0
//#END