#include <gui/resistancegraph_screen/ResistanceGraphView.hpp>

ResistanceGraphView::ResistanceGraphView()
{

}

void ResistanceGraphView::setupScreen()
{
    ResistanceGraphViewBase::setupScreen();
}

void ResistanceGraphView::tearDownScreen()
{
    ResistanceGraphViewBase::tearDownScreen();
}

extern float Resistance[31];
int n=5;

void ResistanceGraphView::PlotResistance(){

//	presenter->RGraphPresenter();
	ResistanceGraph.clear();
	for(n=5;n<31;n++){
		ResistanceGraph.addDataPoint((float)n,(float)Resistance[n]);
	}
}
