#include<iostream>
#include<opencv2/opencv.hpp>
#include <opencv2\imgproc\types_c.h>
using namespace cv;
using namespace std;


int main()
{
	Mat srcMat = imread("C:\\picture\\gtest.JPG", 1);
	Mat dstMat;
	Mat srcMat1[3];

	Mat channel[3];
	split(srcMat, channel);

	equalizeHist(channel[0], srcMat1[0]);
	equalizeHist(channel[1], srcMat1[1]);
	equalizeHist(channel[2], srcMat1[2]);

	merge(srcMat1, 3, dstMat);
	imshow("img", dstMat);
	waitKey(0);
	return 0;
}