#include "ft_printf.h"

// Counts up and remembers the current value
// until end of program (if called with mode 1)
// If called with mode 0: resets this counter

int	count(int mode)
{
	static int	counter;

	if (mode == 0)
		counter = 0;
	else if (mode == 1)
		counter++;
	return (counter);
}
