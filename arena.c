
#include "arena.h"
#include "cell.h"

struct arena A_new(int nb_rows, int nb_cols){

	struct arena newArena;
	newArena.nb_rows=nb_rows;
	newArena.nb_cols=nb_cols;

	return newArena;
}


int A_isInside(struct cell c, struct arena ar){
	if (c.row<ar.nb_rows&&c.col<ar.nb_cols&&c.row>=0&&c.col>=0)	return 1;
	else return 0;
}

