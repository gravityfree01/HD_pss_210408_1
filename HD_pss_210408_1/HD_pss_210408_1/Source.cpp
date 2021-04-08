/*
for([초기화 되는 변수 즉 , 시작지점 ]; [조건] 반복횟수; 시작변수를 증감 시킴 +- ; ){


}

1번문제
*
**
***
****
*****
2번문제

		*
	   ** 
	  ***	
	 ****	
	*****
3번문제
  *
  **
  * 
  ***
  * 
  ****
  *
  *****


*/

#include<stdio.h>

void main() {
	
	
	/* for문 예시
	for (int i = 10; i >0; i++) {

		//i=10
		printf("hello world?\n");
		//i=11

	}

	fgetc(stdin);
	*/
	
	for (int i = 0; i <= 5; i++) {
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	
	/*while (true) {

	}

	int numberA;

	int arrayB[10];
	
	numberA = 10;

	for (int i = 0; i < sizeof(arrayB); i++) {
		arrayB[i] = 0;


		}
*/
	fgetc(stdin);



}