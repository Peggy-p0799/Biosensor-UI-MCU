#ifndef INSTRUCTIONPAGE1VIEW_HPP
#define INSTRUCTIONPAGE1VIEW_HPP

#include <gui_generated/instructionpage1_screen/InstructionPage1ViewBase.hpp>
#include <gui/instructionpage1_screen/InstructionPage1Presenter.hpp>

class InstructionPage1View : public InstructionPage1ViewBase
{
public:
    InstructionPage1View();
    virtual ~InstructionPage1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // INSTRUCTIONPAGE1VIEW_HPP
