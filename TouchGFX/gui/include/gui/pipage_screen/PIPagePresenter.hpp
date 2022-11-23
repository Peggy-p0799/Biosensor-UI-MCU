#ifndef PIPAGEPRESENTER_HPP
#define PIPAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PIPageView;

class PIPagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PIPagePresenter(PIPageView& v);

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

    virtual ~PIPagePresenter() {};

private:
    PIPagePresenter();

    PIPageView& view;
};

#endif // PIPAGEPRESENTER_HPP
