#include <stdio.h>
#include <stdlib.h>



struct Voxel { 
		float Red;
		float Green;
		float Blue; 
		double lightray[11];
}; 


int main() { 
	int i,j;
	struct Voxel *scene1; 
	struct Voxel *scene2; 
	struct Voxel *sc1ptr,*sc2ptr; 

	sc1ptr = (struct Voxel *)malloc(sizeof(struct Voxel)*500*500); 
	sc2ptr = (struct Voxel *)malloc(sizeof(struct Voxel)*500*500); 
	scene1 = sc1ptr;
	scene2 = sc1ptr;

   for (i = 0; i < 500; i++) {
                for (j = 0; j < 500; j++) {
			scene1++;
                        scene1->Red = 1.3*(i+j);
                        scene1->Green = 1.4*(i+j);
                        scene1->Blue = 1.5*(i+j);
                }
        }
	scene1 = sc1ptr;
	for (i = 0; i < 499; i++) {
    		for (j = 0; j < 499; j++) {
			scene1++; scene2++;
      			scene1->Red = (scene1->Red * scene2->Red)/3; 
      			scene1->Green = (scene1->Green * scene2->Green)/3; 
      			scene1->Blue = (scene1->Blue * scene2->Blue)/3; 
		}
  	}
	return 0; 
}

