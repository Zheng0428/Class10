#include<iostream>
#include<opencv2/opencv.hpp>
#include <opencv2\imgproc\types_c.h>
using namespace cv;
using namespace std;


int main()
{
	Mat srcMat = imread("C:\\picture\\face.JPG",0);
	float gamma = 0.45;
	float Lut[256];
	for (int i = 0; i < 255; i++)
	{
		Lut[i] = pow(i * 1.0 / 255, gamma);
	}
	for (int i = 0; i < srcMat.rows; i++)
	{
		for (int j=0; j < srcMat.cols; j++)
		{
			srcMat.at<uchar>(i, j) = Lut[srcMat.at<uchar>(i, j)] * 255;
		}
	}
	imshow("img", srcMat);
	waitKey(0);
	return 0;
}
