#include <gui/datadisplaylist_screen/DataDisplayListView.hpp>
#include <gui/datadisplaylist_screen/DataDisplayListPresenter.hpp>

DataDisplayListPresenter::DataDisplayListPresenter(DataDisplayListView& v)
    : view(v)
{

}

void DataDisplayListPresenter::activate()
{

}

void DataDisplayListPresenter::deactivate()
{

}

void DataDisplayListPresenter::SaveAllPresenter(){
	model->DataSaveStart();
}
