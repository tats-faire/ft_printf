#include "ft_printf.h"

// FUNCTION: COUNTS UP AND REMEMBERS THE CURRENT VALUE
// UNTIL END OF PROGRAM (IF CALLED WITH MODE 1)
// IF CALLED WITH MODE 0: RESETS COUNTER

int	count(int mode)
{
	static int	counter;

	if (mode == 0)
		counter = 0;
	else if (mode == 1)
		counter++;
	return (counter);
}
