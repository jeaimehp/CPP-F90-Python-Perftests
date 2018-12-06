#! /usr/bin/python
import numpy as np

class Voxel:
  Red = 0.0
  Green = 0.0
  Blue = 0.0
  lightray = None
 


#scene1 = np.empty([200,200]); 
#scene2 = np.empty([200,200]); 


#scene1 = [[0]*200 for j in range[200]]
scene1 = {}
#scene2 = [[0 for i in range(200)] for j in range[200]]
scene2 = {}

for i in range(0,200):
    for j in range(0,200):
        v1 = Voxel()
        v2 = Voxel()
        v1.Red = 1.3*(i+j)
        v1.Green = 1.4*(i+j)
        v1.Blue = 1.5*(i+j)
        v2.Red = 1
        v2.Green =  1
        v2.Blue = 1
        scene1[i,j] = v1
        scene2[i,j] = v2

for i in range(0, 199):
    for j in range(0, 199):
        v1 = scene1[i,j]
        v2 = scene2[i+1,j]
        v1.Red = (v1.Red * v2.Red)/2 
        v1.Green = (v1.Green * v2.Green)/2
        v2.Blue = (v1.Blue * v2.Blue)/2

