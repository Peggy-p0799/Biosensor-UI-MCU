/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/instructionpage2_screen/InstructionPage2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

InstructionPage2ViewBase::InstructionPage2ViewBase() :
    buttonCallback(this, &InstructionPage2ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_320X240PX_ID));

    I_lastbutton.setXY(63, 180);
    I_lastbutton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_UP_ARROW_32_ID));
    I_lastbutton.setIconXY(15, 22);
    I_lastbutton.setAction(buttonCallback);

    textArea1.setXY(28, 27);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6D9D));

    boxWithBorder1.setPosition(28, 58, 264, 112);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 135, 189));
    boxWithBorder1.setBorderSize(5);

    I_nextbutton2.setXY(196, 180);
    I_nextbutton2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID));
    I_nextbutton2.setIconXY(15, 22);
    I_nextbutton2.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(I_lastbutton);
    add(textArea1);
    add(boxWithBorder1);
    add(I_nextbutton2);
}

void InstructionPage2ViewBase::setupScreen()
{

}

void InstructionPage2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &I_lastbutton)
    {
        //Interaction2
        //When I_lastbutton clicked change screen to KnownPage
        //Go to KnownPage with screen transition towards North
        application().gotoKnownPageScreenSlideTransitionNorth();
    }
    else if (&src == &I_nextbutton2)
    {
        //Interaction1
        //When I_nextbutton2 clicked change screen to InstructionPage1
        //Go to InstructionPage1 with screen transition towards South
        application().gotoInstructionPage1ScreenSlideTransitionSouth();
    }
}
