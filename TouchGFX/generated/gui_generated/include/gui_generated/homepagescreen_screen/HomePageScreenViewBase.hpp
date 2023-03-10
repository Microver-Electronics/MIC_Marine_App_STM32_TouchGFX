/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef HOMEPAGESCREENVIEWBASE_HPP
#define HOMEPAGESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/homepagescreen_screen/HomePageScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class HomePageScreenViewBase : public touchgfx::View<HomePageScreenPresenter>
{
public:
    HomePageScreenViewBase();
    virtual ~HomePageScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image HomePageScreenBG;
    touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  HomeScrToGaugeScrBtn;
    touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  HomeScrToCalibScrBtn;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<HomePageScreenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // HOMEPAGESCREENVIEWBASE_HPP
