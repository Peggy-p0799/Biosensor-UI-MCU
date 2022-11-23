/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId LARGE = 1;
    static const touchgfx::FontId SMALL = 2;
    static const touchgfx::FontId TITLEFLOWER = 3;
    static const touchgfx::FontId SUBTITLE = 4;
    static const touchgfx::FontId CHAPTERTITLE = 5;
    static const touchgfx::FontId CHOICEBAR = 6;
    static const touchgfx::FontId GRAPHAXIS = 7;
    static const touchgfx::FontId HIGHLIGHT = 8;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;      // verdana_20_4bpp
    static const touchgfx::FontId LARGE = 1;        // verdana_40_4bpp
    static const touchgfx::FontId SMALL = 2;        // verdana_10_4bpp
    static const touchgfx::FontId TITLEFLOWER = 3;  // VLADIMIR_TTF_40_4bpp
    static const touchgfx::FontId SUBTITLE = 4;     // times_12_4bpp
    static const touchgfx::FontId CHAPTERTITLE = 5; // timesbd_20_4bpp
    static const touchgfx::FontId CHOICEBAR = 6;    // arialbd_14_4bpp
    static const touchgfx::FontId GRAPHAXIS = 2;    // verdana_10_4bpp
    static const touchgfx::FontId HIGHLIGHT = 7;    // arialbi_10_4bpp
    static const uint16_t NUMBER_OF_FONTS = 8;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
    {
    }
    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
