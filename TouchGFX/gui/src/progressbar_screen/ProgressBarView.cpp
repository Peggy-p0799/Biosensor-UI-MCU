#include <gui/progressbar_screen/ProgressBarView.hpp>

ProgressBarView::ProgressBarView()
{

}

void ProgressBarView::setupScreen()
{
    ProgressBarViewBase::setupScreen();
}

void ProgressBarView::tearDownScreen()
{
    ProgressBarViewBase::tearDownScreen();
}

extern int ProgressUpdate;
void ProgressBarView::handleTickEvent(){
  presenter->ProgressPresenter();
  circleProgress1.setValue(ProgressUpdate);
  textProgress1.setValue(ProgressUpdate);
  if(ProgressUpdate==100){
	  application().gotoDataDisplayListScreenSlideTransitionNorth();
  }
}
