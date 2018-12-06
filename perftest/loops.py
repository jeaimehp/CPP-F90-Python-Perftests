#! /usr/bin/python
import numpy as np

a=np.empty([16000,16000])

for i in range(0, 16000):
    for j in range(0, 16000):
        a[i,j] = i+j*j


