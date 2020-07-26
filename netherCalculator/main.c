#include <stdio.h>
#include <math.h>
#include <string.h>


char GetStuff(void) {
	char c;
	scanf_s("%c", &c, 1);
	getchar();
	while ((c != 'o') && (c != 'n') && (c != 'q')) {
		printf("invalid input, enter again: ");
		scanf_s("%c", &c, 1);
		getchar();
	}
	return c;
}



int main() {
	printf("What do you want to input?\n");
	printf("o - overworld coordinates\n");
	printf("n - nether coordinates\n");
	printf("q - quit\n");
	while(1) {
		double x, y, z, rx, ry, rz;
		char choice = GetStuff();




		if ('o' == choice) {

			printf("Input x overworld coordinates: \n");
			scanf_s("%lf", &x);
			printf("Input y overworld coordinates: \n");
			scanf_s("%lf", &y);
			printf("Input z overworld coordinates: \n");
			scanf_s("%lf", &z);

			printf("Results in nether: \n");

			rx = floor(x);
			rx = (rx / 8);
			ry = floor(y);
			rz = floor(z);
			rz = (z / 8);
			printf("X:%0.1lf\n", rx);
			printf("Y:%0.1lf\n", ry);
			printf("Z:%0.1lf\n", rz);
		}
		else if (choice == 'n') {
			printf("Input x nether coordinate: \n");
			scanf_s("%lf", &x);
			printf("Input y nether coordinate: \n");
			scanf_s("%lf", &y);
			printf("Input z nether coordinate: \n");
			scanf_s("%lf", &z);

			printf("Results in overworld: \n");

			rx = floor(x);
			rx = (rx * 8);
			ry = floor(y);
			rz = floor(z);
			rz = (z * 8);
			printf("X:%0.1lf\n", rx);
			printf("Y:%0.1lf\n", ry);
			printf("Z:%0.1lf\n", rz);
		}
		else if (choice == 'q') {
			break;
		}
		else {
			printf("Wrong input");
		}


	}
	return 0;
}