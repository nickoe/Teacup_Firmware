#ifndef	_DDA_MATHS_H
#define	_DDA_MATHS_H

#include	<stdint.h>


// return rounded result of multiplicand * multiplier / divisor
const uint32_t muldiv(uint32_t multiplicand, uint32_t multiplier,
                      uint32_t divisor);

#endif	/* _DDA_MATHS_H */
