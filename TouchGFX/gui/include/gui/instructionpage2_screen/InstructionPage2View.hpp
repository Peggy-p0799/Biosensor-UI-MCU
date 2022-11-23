#ifndef INSTRUCTIONPAGE2VIEW_HPP
#define INSTRUCTIONPAGE2VIEW_HPP

#include <gui_generated/instructionpage2_screen/InstructionPage2ViewBase.hpp>
#include <gui/instructionpage2_screen/InstructionPage2Presenter.hpp>

class InstructionPage2View : public InstructionPage2ViewBase
{
public:
    InstructionPage2View();
    virtual ~InstructionPage2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // INSTRUCTIONPAGE2VIEW_HPP
