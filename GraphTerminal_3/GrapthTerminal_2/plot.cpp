#include <qwt_math.h>
#include <qwt_scale_engine.h>
#include <qwt_symbol.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_curve.h>
#include <qwt_legend.h>
#include <qwt_text.h>
#include <qwt_legend.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_grid.h>
#include <qmath.h>
#include "plot.h"
#include <cstdlib>
int period = 1;
QString title;
Plot::Plot( QWidget *parent ):
    QwtPlot( parent )
{
  this->setCanvasBackground( Qt::white );
  this->insertLegend( new QwtLegend(),TopLegend);
  points = new QPolygonF(550);
  curve = new QwtPlotCurve();
  curve->setTitle( "title" );
  curve->setPen( Qt::blue, 2 ),
  curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );
  curve->attach( this );
  grid = new QwtPlotGrid;
  grid->enableXMin(true);
  grid->attach(this);
}
void Plot::Redraw()
{
QPolygonF shift;
shift << QPointF(-1,0);
    if (time > 550)
        {
           time = 0;
           points->clear();
       // points->translate(-1,0);
       // points->subtracted(points[0]);
        }
    points->push_front(QPointF( time, value));
   // points->append(QPointF( time, value));
    curve->setSamples( *points );
    curve->setVisible(true);
     QwtPlot::replot();
}

void Plot::UpdateValue(int v,int t)
{
    value = v;
    time += t;
    Redraw();
   // qDebug()<< "points" << points;
}
void Plot::SetTitle(QString t)
{
    curve->setTitle(t);
}

void Plot::SetColor(QColor c)
{
    curve->setPen(c,2);
}
