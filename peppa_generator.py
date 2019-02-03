import cv2
import numpy as np


class peppa_generator:
    def __init__(self, file_path):
        self.x_list = []
        self.y_list = []
        img = cv2.imread(file_path, cv2.IMREAD_GRAYSCALE)
        img = cv2.resize(img, (80, 80))
        ret, self.matrix = cv2.threshold(img, 200, 255, cv2.THRESH_BINARY)
        cv2.imshow("Preview", self.matrix)
        cv2.waitKey()
        (self.x_len, self.y_len) = self.matrix.shape

    def generator(self):
        for i in range(self.x_len):
            for j in range(self.y_len):
                if self.matrix[i][j] == 0:
                    self.x_list.append(int(i*30))
                    self.y_list.append(int(j*30))
        print("x_list:", len(self.x_list), self.x_list)
        print("y_list:", len(self.y_list), self.y_list)
        if self.x_len > 1024:
            print("Warning: Image too large !")		

if __name__ == "__main__":
    peppa = peppa_generator(".\\NEWYEAR.jpg")
    peppa.generator()
