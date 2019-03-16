%matplotlib inline
import numpy as np
from scipy import misc
import matplotlib.pyplot as plt
from skimage import data
photo_data=misc.imread("DSC_6747.jpg")
x,y,z=photo_data.shape
photo_data[:]=photo_data.mean(axis=-1,keepdims=1)
plt.figure(figsize=(10,10))
plt.imshow(photo_data)
