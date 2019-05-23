#include "opencv2/opencv.hpp"
#include "putUnitext.h"

using namespace cv;

int main(int, char**)
{
	Mat imageMat = imread("2.jpg");
	IplImage * imageIpl = cvLoadImage("2.jpg");

	char* str1 = "한글 된다!!";
	char* str2 = "잔나비 흥해라!!";

	putUniText(imageIpl, imageIpl, str1, cvPoint(200, 150), CV_RGB(100, 255, 255));
	cvShowImage("Iplimage", imageIpl);

	putUniText(imageMat, imageMat, str2, cvPoint(200, 150), CV_RGB(255, 100, 255));
	imshow("Mat", imageMat);

	imwrite("2_with_Korean_mat.jpg", imageMat);

	while (waitKey(30) != 27);
}