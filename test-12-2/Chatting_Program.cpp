#include <QtWidgets/QWidget>
//#include <QtUITools/QWidget>

int main(int argc, char **argv)
{
	Q_INT_RESOURCE(Chatting_Program);
	QApplication app(argc, argv);
	QUiLoader loader;
	
	QFile file(":Chatting_Progrma.ui");
	file.open(Qfile::ReadOnly);
	QWidget *widget = load.load(&file);
	file.close();
	
	widget->show();
	return appp.exec();
}
