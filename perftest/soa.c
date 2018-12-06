#include <stdio.h>



struct Voxel { 
		float Red;
		float Green;
		float Blue; 
		double lightray[11];
}; 


int main() { 
	int i,j;
	struct Voxel scene1[200][200]; 
	struct Voxel scene2[200][200]; 

   for (i = 0; i < 200; i++) {
                for (j = 0; j < 200; j++) {

                        scene1[i][j].Red = 1.3*(i+j);
                        scene1[i][j].Green = 1.4*(i+j);
                        scene1[i][j].Blue = 1.5*(i+j);
 
                        scene2[i][j].Red = scene2[i][j].Green = scene2[i][j].Blue = 1;
                }
        }

	for (i = 0; i < 199; i++) {
    		for (j = 0; j < 199; j++) {
      			scene1[i][j].Red = (scene1[i][j].Red * scene2[i+1][j].Red)/2; 
      			scene1[i][j].Green = (scene1[i][j].Green * scene2[i+1][j].Green)/2; 
      			scene1[i][j].Blue = (scene1[i][j].Blue * scene2[i+1][j].Blue)/2; 
		}
  	}
	return 0; 
}

