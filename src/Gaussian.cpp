#include "Gaussian.h"

Gaussian::Gaussian() {
}

Gaussian::~Gaussian() {
}

bool Gaussian::open(string filePath) {
	inputImage = imread(filePath, IMREAD_COLOR);
	if (inputImage.empty())
		return false;

	stringstream ss;
	ss << filePath << "Blurred.png";
	this->outputFilePath = ss.str();
	return true;
}

void Gaussian::show() {
	namedWindow("Input Image", WINDOW_AUTOSIZE);
	// TODO: include trackbar calling blurImage as action method
	imshow("Input Image", inputImage);
	waitKey(0);
}

//void Gaussian::blur(int value, void* data) {
//	// TODO: implement this method
//}

//void Gaussian::onMouseClick(int event, int x, int y, int flags, void* data) {
//  // TODO: implement this method
//}
