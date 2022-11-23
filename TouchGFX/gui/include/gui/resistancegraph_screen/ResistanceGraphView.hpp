#ifndef RESISTANCEGRAPHVIEW_HPP
#define RESISTANCEGRAPHVIEW_HPP

#include <gui_generated/resistancegraph_screen/ResistanceGraphViewBase.hpp>
#include <gui/resistancegraph_screen/ResistanceGraphPresenter.hpp>

class ResistanceGraphView : public ResistanceGraphViewBase
{
public:
    ResistanceGraphView();
    virtual ~ResistanceGraphView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void PlotResistance();
protected:
};

#endif // RESISTANCEGRAPHVIEW_HPP
