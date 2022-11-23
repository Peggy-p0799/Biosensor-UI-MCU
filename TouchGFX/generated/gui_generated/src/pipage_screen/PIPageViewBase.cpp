/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/pipage_screen/PIPageViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

PIPageViewBase::PIPageViewBase() :
    buttonCallback(this, &PIPageViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_TEXTURE_320X240PX_ID));

    textArea1.setXY(28, 27);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P62M));

    NextButton2.setXY(130, 180);
    NextButton2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID));
    NextButton2.setIconXY(15, 22);
    NextButton2.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(textArea1);
    add(NextButton2);
}

void PIPageViewBase::setupScreen()
{

}

void PIPageViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &NextButton2)
    {
        //Interaction1
        //When NextButton2 clicked change screen to StartMeasurement
        //Go to StartMeasurement with screen transition towards North
        application().gotoStartMeasurementScreenSlideTransitionNorth();
    }
}
