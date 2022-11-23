#ifndef INSTRUCTIONPAGE2PRESENTER_HPP
#define INSTRUCTIONPAGE2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class InstructionPage2View;

class InstructionPage2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    InstructionPage2Presenter(InstructionPage2View& v);

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

    virtual ~InstructionPage2Presenter() {};

private:
    InstructionPage2Presenter();

    InstructionPage2View& view;
};

#endif // INSTRUCTIONPAGE2PRESENTER_HPP
