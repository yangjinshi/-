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
	cout<<"请输入账号:";
	cin>> name;//让账号保存的a
	if(name=="wshk"){
		break;
	}else{
		cout<<"账号错误请从新输入账号"<<endl;
	}
	}
	while(true){
		cout<<"请输入密码;";
		cin >> pwd ;
	if( pwd=="345921061"){
		initgraph(1080,608);
	/*加载图片*/
	loadimage(0,"123.jpg");
	//画笔颜色
	setlinecolor(MAGENTA);
	//字体大小
	settextstyle(142,40,"微软雅黑");
	//字符输出背景模式。
	setbkmode(TRANSPARENT);
	
	settextcolor(YELLOW);
	outtextxy(50,20,"奇");
	outtextxy(50,162,"牛");
	outtextxy(50,304,"学");
	outtextxy(50,446,"院");

	settextstyle(20,10,_T("微软雅黑"));
	//字体颜色
	settextcolor(LIGHTCYAN);

	//图框位置
	rectangle(700,100,1000,140);
	rectangle(700,150,1000,190);
	rectangle(700,200,1000,240);
	rectangle(700,250,1000,290);
	rectangle(700,300,1000,340);
	rectangle(700,350,1000,390);
	//图框中打字
	outtextxy(705,105,"1.网址404攻击!");
	outtextxy(705,155,"2.网站篡改攻击！");
	outtextxy(705,205,"3.网站修复攻击！");
	outtextxy(705,255,"4.查看攻击记录！");
	outtextxy(705,305,"5.DNS攻击!");
	outtextxy(705,350,"6.退出！");

	//播放歌曲
	mciSendString(_T("play 风起.MP3 repeat"),0,0,0);
		break;
		
	}else{		
		cout<<"密码错误请从新输入"<<endl;
	}
	}

		 

	system("pause");
	closegraph();
	return 0;

}