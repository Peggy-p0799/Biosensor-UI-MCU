#ifndef DATASAVEDVIEW_HPP
#define DATASAVEDVIEW_HPP

#include <gui_generated/datasaved_screen/DataSavedViewBase.hpp>
#include <gui/datasaved_screen/DataSavedPresenter.hpp>

class DataSavedView : public DataSavedViewBase
{
public:
    DataSavedView();
    virtual ~DataSavedView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
};

#endif // DATASAVEDVIEW_HPP
