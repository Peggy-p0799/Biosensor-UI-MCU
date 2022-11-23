#ifndef STARTMEASUREMENTPRESENTER_HPP
#define STARTMEASUREMENTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class StartMeasurementView;

class StartMeasurementPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    StartMeasurementPresenter(StartMeasurementView& v);

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

    virtual ~StartMeasurementPresenter() {};

    void SMpresenter();
private:
    StartMeasurementPresenter();

    StartMeasurementView& view;
};

#endif // STARTMEASUREMENTPRESENTER_HPP
