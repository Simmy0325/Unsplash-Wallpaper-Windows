#ifndef UNSPLASH_GUI_H_OLD
#define UNSPLASH_GUI_H_OLD

#include <QtWidgets/QMainWindow>
#include "ui_unsplash_gui.h"
#include "Unsplash_Wei_old.h"
#include <thread>
#include "qsystemtrayicon.h"
#include <QtGui\QCloseEvent>
#include <VersionHelpers.h>

class Unsplash_GUI_old : public QMainWindow, public unsplash::Unsplash_Wei_old
{
	Q_OBJECT

public:
	Unsplash_GUI_old(QWidget *parent = 0);
	~Unsplash_GUI_old();

public slots:
	void on_Refresh_clicked();
	void on_Res_changed();
	void on_Interval_changed();
	void on_defaultSave_clicked();
	void on_changeSave_clicked();
	void on_hide_clicked();
	void on_About_clicked();
	void on_differentWallpaper_clicked(int state);

//protected:
//	void closeEvent(QCloseEvent* e); //overwrite the close button to minimize the window instead

private:
	Ui::Unsplash_GUIClass ui;
	int intervalComboboxLastIdx; //in case the user cancel on the add custom interval action, revert back to showing the last interval selection
	std::thread loopExecThread;
	QSystemTrayIcon* trayObj;
	QMenu* trayObjMenu;
	QAction* exitAct;
	QAction* settingAct;

private slots:
	void trayMenuActivated(QSystemTrayIcon::ActivationReason reason);
};

#endif // UNSPLASH_GUI_H_OLD
