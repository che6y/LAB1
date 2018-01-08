#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	printf("Choose coordinats x and y: ");
	float x, y;
	int inputs = scanf("%f %f", &x, &y);
	if (inputs==2) {
		if(y<=2&&y>=-2&&x<=2&&x>=-2)
			printf("The point is in the figure!\n");
		else if(sqrt(x-1)+sqrt(y-1)<1)
			printf("The point is in the figure!\n");
		else 
			printf("The point is not in the figure!\n");
	} else {
		printf("Wrong data\n");
	}
	
	system("pause");
	return EXIT_SUCCESS;
}
