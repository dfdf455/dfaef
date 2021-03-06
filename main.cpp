#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtCore/QString>
#include <QtCore/QTextCodec>

QString qkor(const char *);

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QLabel hello(qkor("한글 넣기 <i>번거로운</i> <b>QString</b>!"));
	hello.show();
	return app.exec();
}

QString qkor(const char *strKor)
{
	static QTextCodec *codec = QTextCodec::codecForName("eucKR");
	return codec->toUnicode(strKor);
}