
#ifndef __ARENA__
#define __ARENA__
#include "cell.h"
struct arena
{
	int nb_rows,nb_cols;
};

struct arena A_new(int nb_rows, int nb_cols);
int A_isInside(struct cell c, struct arena ar);

#endif