#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void CleanBuffer() {
	int n;
	while ((n = getchar()) != EOF && n != '\n');
}

char GetStuff(void) {
	char c;
	scanf_s("%c", &c, 1);
	getchar();
	while ((c != 'o') && (c != 'n') && (c != 'q')) {
		printf("Invalid input");
		scanf_s("%c", &c, 1);
		getchar();
	}
	return c;
}


void calculateOverworld(double x, double y, double z) {
	double rx, ry, rz;
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

void calculateNether(double x, double y, double z) {
	double rx, ry, rz;
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






int main() {
	printf("What do you want to input?\n");
	printf("o - overworld coordinates\n");
	printf("n - nether coordinates\n");
	printf("q - quit\n");
		double x, y, z;
		char choice = GetStuff();
		printf("You have entered: %c\n", GetStuff());

		if ('o' == choice) {
			printf("Input x overworld coordinates: \n");
			scanf_s("%lf", &x);
			printf("Input y overworld coordinates: \n");
			scanf_s("%lf", &y);
			printf("Input z overworld coordinates: \n");
			scanf_s("%lf", &z);
			calculateOverworld(x, y, z);
		}


		else if (choice == 'n') {
			printf("Input x nether coordinate: \n");
			scanf_s("%lf", &x);
			printf("Input y nether coordinate: \n");
			scanf_s("%lf", &y);
			printf("Input z nether coordinate: \n");
			scanf_s("%lf", &z);
			calculateNether(x, y, z);
		}
		else if (choice == 'Q') {

		}
	return 0;
}