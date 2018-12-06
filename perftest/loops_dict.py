#! /usr/bin/python
import numpy as np

a={}

for i in range(0, 16000):
    for j in range(0, 16000):
        a[j,i] = i+j*j


