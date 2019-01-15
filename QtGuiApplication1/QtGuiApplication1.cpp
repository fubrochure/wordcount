#include "stdafx.h"
#include "QtGuiApplication1.h"
#include "WC.h"

using namespace std;

Interface::Interface(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.chose_file_button, SIGNAL(clicked()), this, SLOT(set_file_information()));
}

void Interface::set_file_information()
{
	QString q_path = QFileDialog::getOpenFileName( this, tr("Chose file"), ".");
	WC wc(true, true, true, true);
	Result result;
	FILE *f;
	fopen_s(&f, q_path.toUtf8().constData(), "r");
	if (f == NULL) {
		cout << "open file failed" << endl;
		exit(1);
	}
	result = wc.Tell(f);
	ui.char_count->setText(QString::number(result.char_count));
	ui.word_count->setText(QString::number(result.word_count));
	ui.line_count->setText(QString::number(result.line_count));
	ui.codeline_count->setText(QString::number(result.code_count));
	ui.commnetline_count->setText(QString::number(result.comment_count));
	ui.emptyline_count->setText(QString::number(result.empty_count));
	return;
}
