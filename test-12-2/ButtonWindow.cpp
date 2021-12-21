/* ButtonWindow.cpp */
#include "ButtonWindow.h" //헤더 파일 가져오기
#include <qpushbutton.h> //버튼 헤더 가져오기
#include <qapplication.h> //어플리케이션 헤더 가져오기
#include <iostream>

ButtonWindow::ButtonWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags){ //QMainWindow 상속
	this->setWindowTitle("This is the window Title"); //타이틀 생성
        QPushButton *button = new QPushButton("Click Me!", this); //버튼 생성
	button->setGeometry(50, 30, 70, 20);//버튼 크기 지정
	connect(button, SIGNAL(clicked()), this, SLOT(Clicked()));//클릭 시그널 발생 -> 슬롯(h파일에 정의된 것 호출)
}

ButtonWindow::~ButtonWindow()
{
}//위젯 소멸 - 자동 소멸해서 비어도 됨

void ButtonWindow::Clicked(void)//Clicked 함수
{
	std::cout << "clicked!\n";//메시지 출력
}

int main(int argc, char **argv)
{
	QApplication app(argc, argv);//어플리 케이션 생성
	ButtonWindow *window = new ButtonWindow(); //버튼 윈도우 호출
	
	window->show();//출력
	return app.exec();// 함수 다 돌고 종료시킴
}
