/* ButtonWindow.h */
// button clicked -> message pop-up
#include <QtWidgets/QMainWindow>
#include <qmainwindow.h>

class ButtonWindow : public QMainWindow{
	Q_OBJECT
	
	public:
		ButtonWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);
		virtual ~ButtonWindow();
		
	private slots:
		void Clicked(); //Clicked 함수 생성
};
