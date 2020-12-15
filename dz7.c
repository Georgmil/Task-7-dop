#include <stdio.h>

#define maxsize 150


void task1() {
	int len,c;
	int a[maxsize];
	printf("how many elements do you want in the array:");
	scanf_s("%d", &len);

	printf("1 element in array:");
	scanf_s("%d", &a[0]);
		
	for (int i = 1; i < len; i++) {
		printf("%d element in array", i + 1);
		scanf_s("%d", &c);
		a[i] = c;
	}

	int pr, kol;
	kol = 0;
	for (int j = 0; j < len; j++) {

		if (j == 0) {
			if (a[j] < 0)
				pr = -1;
			else
				pr = 1;
		}
		else if (((a[j] > 0) && (pr<0)) || ((a[j] < 0) && (pr>0))) {
			kol++;
			pr = pr*(-1);
		}
	}
	printf("\nelemeti massiva menejut znak %d raza", kol);



}

void task2() {
	int len2, c2;
	int B[maxsize];
	printf("How many elements do you want in the array:");
	scanf_s("%d", &len2);

	printf("1 element in array:");
	scanf_s("%d", &B[0]);

	for (int i = 1; i < len2; i++) {
		printf("%d element in array", i + 1);
		scanf_s("%d", &c2);
		B[i] = c2;
	}



	int maxdlina = 0, vrem = 0, d;

	if (B[len2 - 1] % 2 != 0) {
		B[len2] = 2;
		d = 1;
	}
	else
		d = 0;


	for (int i = 0; i < len2 + d; i++) {

		if (B[i] % 2 != 0)
			vrem++;
		else {
			if (vrem >= maxdlina) {
				maxdlina = vrem;
				vrem = 0;
			}
			else
				vrem = 0;
		}
	}

	printf("Maxdlina podrad idushih nechetnih chisel ravna %d", maxdlina);


}

void task4() {
	int len3, c3;
	int C[maxsize];
	printf("How many elements do you want in the array:");
	scanf_s("%d", &len3);

	printf("1 element in array:");
	scanf_s("%d", &C[0]);

	for (int i = 1; i < len3; i++) {
		printf("%d element in array", i + 1);
		scanf_s("%d", &c3);
		C[i] = c3;
	}

	int max, max2;
	for (int j = 0; j < len3; j++) {

		if (j == 0) {
			max = C[j];
			max2 = C[j];
		}
		else if (max == max2 && C[j] < max)
			max2 = C[j];
		else if (C[j] > max2 && C[j] < max)
			max2 = C[j];
		else if (C[j] > max2 && C[j] > max) {
			max2 = max;
			max = C[j];
		}
	}

	printf("Max is %d Max2 is %d", max, max2);



}


int main() {
	int n = 1;
	while (n) {
		printf("\n\n");
		printf("Which task do you want to slove, task 1,2 or 4. (Type 0 to exit):\n");
		scanf_s("%d", &n);
		printf("\n");
		switch (n) {
		case 1: task1(); break;
		case 2: task2(); break;
		case 4: task4(); break;

		}
	}


	

	return 0;
}