#include<graphics.h>
#include<iostream>
#include<Windows.h>
#include<MMSystem.h>
#include<string>
#pragma comment(lib,"winmm.lib")
	 using namespace std;

int main(void){
	string name;
	string pwd;
	while(1  ){
	cout<<"�������˺�:";
	cin>> name;//���˺ű����a
	if(name=="wshk"){
		break;
	}else{
		cout<<"�˺Ŵ�������������˺�"<<endl;
	}
	}
	while(true){
		cout<<"����������;";
		cin >> pwd ;
	if( pwd=="345921061"){
		initgraph(1080,608);
	/*����ͼƬ*/
	loadimage(0,"123.jpg");
	//������ɫ
	setlinecolor(MAGENTA);
	//�����С
	settextstyle(142,40,"΢���ź�");
	//�ַ��������ģʽ��
	setbkmode(TRANSPARENT);
	
	settextcolor(YELLOW);
	outtextxy(50,20,"��");
	outtextxy(50,162,"ţ");
	outtextxy(50,304,"ѧ");
	outtextxy(50,446,"Ժ");

	settextstyle(20,10,_T("΢���ź�"));
	//������ɫ
	settextcolor(LIGHTCYAN);

	//ͼ��λ��
	rectangle(700,100,1000,140);
	rectangle(700,150,1000,190);
	rectangle(700,200,1000,240);
	rectangle(700,250,1000,290);
	rectangle(700,300,1000,340);
	rectangle(700,350,1000,390);
	//ͼ���д���
	outtextxy(705,105,"1.��ַ404����!");
	outtextxy(705,155,"2.��վ�۸Ĺ�����");
	outtextxy(705,205,"3.��վ�޸�������");
	outtextxy(705,255,"4.�鿴������¼��");
	outtextxy(705,305,"5.DNS����!");
	outtextxy(705,350,"6.�˳���");

	//���Ÿ���
	mciSendString(_T("play ����.MP3 repeat"),0,0,0);
		break;
		
	}else{		
		cout<<"����������������"<<endl;
	}
	}

		 

	system("pause");
	closegraph();
	return 0;

}