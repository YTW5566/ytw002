#include<iostream>
#include<cmath>
using namespace std;
//定义圆类
class round {
public:
	//输入圆的半径
	void setR() {
		cout << "请输入圆的半径R:";
		cin >> m_R;
	}
	//输入圆的圆心坐标
	void setcenter() {
		cout << "请输入圆的圆心坐标(x y):";
		cin >> x >> y;
	}
	//获得圆的半径
	int getR() {
		return m_R;
	}
	//获得圆的圆心坐标
	int getcenter() {
		return x, y;
	}
	//确定点与圆的关系
	void pvp(float x1,float y1) {
		float d = (x - x1)*(x-x1)+(y-y1)*(y-y1);
		float l = sqrt(d);
		if (l > m_R) {
			cout << "该点在圆外" << endl;
			return;
		}
		if (l == m_R) {
			cout << "该点在圆上" << endl;
			return;
		}if (l < m_R) {
			cout << "该点在圆内" << endl;
			return;
		}
	}
private:
	//圆的半径
	int m_R = 0;
	//圆的圆心坐标
	int x = 0 , y = 0;
};
int main() {
	//圆1
	class round r1;
	r1.setcenter();
	r1.setR();
	//点的坐标
	int dx = 0, dy = 0;
	cout << "请输入点的坐标(x y):";
	cin >> dx >> dy;
	r1.pvp(dx, dy);
	system("pause");
	return 0;
}