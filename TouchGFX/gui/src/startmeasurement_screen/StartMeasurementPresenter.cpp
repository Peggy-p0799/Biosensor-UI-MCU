#include <gui/startmeasurement_screen/StartMeasurementView.hpp>
#include <gui/startmeasurement_screen/StartMeasurementPresenter.hpp>

StartMeasurementPresenter::StartMeasurementPresenter(StartMeasurementView& v)
    : view(v)
{

}

void StartMeasurementPresenter::activate()
{

}

void StartMeasurementPresenter::deactivate()
{

}

void StartMeasurementPresenter::SMpresenter(){
	model->Callmeasurement();
}
