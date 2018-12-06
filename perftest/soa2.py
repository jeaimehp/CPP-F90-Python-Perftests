#! /usr/bin/python
import numpy as np

scene1Red = np.empty([200,200]); 
scene1Green = np.empty([200,200]); 
scene1Blue = np.empty([200,200]); 
scene2Red = np.empty([200,200]); 
scene2Green = np.empty([200,200]); 
scene2Blue = np.empty([200,200]); 


for i in range(0,200):
    for j in range(0,200):
        scene1Red[i,j] = 1.3*(i+j)
        scene1Green[i,j] = 1.4*(i+j)
        scene1Blue[i,j] = 1.5*(i+j)
        scene2Red[i,j] = 1
        scene2Green[i,j] =  1
        scene2Blue[i,j] = 1

for i in range(0, 199):
    for j in range(0, 199):
        scene1Red[i,j] = (scene1Red[i,j] * scene2Red[i+1,j])/2 
        scene2Green[i,j] = (scene1Green[i,j] * scene2Green[i+1,j])/2
        scene2Blue[i,j] = (scene1Blue[i,j] * scene2Blue[i+1,j])/2

