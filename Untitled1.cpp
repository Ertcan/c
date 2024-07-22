#include <stdio.h>
int main() {
	
	int sinif [3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	
	for (int i=0; i<3; i++){
		for(int k=0; k<3; k++){
			printf ("%d ",sinif[i][k]);
		}
		printf("\n");
	}
}
