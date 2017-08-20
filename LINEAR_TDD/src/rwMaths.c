/*
/ rwMaths.c

// includes a library of mathematical functions
*/

//#include "C:/Users/Ron/Documents/dev/rwCLib/rwMaths.h"
//#include "../../../../rwCLib/rwMaths.h" //=> No such file or directory
//#include "../../../../../../rwCLib/rwMaths.h" // => No such file or directory
#include "rwMaths.h"

int32_t calcYfromX(int32_t x)
{
	int32_t ret = x;
	
	if (x < 0)
		{
			ret = ERR_X_BELOW_0;
		}
	if (x > X_MAX)
		ret = ERR_X_GREATER_THEN_A46341;
	return ret;
}

char returnChar(void)
{
	return 'p';
}


char mathsChar(void)
{
	char asdf = 'b';
	return asdf;
}
/*
uint32_t calcYfromX(uint32_t x)
{
	uint32_t val = x;
	return val;
}
*/