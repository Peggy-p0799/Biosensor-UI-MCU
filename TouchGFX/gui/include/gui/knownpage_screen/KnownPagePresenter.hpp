#ifndef KNOWNPAGEPRESENTER_HPP
#define KNOWNPAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class KnownPageView;

class KnownPagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    KnownPagePresenter(KnownPageView& v);

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

    virtual ~KnownPagePresenter() {};

private:
    KnownPagePresenter();

    KnownPageView& view;
};

#endif // KNOWNPAGEPRESENTER_HPP
