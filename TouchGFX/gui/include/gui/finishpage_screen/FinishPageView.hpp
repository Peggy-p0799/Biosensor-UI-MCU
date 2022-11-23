#ifndef FINISHPAGEVIEW_HPP
#define FINISHPAGEVIEW_HPP

#include <gui_generated/finishpage_screen/FinishPageViewBase.hpp>
#include <gui/finishpage_screen/FinishPagePresenter.hpp>

class FinishPageView : public FinishPageViewBase
{
public:
    FinishPageView();
    virtual ~FinishPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FINISHPAGEVIEW_HPP
