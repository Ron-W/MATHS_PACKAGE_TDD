/************************************************************************/
/* rwMaths.h															*/
/*                                                                      */
/************************************************************************/

#ifndef RWMATHS_H
#define RWMATHS_H

#include <stdint.h>

#define X_MAX 46341
// error messages
#define ERR_X_BELOW_0 -1
#define ERR_X_GREATER_THEN_A46341  -2


int32_t calcYfromX(int32_t x);

char returnChar(void);
char mathsChar(void);

//uint32_t calcYfromX(uint32_t x);

#endif	// RWMATHS_H
