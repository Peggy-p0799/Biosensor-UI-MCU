#ifndef REACTANCEGRAPHVIEW_HPP
#define REACTANCEGRAPHVIEW_HPP

#include <gui_generated/reactancegraph_screen/ReactanceGraphViewBase.hpp>
#include <gui/reactancegraph_screen/ReactanceGraphPresenter.hpp>

class ReactanceGraphView : public ReactanceGraphViewBase
{
public:
    ReactanceGraphView();
    virtual ~ReactanceGraphView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void PlotReactance();
protected:
};

#endif // REACTANCEGRAPHVIEW_HPP
