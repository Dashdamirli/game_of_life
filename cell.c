#include "cell.h"


struct cell C_new(int row, int col){



	struct cell newCell;
	newCell.row=row;
	newCell.col=col;

	return newCell;

}


void C_print(struct cell c, char *label){

	printf("%s: (%d,%d)\n", label,c.row,c.col);

}

void C_printNeighbors(struct cell c){

	struct cell modifiedCell=c;
	
	modifiedCell.row=c.row-1;
	C_print(modifiedCell,"Upper");
	
	modifiedCell.row=c.row+1;
	C_print(modifiedCell,"Lower");
	
	modifiedCell.row=c.row;
	modifiedCell.col=c.col-1;
	C_print(modifiedCell,"Left");
	
	modifiedCell.col=c.col+1;
	C_print(modifiedCell,"Right");



}