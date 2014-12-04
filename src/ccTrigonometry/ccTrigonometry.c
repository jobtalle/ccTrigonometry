#include <ccTrigonometry/ccTrigonometry.h>

float ccTriInterpolateLinear(float a, float b, float x)
{
	return a * (1 - x) + b*x;
}

float ccTriInterpolateCosine(float a, float b, float x)
{
	float factor = (1.0f - cos(x * CC_TRI_PI)) * .5f;

	return a * (1.0f - factor) + b * factor;
}

float ccTriInterpolateCubic(float a, float b, float c, float d, float x)
{
	float p = (d - c) - (a - b);

	return ccTriCubed(x * p) + ccTriSquared(x * (a - b) - p) + x * (c - a) + b;
}

float ccTriInterpolateQuadratic(float a, float b, float x)
{
	return a + (b - a) * ccTriCubed(x);
}