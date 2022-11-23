#ifndef DATADISPLAYLISTVIEW_HPP
#define DATADISPLAYLISTVIEW_HPP

#include <gui_generated/datadisplaylist_screen/DataDisplayListViewBase.hpp>
#include <gui/datadisplaylist_screen/DataDisplayListPresenter.hpp>

class DataDisplayListView : public DataDisplayListViewBase
{
public:
    DataDisplayListView();
    virtual ~DataDisplayListView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
//    virtual void SaveAllData();
protected:
};

#endif // DATADISPLAYLISTVIEW_HPP
