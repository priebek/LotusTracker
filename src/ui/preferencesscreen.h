#ifndef PREFERENCESSCREEN_H
#define PREFERENCESSCREEN_H

#include <QCloseEvent>
#include <QMainWindow>

namespace Ui { class Preferences; }

class PreferencesScreen : public QMainWindow
{
    Q_OBJECT

private:
    void closeEvent(QCloseEvent *event);
    void applyCurrentSettings();
    void onStartAtLoginChanged();
    void onCardLayoutChanged();
    void onShowOnlyRemainingCardsChanged();
    void onTrackerAlphaChanged();
    void onPTEnabledChanged();
    void onPTStatisticsChanged();
    void onOTEnabledChanged();
    void onRestoreDefaultsSettingsClicked();
    Ui::Preferences *ui;

public:
    explicit PreferencesScreen(QWidget *parent = 0);
    ~PreferencesScreen();

signals:
    void sgnRestoreDefaults();
    void sgnTrackerAlpha(qreal alpha);
    void sgnTrackerCardLayout(QString cardLayout);
    void sgnShowOnlyRemainingCardsEnabled(bool enabled);
    void sgnPlayerTrackerEnabled(bool enabled);
    void sgnPlayerTrackerStatistics(bool enabled);
    void sgnOpponentTrackerEnabled(bool enabled);

};

#endif // PREFERENCESSCREEN_H
