/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef REACTANCEGRAPHVIEWBASE_HPP
#define REACTANCEGRAPHVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/reactancegraph_screen/ReactanceGraphPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/graph/Graph.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class ReactanceGraphViewBase : public touchgfx::View<ReactanceGraphPresenter>
{
public:
    ReactanceGraphViewBase();
    virtual ~ReactanceGraphViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void PlotReactance()
    {
        // Override and implement this function in ReactanceGraph
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithIcon ReturnToList2;
    touchgfx::Graph<26> ReactanceGraph;
    touchgfx::GraphElementLine ReactanceGraphLine1;
    touchgfx::PainterRGB565 ReactanceGraphLine1Painter;
    touchgfx::GraphElementGridX ReactanceGraphMajorXAxisGrid;
    touchgfx::GraphElementGridY ReactanceGraphMajorYAxisGrid;
    touchgfx::GraphLabelsX ReactanceGraphMajorXAxisLabel;
    touchgfx::GraphLabelsY ReactanceGraphMajorYAxisLabel;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ReactanceGraphViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 4800;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // REACTANCEGRAPHVIEWBASE_HPP
