#include <stdio.h>
#include <stdlib.h>

main(){
	
    float *k;
	k=(float*)malloc(1);
	k[0]=55.44;
	k[1]=77.34;
	k[2]=88.34;
	k[3]=33.43;
	k[4]=65.54;
	k[5]=456.45;
	printf("%d:%f",sizeof(k[2]), k[2]);
	free(k);
}
