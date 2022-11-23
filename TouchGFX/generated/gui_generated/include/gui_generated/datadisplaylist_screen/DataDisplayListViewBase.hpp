/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DATADISPLAYLISTVIEWBASE_HPP
#define DATADISPLAYLISTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/datadisplaylist_screen/DataDisplayListPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class DataDisplayListViewBase : public touchgfx::View<DataDisplayListPresenter>
{
public:
    DataDisplayListViewBase();
    virtual ~DataDisplayListViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithLabel ReactanceGraph;
    touchgfx::ButtonWithLabel ResistanceGraph;
    touchgfx::ButtonWithLabel SaveData;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DataDisplayListViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // DATADISPLAYLISTVIEWBASE_HPP