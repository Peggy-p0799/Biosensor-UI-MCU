#ifndef STARTPAGEVIEW_HPP
#define STARTPAGEVIEW_HPP

#include <gui_generated/startpage_screen/StartPageViewBase.hpp>
#include <gui/startpage_screen/StartPagePresenter.hpp>

class StartPageView : public StartPageViewBase
{
public:
    StartPageView();
    virtual ~StartPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STARTPAGEVIEW_HPP
