#include <gui/datasaved_screen/DataSavedView.hpp>

DataSavedView::DataSavedView()
{

}

void DataSavedView::setupScreen()
{
    DataSavedViewBase::setupScreen();
}

void DataSavedView::tearDownScreen()
{
    DataSavedViewBase::tearDownScreen();
}


void DataSavedView::handleTickEvent(){
	presenter->DSendPresenter();
}
