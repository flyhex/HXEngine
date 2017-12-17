#version 430 core

uniform sampler2D MainTexture;

// 线性雾
uniform int useFog;

// 光照 世界空间
uniform vec3 ambient;
uniform vec3 lightColor;
uniform vec3 lightDir;
uniform vec3 eyePos;

in vec4 vs_fs_diffuse_color;
in vec2 vs_fs_texcoord;

// 光照 世界空间
in vec4 vs_fs_normal;
in vec4 vs_fs_position;

// 线性雾
in float vs_fs_distance;

out vec4 fColor;

void main()
{
	//fColor = vec4(0.0, 1.0, 0.0, 1.0);
	//fColor = vec4(vs_fs_texcoord.x, vs_fs_texcoord.y, 0, 1);
	fColor = texture(MainTexture, vs_fs_texcoord) * vs_fs_diffuse_color;
	
	// 光照处理 世界坐标系下
	vec3 eyeDir = eyePos - vs_fs_position.xyz;
	//float diffuse = max(0.0, dot(normalize(vs_fs_normal.xyz), normalize(-lightDir)));
	//vec3 scatteredLight = ambient + lightColor *diffuse;
	//vec3 rgb = fColor.rgb * scatteredLight;
	//fColor = vec4(rgb, fColor.a);
	float diffuse = max(0.0, dot(normalize(vs_fs_normal.xyz), normalize(vec3(0,1,0))));
	vec3 scatteredLight = vec3(1,1,1) *diffuse;
	vec3 rgb = fColor.rgb * scatteredLight;
	fColor = vec4(rgb, fColor.a);
	
	// 线性雾
	if(useFog == 1)
	{
		vec4 fogColor = vec4(0.5, 0.5, 0.5, 1.0);
		float fog  = (vs_fs_distance - 10)/30;
		fog = clamp(fog, 0.0, 1.0);
		pow(fog, 4);
		fColor = mix(fColor, fogColor, fog);
	}
}