/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoHomePageScreenScreenNoTransition();
    }

    // MainScreen
    void gotoMainScreenScreenSlideTransitionNorth();

    // HomePageScreen
    void gotoHomePageScreenScreenNoTransition();

    void gotoHomePageScreenScreenSlideTransitionSouth();

    void gotoHomePageScreenScreenSlideTransitionNorth();

    // CalibrationScreen
    void gotoCalibrationScreenScreenSlideTransitionSouth();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // MainScreen
    void gotoMainScreenScreenSlideTransitionNorthImpl();

    // HomePageScreen
    void gotoHomePageScreenScreenNoTransitionImpl();

    void gotoHomePageScreenScreenSlideTransitionSouthImpl();

    void gotoHomePageScreenScreenSlideTransitionNorthImpl();

    // CalibrationScreen
    void gotoCalibrationScreenScreenSlideTransitionSouthImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
