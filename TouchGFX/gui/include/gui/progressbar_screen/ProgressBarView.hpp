#ifndef PROGRESSBARVIEW_HPP
#define PROGRESSBARVIEW_HPP

#include <gui_generated/progressbar_screen/ProgressBarViewBase.hpp>
#include <gui/progressbar_screen/ProgressBarPresenter.hpp>

class ProgressBarView : public ProgressBarViewBase
{
public:
    ProgressBarView();
    virtual ~ProgressBarView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
};

#endif // PROGRESSBARVIEW_HPP
