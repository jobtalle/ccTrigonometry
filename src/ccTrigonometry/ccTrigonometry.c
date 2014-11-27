#include <ccTrigonometry/ccTrigonometry.h>

static float ccTriInterpolateLinear(float a, float b, float x)
{
	return a * (1 - x) + b*x;
}

static float ccTriInterpolateCosine(float a, float b, float x)
{
	float factor = (1.0f - cos(x * CC_TRI_PI)) * .5f;

	return a * (1.0f - factor) + b * factor;
}

static float ccTriInterpolateCubic(float a, float b, float c, float d, float x)
{
	float p = (d - c) - (a - b);

	return ccTriCubed(x * p) + ccTriSquared(x * (a - b) - p) + x * (c - a) + b;
}