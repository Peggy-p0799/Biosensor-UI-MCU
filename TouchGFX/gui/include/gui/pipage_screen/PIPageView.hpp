#ifndef PIPAGEVIEW_HPP
#define PIPAGEVIEW_HPP

#include <gui_generated/pipage_screen/PIPageViewBase.hpp>
#include <gui/pipage_screen/PIPagePresenter.hpp>

class PIPageView : public PIPageViewBase
{
public:
    PIPageView();
    virtual ~PIPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PIPAGEVIEW_HPP
