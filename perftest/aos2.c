#include <stdio.h>
#include <stdlib.h>





int main() { 
	int i,j;
	float *scene1Red,*scene2Red;
	float *scene1Green,*scene2Green;
	float *scene1Blue,*scene2Blue;
	float *tmp1,*tmp2,*tmp3; 

	scene1Red = (float*) malloc(500*500*sizeof(float)); 
	scene2Red = (float*) malloc(500*500*sizeof(float)); 
	scene1Green = (float*) malloc(500*500*sizeof(float)); 
	scene2Green = (float*) malloc(500*500*sizeof(float)); 
	scene1Blue = (float*) malloc(500*500*sizeof(float)); 
	scene2Blue = (float*) malloc(500*500*sizeof(float)); 

	 for (i = 0; i < 500; i++) {
                for (j = 0; j < 500; j++) {
                        scene1Red[i*500+j] = 1.3*(i+j);
                        scene1Green[i*500+j] = 1.4*(i+j);
                        scene1Blue[i*500+j] = 1.5*(i+j);
                }
        }



	for (i = 0; i < 499; i++) {
    		for (j = 0; j < 499; j++) {
      			scene1Red[i*500+j] = (scene1Red[i*500+j] + scene2Red[i*500+j])/2; 
      			scene1Green[i*500+j]= (scene1Green[i*500+j] + scene2Green[i*500+j])/2; 
      			scene1Blue[i*500+j]= (scene1Blue[i*500+j]+ scene2Blue[i*500+j])/2; 
		}
  	}
	return 0; 
}

