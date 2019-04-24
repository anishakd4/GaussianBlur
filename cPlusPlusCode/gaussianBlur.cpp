#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(){
    //Read image
    Mat image = imread("../assets/putin_noise.jpg");

    //check if image exits
    if(image.empty()){
        cout<<"can not find image"<<endl;
        return 0;
    }
    Mat result1, result2;

    //Apply gaussian filter with kernel size 5
    GaussianBlur(image, result1, Size(5, 5), 0, 0);

    //Apply gaussian filter with kernel size 20
    GaussianBlur(image, result2, Size(15, 15), 0, 0);

    //Create windows to display images
    namedWindow("image", WINDOW_NORMAL);
    namedWindow("result1", WINDOW_NORMAL);
    namedWindow("result2", WINDOW_NORMAL);

    //display images
    imshow("image", image);
    imshow("result1", result1);
    imshow("result2", result2);

    //press esc to exit the program
    waitKey(0);

    //close all the opened windows
    destroyAllWindows();

    return 0;
}