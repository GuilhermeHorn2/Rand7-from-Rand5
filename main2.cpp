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

	//if i sum rand_5 7 times and dont let 28 happen i can get equal probs on r % 7 = 0,1,2,3,4,5,6
	int r = 0;

	for(int i = 0;i < 6;i++){
		r += rand_5();
	}

	if(r == 28){
		int k = 0;
		while(r == 28){
			for(int i = 0;i < 6;i++){
				k += rand_5();
			}
			r = k;
		}
	}

	return r % 7;

}

