// C++ 给 VS2017 安装 OpenCV 参考链接: https://www.jianshu.com/p/518ec045d23d

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

int main()
{
	// 输入图像
	String imgPath = "D:/Users/Administrator/source/repos/OpenCVAlgorithmByCPP/dataSet/lena.jpg";
	Mat img = imread(imgPath, IMREAD_ANYCOLOR);

	// 显示图像
	String winName = "image";
	namedWindow(winName, WINDOW_NORMAL);
	imshow(winName, img);
	waitKey(0);
	destroyAllWindows();
	return 0;
}