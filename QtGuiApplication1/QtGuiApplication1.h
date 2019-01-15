#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"

class Interface : public QMainWindow
{
	Q_OBJECT

public:
	Interface(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication1Class ui;

private slots:
	void set_file_information();
};
