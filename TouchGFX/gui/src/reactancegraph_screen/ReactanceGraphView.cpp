#include <gui/reactancegraph_screen/ReactanceGraphView.hpp>

ReactanceGraphView::ReactanceGraphView()
{

}

void ReactanceGraphView::setupScreen()
{
    ReactanceGraphViewBase::setupScreen();
}

void ReactanceGraphView::tearDownScreen()
{
    ReactanceGraphViewBase::tearDownScreen();
}

extern float Reactance[31];
int m=5;

void ReactanceGraphView::PlotReactance(){


	//	presenter->RGraphPresenter();
		ReactanceGraph.clear();
		for(m=5;m<31;m++){
			ReactanceGraph.addDataPoint((float)m,(float)Reactance[m]);
		}
}


