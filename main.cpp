#include <iostream>
#include <string>
#include <list>
#include "cost.h"

using namespace std;

int main()
{
    Mat i1 = imread("/home/westwell/sgm_qt/sgm/example/left/01.png");
    Mat i2 = imread("/home/westwell/sgm_qt/sgm/example/left/01.png");


    Scalar mssim = getMSSIM(i1,i2);


    printf("%f\n",mssim.val[0] * 100);
    printf("%f\n",mssim.val[1] * 100);
    printf("%f\n",mssim.val[2] * 100);

    cv::waitKey();
}
