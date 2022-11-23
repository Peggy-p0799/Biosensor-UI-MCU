#include <gui/startmeasurement_screen/StartMeasurementView.hpp>

StartMeasurementView::StartMeasurementView()
{

}

void StartMeasurementView::setupScreen()
{
    StartMeasurementViewBase::setupScreen();
}

void StartMeasurementView::tearDownScreen()
{
    StartMeasurementViewBase::tearDownScreen();
}

void StartMeasurementView::StartMeasurement()
{
  presenter->SMpresenter();
}
