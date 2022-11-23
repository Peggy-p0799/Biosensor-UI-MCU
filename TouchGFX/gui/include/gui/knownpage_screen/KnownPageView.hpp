#ifndef KNOWNPAGEVIEW_HPP
#define KNOWNPAGEVIEW_HPP

#include <gui_generated/knownpage_screen/KnownPageViewBase.hpp>
#include <gui/knownpage_screen/KnownPagePresenter.hpp>

class KnownPageView : public KnownPageViewBase
{
public:
    KnownPageView();
    virtual ~KnownPageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KNOWNPAGEVIEW_HPP
