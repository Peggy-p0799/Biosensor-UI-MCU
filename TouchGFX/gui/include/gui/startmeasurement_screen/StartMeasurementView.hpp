#ifndef STARTMEASUREMENTVIEW_HPP
#define STARTMEASUREMENTVIEW_HPP

#include <gui_generated/startmeasurement_screen/StartMeasurementViewBase.hpp>
#include <gui/startmeasurement_screen/StartMeasurementPresenter.hpp>

class StartMeasurementView : public StartMeasurementViewBase
{
public:
    StartMeasurementView();
    virtual ~StartMeasurementView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void StartMeasurement();
protected:
};

#endif // STARTMEASUREMENTVIEW_HPP
