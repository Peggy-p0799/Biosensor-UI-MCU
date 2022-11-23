#ifndef STARTPAGEPRESENTER_HPP
#define STARTPAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class StartPageView;

class StartPagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    StartPagePresenter(StartPageView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~StartPagePresenter() {};

private:
    StartPagePresenter();

    StartPageView& view;
};

#endif // STARTPAGEPRESENTER_HPP
