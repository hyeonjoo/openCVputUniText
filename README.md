# openCVputUniText
Here're functions to put Unicode characters such as Korean, Chinese, Czech in Mat or IplImage images in OpenCV in Visual Studio. It won't work with other programming tools or other OSes because it requires an MFC library. Please make sure that Visual Studio has an MFC library.

# Before using this functions
You need to set project properties in Visual Studio. OpenCV setup is required, of course.
* Please make sure Project Configuration Properties Page -> General -> 'Use of MFC' is set to 'Use MFC in a Static Library'.
* On the same page, make sure that 'Character Set' is set to 'Use Multi-Byte Character Set'.
* ( This is made in Visual Studio 2015, Windows 10. )

# How to use
Please read the example.cpp file.

putUniText(IplImage * src, IplImage *dst, char* text, CvPoint point, CvScalar color);

putUniText(cv::Mat src, cv::Mat& dst, char* text, cv::Point point, cv::Scalar color);

* src: source image to display text
* dst: destination image where text will be displayed
* text: text to display in the dst image
* point: Upper left corner coordinate that shows text in the image
* color: text color
