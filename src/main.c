#include "core.h"

int main(int argc, char **argv, char **penv)
{
	if (argc >= 2)
		return (core_unit(argv, penv));
	return 0;
}
