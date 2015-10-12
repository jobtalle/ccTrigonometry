#include <ccTrigonometry/ccTrigonometry.h>

void ccTriInterpRadPoly(float *value, float target, float factor)
{
	float delta = target - *value;

	if(delta < -(float)CC_TRI_PI) {
		*value -= (float)CC_TRI_PI_DOUBLE;
		delta = target - *value;
	}
	else if(delta >(float)CC_TRI_PI) {
		*value += (float)CC_TRI_PI_DOUBLE;
		delta = target - *value;
	}

	*value += delta * factor;
}