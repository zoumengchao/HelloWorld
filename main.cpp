#include "stdio.h"
#include "iostream"
#include "opencv.hpp"

using namespace std;
using namespace cv;

void main(){

Mat test = imread("zmc.jpg")
imshow("zmc",test);
waitKey();
cout<<"Hello world"<<endl;

}
