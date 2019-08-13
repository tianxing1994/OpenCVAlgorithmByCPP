// C++ �� VS2017 ��װ OpenCV �ο�����: https://www.jianshu.com/p/518ec045d23d

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

int main()
{
	// ����ͼ��
	String imgPath = "D:/Users/Administrator/source/repos/OpenCVAlgorithmByCPP/dataSet/lena.jpg";
	Mat img = imread(imgPath, IMREAD_ANYCOLOR);

	// ��ʾͼ��
	String winName = "image";
	namedWindow(winName, WINDOW_NORMAL);
	imshow(winName, img);
	waitKey(0);
	destroyAllWindows();
	return 0;
}