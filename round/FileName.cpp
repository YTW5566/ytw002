#include<iostream>
#include<cmath>
using namespace std;
//����Բ��
class round {
public:
	//����Բ�İ뾶
	void setR() {
		cout << "������Բ�İ뾶R:";
		cin >> m_R;
	}
	//����Բ��Բ������
	void setcenter() {
		cout << "������Բ��Բ������(x y):";
		cin >> x >> y;
	}
	//���Բ�İ뾶
	int getR() {
		return m_R;
	}
	//���Բ��Բ������
	int getcenter() {
		return x, y;
	}
	//ȷ������Բ�Ĺ�ϵ
	void pvp(float x1,float y1) {
		float d = (x - x1)*(x-x1)+(y-y1)*(y-y1);
		float l = sqrt(d);
		if (l > m_R) {
			cout << "�õ���Բ��" << endl;
			return;
		}
		if (l == m_R) {
			cout << "�õ���Բ��" << endl;
			return;
		}if (l < m_R) {
			cout << "�õ���Բ��" << endl;
			return;
		}
	}
private:
	//Բ�İ뾶
	int m_R = 0;
	//Բ��Բ������
	int x = 0 , y = 0;
};
int main() {
	//Բ1
	class round r1;
	r1.setcenter();
	r1.setR();
	//�������
	int dx = 0, dy = 0;
	cout << "������������(x y):";
	cin >> dx >> dy;
	r1.pvp(dx, dy);
	system("pause");
	return 0;
}