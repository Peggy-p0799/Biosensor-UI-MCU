#include <gui/datasaved_screen/DataSavedView.hpp>
#include <gui/datasaved_screen/DataSavedPresenter.hpp>

DataSavedPresenter::DataSavedPresenter(DataSavedView& v)
    : view(v)
{

}

void DataSavedPresenter::activate()
{

}

void DataSavedPresenter::deactivate()
{

}

void DataSavedPresenter::DSendPresenter(){
	model-> DataSaveStart();
}
