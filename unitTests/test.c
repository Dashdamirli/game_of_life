#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../game/game.c"
#include "../game/game.h"

int maxi(int i1, int i2)
{
    return (i1 > i2) ? i1 : i2;
}

void test_maxi(void)
{
    CU_ASSERT(maxi(0,2) == 2);
}

void isValidCellTest1(){
    CU_ASSERT(isValidCell(1,1,5,5) == 1);
}
void isValidCellTest2(){
    CU_ASSERT(isValidCell(6,2,5,5) == 0);
}
void isValidCellTest3(){
    CU_ASSERT(isValidCell(3,6,5,5) == 0);
}
void isValidCellTest4(){
    CU_ASSERT(isValidCell(-1,1,5,5) == 0);
}
void isValidCellTest5(){
    CU_ASSERT(isValidCell(1,-1,5,5) == 0);
}
void isValidCellTest6(){
    CU_ASSERT(isValidCell(3,4,5,5) == 1);
}
void isValidCellTest7(){
    CU_ASSERT(isValidCell(3,2,3,3) == 0);
}

void aliveNeighborCount_test1(){
    int circular=0;
    int arena[1000][1000];
    arena[0][0]=1;
    arena[0][1]=1;
    arena[0][2]=1;
    arena[2][0]=1;
    arena[2][1]=1;
    arena[1][0]=1;
    CU_ASSERT(aliveNeighborCount(1,1,arena,circular) == 6);
}
void aliveNeighborCount_test2(){
    int circular=0;
    int arena[1000][1000]={0};
    CU_ASSERT(aliveNeighborCount(1,1,arena,circular) == 0);
}
void aliveNeighborCount_test3(){
    int circular=0;
    int arena[1000][1000];
    arena[0][0]=1;
    arena[0][1]=1;
    arena[0][2]=1;
    arena[2][0]=1;
    arena[2][1]=1;
    arena[2][2]=1;
    arena[1][0]=1;
    arena[1][2]=1;
    CU_ASSERT(aliveNeighborCount(1,1,arena,circular) == 8);
}
//for circilar
void aliveNeighborCount_test4(){
    //check if circular works fine within the arena
    int circular=1;
    int arena[1000][1000]={0};
    arena[0][1]=1;
    arena[1][0]=1;
    arena[1][1]=1;
    CU_ASSERT(aliveNeighborCount(0,0,arena,circular) == 3);
}
void aliveNeighborCount_test5(){
    //check if circular works outside  the arena
    int circular=1;
    int arena[1000][1000]={0};
    arena[0][col-1]=1;
    arena[row-1][0]=1;
    arena[row-1][col-1]=1;//diognal
    CU_ASSERT(aliveNeighborCount(0,0,arena,circular) == 3);
}
void aliveNeighborCount_test6(){
     //check if circular works outside and within  the arena
    int circular=1;
    int arena[1000][1000]={0};
    arena[0][col-1]=1;
    arena[row-1][0]=1;
    arena[row-1][col-1]=1;
    arena[0][1]=1;
    arena[1][0]=1;
    arena[1][1]=1;
    CU_ASSERT(aliveNeighborCount(0,0,arena,circular) == 6);
}


int main(){
    if (CUE_SUCCESS!=CU_initialize_registry())
    {
        return CU_get_error();
    }
    
    CU_initialize_registry();

    CU_pSuite ps1 = CU_add_suite("isValidCell_test", 0, 0);
    CU_ADD_TEST(ps1,isValidCellTest1);
    CU_ADD_TEST(ps1,isValidCellTest2);
    CU_ADD_TEST(ps1,isValidCellTest3);
    CU_ADD_TEST(ps1,isValidCellTest4);
    CU_ADD_TEST(ps1,isValidCellTest5);
    CU_ADD_TEST(ps1,isValidCellTest6);
    CU_ADD_TEST(ps1,isValidCellTest7);

    CU_pSuite ps2 = CU_add_suite("aliveNeighborCountClipped_test", 0, 0);
    //for clipped
    CU_ADD_TEST(ps2,aliveNeighborCount_test1);
    CU_ADD_TEST(ps2,aliveNeighborCount_test2);
    CU_ADD_TEST(ps2,aliveNeighborCount_test3);
    
    //for circular
    CU_pSuite ps3 = CU_add_suite("aliveNeighborCountCircular_test", 0, 0);
    
    CU_ADD_TEST(ps3,aliveNeighborCount_test4);
    CU_ADD_TEST(ps3,aliveNeighborCount_test5);
    CU_ADD_TEST(ps3,aliveNeighborCount_test6);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_number_of_failures();
}