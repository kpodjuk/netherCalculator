#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

	do {
		double x, y, z, rx, ry, rz;
		char choice;
		printf("What do you want to input?\n");
		printf("o - overworld coordinates\n");
		printf("n - nether coordinates\n");
		printf("q - quit\n");
		scanf_s("%s", &choice, 1);

		if ('o' == choice) {

			printf("Input x overworld cooordinadte: \n");
			scanf_s("%lf", &x);
			printf("Input y overworld coorodinate: \n");
			scanf_s("%lf", &y);
			printf("Input z overworld coordinate: \n");
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
		if (choice == 'n') {
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
		if (choice == 'q') {
			break;
		}


	} while (1);
	return 0;
}