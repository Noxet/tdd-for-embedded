#include "average.h"


int8_t averageThreeBytes(int8_t a, int8_t b, int8_t c)
{
	return (int8_t)(((int16_t)a + (int16_t)b + (int16_t)c) / 3);
}
