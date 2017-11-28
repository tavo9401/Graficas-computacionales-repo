#version 330

in vec3 InterpolatedColor;
in vec3 InterpolatedNormal;
in vec3 PixelPosition;
in vec2 InterpolatedTexCoord;

out vec4 FragColor;

uniform vec3 LightColor;
uniform vec3 LightPosition;
uniform vec3 CameraPosition;
uniform sampler2D DiffuseTexture;

void main()
{	
	vec3 ambient = 0.1f * LightColor;
	
	vec3 VecL = normalize(LightPosition - PixelPosition);
	float angleDiffuse = dot(VecL, InterpolatedNormal); 
	if (angleDiffuse < 0)
	{
		angleDiffuse = 0;
	}
	vec3 diffuse = angleDiffuse * LightColor;


	vec3 VecR = reflect(-VecL, InterpolatedNormal);
	vec3 VecV = normalize(CameraPosition - PixelPosition);
	float angleSpec = dot(VecR, VecV); 
	if (angleSpec < 0)
	{
		angleSpec = 0;
	}
	vec3 specular = 0.01 * pow(dot(VecV, VecR), 8)* LightColor;


	vec3 phong= (ambient + diffuse + specular);

	FragColor = vec4(phong, 1.0f)*texture2D( DiffuseTexture,InterpolatedTexCoord);
}