#include <gui/progressbar_screen/ProgressBarView.hpp>
#include <gui/progressbar_screen/ProgressBarPresenter.hpp>

ProgressBarPresenter::ProgressBarPresenter(ProgressBarView& v)
    : view(v)
{

}

void ProgressBarPresenter::activate()
{

}

void ProgressBarPresenter::deactivate()
{

}

void ProgressBarPresenter::ProgressPresenter(){
	model->ProgressCheck();
}
