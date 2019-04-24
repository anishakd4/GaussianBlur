import cv2
import sys
import numpy as np

#read image
image = cv2.imread("../assets/putin_noise.jpg")

#check if image exists
if image is None:
    print("can not find image")
    sys.exit()

#apply gaussian filter with kernel size 5
result1 = cv2.GaussianBlur(image, (5, 5), 0, 0)

#apply gaussian filter with kernel size 15
result2 = cv2.GaussianBlur(image, (15, 15), 0, 0)

#create windows to display images
cv2.namedWindow("image", cv2.WINDOW_NORMAL)
cv2.namedWindow("result1", cv2.WINDOW_NORMAL)
cv2.namedWindow("result2", cv2.WINDOW_NORMAL)

#display images
cv2.imshow("image", image)
cv2.imshow("result1", result1)
cv2.imshow("result2", result2)

#press esc to exit the program
cv2.waitKey(0)

#close all the opened windows
cv2.destroyAllWindows()