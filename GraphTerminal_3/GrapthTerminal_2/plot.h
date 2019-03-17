#ifndef _PLOT_H_
#define _PLOT_H_

#include <qwt_plot.h>
#include <qwt_plot_grid.h>
#include <qwt_legend.h>
#include <qwt_plot_curve.h>
#include <qwt_symbol.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_picker.h>
#include <qwt_picker_machine.h>
#include <qwt_legend.h>
#include <QTimer>
class QwtPlotCurve;
class QwtPlotMarker;

class Plot: public QwtPlot
{
    Q_OBJECT

public:
    Plot( QWidget *parent );
void UpdateValue(int, int);

public Q_SLOTS:

void Redraw(void);
void SetTitle(QString);
void SetColor(QColor);

private:
int time;
float value;
QwtPlotCurve *curve;
QwtPlotGrid *grid;
QPolygonF *points;
QPolygonF section;
QPointF offset;

};

#endif
