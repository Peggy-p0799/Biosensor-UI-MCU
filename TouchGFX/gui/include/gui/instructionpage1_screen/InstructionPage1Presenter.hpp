#ifndef INSTRUCTIONPAGE1PRESENTER_HPP
#define INSTRUCTIONPAGE1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class InstructionPage1View;

class InstructionPage1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    InstructionPage1Presenter(InstructionPage1View& v);

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

    virtual ~InstructionPage1Presenter() {};

private:
    InstructionPage1Presenter();

    InstructionPage1View& view;
};

#endif // INSTRUCTIONPAGE1PRESENTER_HPP
