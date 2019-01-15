/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *h_layout_char;
    QLabel *label_char;
    QLabel *char_count;
    QHBoxLayout *h_layout_word;
    QLabel *label_word;
    QLabel *word_count;
    QHBoxLayout *h_layout_line;
    QLabel *label_line;
    QLabel *line_count;
    QHBoxLayout *h_layout_codeline;
    QLabel *label_codeline;
    QLabel *codeline_count;
    QHBoxLayout *h_layout_commentline;
    QLabel *label_commentline;
    QLabel *commnetline_count;
    QHBoxLayout *h_layout_emptyline;
    QLabel *label_emptyline;
    QLabel *emptyline_count;
    QVBoxLayout *v_layout_chosefile;
    QPushButton *chose_file_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QString::fromUtf8("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(897, 705);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        h_layout_char = new QHBoxLayout();
        h_layout_char->setSpacing(6);
        h_layout_char->setObjectName(QString::fromUtf8("h_layout_char"));
        label_char = new QLabel(centralWidget);
        label_char->setObjectName(QString::fromUtf8("label_char"));

        h_layout_char->addWidget(label_char);

        char_count = new QLabel(centralWidget);
        char_count->setObjectName(QString::fromUtf8("char_count"));

        h_layout_char->addWidget(char_count);


        verticalLayout->addLayout(h_layout_char);

        h_layout_word = new QHBoxLayout();
        h_layout_word->setSpacing(6);
        h_layout_word->setObjectName(QString::fromUtf8("h_layout_word"));
        label_word = new QLabel(centralWidget);
        label_word->setObjectName(QString::fromUtf8("label_word"));

        h_layout_word->addWidget(label_word);

        word_count = new QLabel(centralWidget);
        word_count->setObjectName(QString::fromUtf8("word_count"));

        h_layout_word->addWidget(word_count);


        verticalLayout->addLayout(h_layout_word);

        h_layout_line = new QHBoxLayout();
        h_layout_line->setSpacing(6);
        h_layout_line->setObjectName(QString::fromUtf8("h_layout_line"));
        label_line = new QLabel(centralWidget);
        label_line->setObjectName(QString::fromUtf8("label_line"));

        h_layout_line->addWidget(label_line);

        line_count = new QLabel(centralWidget);
        line_count->setObjectName(QString::fromUtf8("line_count"));

        h_layout_line->addWidget(line_count);


        verticalLayout->addLayout(h_layout_line);

        h_layout_codeline = new QHBoxLayout();
        h_layout_codeline->setSpacing(6);
        h_layout_codeline->setObjectName(QString::fromUtf8("h_layout_codeline"));
        label_codeline = new QLabel(centralWidget);
        label_codeline->setObjectName(QString::fromUtf8("label_codeline"));

        h_layout_codeline->addWidget(label_codeline);

        codeline_count = new QLabel(centralWidget);
        codeline_count->setObjectName(QString::fromUtf8("codeline_count"));

        h_layout_codeline->addWidget(codeline_count);


        verticalLayout->addLayout(h_layout_codeline);

        h_layout_commentline = new QHBoxLayout();
        h_layout_commentline->setSpacing(6);
        h_layout_commentline->setObjectName(QString::fromUtf8("h_layout_commentline"));
        label_commentline = new QLabel(centralWidget);
        label_commentline->setObjectName(QString::fromUtf8("label_commentline"));

        h_layout_commentline->addWidget(label_commentline);

        commnetline_count = new QLabel(centralWidget);
        commnetline_count->setObjectName(QString::fromUtf8("commnetline_count"));

        h_layout_commentline->addWidget(commnetline_count);


        verticalLayout->addLayout(h_layout_commentline);

        h_layout_emptyline = new QHBoxLayout();
        h_layout_emptyline->setSpacing(6);
        h_layout_emptyline->setObjectName(QString::fromUtf8("h_layout_emptyline"));
        label_emptyline = new QLabel(centralWidget);
        label_emptyline->setObjectName(QString::fromUtf8("label_emptyline"));

        h_layout_emptyline->addWidget(label_emptyline);

        emptyline_count = new QLabel(centralWidget);
        emptyline_count->setObjectName(QString::fromUtf8("emptyline_count"));

        h_layout_emptyline->addWidget(emptyline_count);


        verticalLayout->addLayout(h_layout_emptyline);

        v_layout_chosefile = new QVBoxLayout();
        v_layout_chosefile->setSpacing(6);
        v_layout_chosefile->setObjectName(QString::fromUtf8("v_layout_chosefile"));
        chose_file_button = new QPushButton(centralWidget);
        chose_file_button->setObjectName(QString::fromUtf8("chose_file_button"));

        v_layout_chosefile->addWidget(chose_file_button);


        verticalLayout->addLayout(v_layout_chosefile);


        verticalLayout_2->addLayout(verticalLayout);

        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 897, 26));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "WordCount", nullptr));
        label_char->setText(QApplication::translate("QtGuiApplication1Class", "Number of character:", nullptr));
        char_count->setText(QString());
        label_word->setText(QApplication::translate("QtGuiApplication1Class", "Number of word:", nullptr));
        word_count->setText(QString());
        label_line->setText(QApplication::translate("QtGuiApplication1Class", "Number of line:", nullptr));
        line_count->setText(QString());
        label_codeline->setText(QApplication::translate("QtGuiApplication1Class", "Number of code line:", nullptr));
        codeline_count->setText(QString());
        label_commentline->setText(QApplication::translate("QtGuiApplication1Class", "Number of comment line:", nullptr));
        commnetline_count->setText(QString());
        label_emptyline->setText(QApplication::translate("QtGuiApplication1Class", "Number of empty line:", nullptr));
        emptyline_count->setText(QString());
        chose_file_button->setText(QApplication::translate("QtGuiApplication1Class", "chose file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
