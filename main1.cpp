#include <stdio.h>
#include <iostream>
#include <vector>
#include <time.h>

int rand_7();

int main()
{
	 /* ?\n;||(or) e &&(and)*/
	srand(time(NULL));
	std::cout<< rand_7();

	return 0;
}

int rand_5(){

	return rand() % 5;
}

int rand_7(){

	int r = 0;
	//more iterations --> more similar to a uniform distribution
	for(int i = 0;i < 100*100;i++){
		r += rand_5();
	}
	return r % 7;

}

