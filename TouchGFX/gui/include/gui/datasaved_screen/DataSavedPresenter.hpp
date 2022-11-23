#ifndef DATASAVEDPRESENTER_HPP
#define DATASAVEDPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DataSavedView;

class DataSavedPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DataSavedPresenter(DataSavedView& v);

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

    virtual ~DataSavedPresenter() {};
   // void SDPresenter();
    void DSendPresenter();

private:
    DataSavedPresenter();

    DataSavedView& view;
};

#endif // DATASAVEDPRESENTER_HPP
