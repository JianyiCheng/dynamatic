
#include <stdlib.h>
#include "test_memory_4.h"

#define AMOUNT_OF_TEST 1

void test_memory_4(inout_int_t a[4], in_int_t n) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		a[i] = x;
		x = a[i+1];
	}
}


int main(void){
	inout_int_t a[AMOUNT_OF_TEST][5];
	in_int_t n[AMOUNT_OF_TEST];

	srand(13);
	for(int i = 0; i < AMOUNT_OF_TEST; ++i){
		n[i] = 4;
		for(int j = 0; j < 5; ++j){
			a[i][j] = rand()%10;
		}
	}
    
	//for(int i = 0; i < AMOUNT_OF_TEST; ++i){
	int i = 0;
	test_memory_4(a[i], n[i]);
	//}
}

