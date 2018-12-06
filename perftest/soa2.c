#include <stdio.h>





int main() { 
	int i,j;
	float scene1Red[200][200],scene2Red[200][200];
	float scene1Green[200][200],scene2Green[200][200];
	float scene1Blue[200][200],scene2Blue[200][200];

        for (i = 0; i < 200; i++) {
                for (j = 0; j < 200; j++) {

                        scene1Red[i][j] = 1.3*(i+j);
                        scene1Green[i][j] = 1.4*(i+j);
                        scene1Blue[i][j] = 1.5*(i+j);
 
                        scene2Red[i][j] = scene2Green[i][j] = scene2Blue[i][j] = 1;
                }
        }

	for (i = 0; i < 199; i++) {
    		for (j = 0; j < 199; j++) {
      			scene1Red[i][j] = (scene1Red[i][j] + scene2Red[i][j])/2; 
      			scene1Green[i][j]= (scene1Green[i][j] + scene2Green[i][j])/2; 
      			scene1Blue[i][j]= (scene1Blue[i][j]+ scene2Blue[i][j])/2; 
		}
  	}
	return 0; 
}

