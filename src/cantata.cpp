/**
 * Name        : cantata
 * Version     :
 * Vendor      :
 * Description :
 */


#include "cantata.h"
#include "cantataFrame.h"
#include "cantataFormFactory.h"
#include "cantataPanelFactory.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;


cantataApp::cantataApp(void)
{
}

cantataApp::~cantataApp(void)
{
}

UiApp*
cantataApp::CreateInstance(void)
{
	// Create the instance through the constructor.
	return new cantataApp();
}

bool
cantataApp::OnAppInitializing(AppRegistry& appRegistry)
{
	// TODO:
	// Initialize Frame and App specific data.
	// The App's permanent data and context can be obtained from the appRegistry.
	//
	// If this method is successful, return true; otherwise, return false.
	// If this method returns false, the App will be terminated.

	// Uncomment the following statement to listen to the screen on/off events.
	//PowerManager::SetScreenEventListener(*this);

	// TODO:
	// Add your initialization code here
	return true;
}

bool
cantataApp::OnAppInitialized(void)
{
	// TODO:
	// Comment.

	// Create a Frame
	cantataFrame* pcantataFrame = new cantataFrame();
	pcantataFrame->Construct();
	pcantataFrame->SetName(L"cantata");
	AddFrame(*pcantataFrame);

	// Prepare Scene management.
	SceneManager* pSceneManager = SceneManager::GetInstance();
	static cantataFormFactory formFactory;
	static cantataPanelFactory panelFactory;
	pSceneManager->RegisterFormFactory(formFactory);
	pSceneManager->RegisterPanelFactory(panelFactory);
	pSceneManager->RegisterScene(L"MainScene", L"MainForm", L"");

	// Goto the scene.
	if (pSceneManager->GoForward(ForwardSceneTransition(L"MainScene")) != E_SUCCESS)
		return false;

	return true;
}

bool
cantataApp::OnAppWillTerminate(void)
{
	// TODO:
	// Comment.
	return true;
}

bool
cantataApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO:
	// Deallocate resources allocated by this App for termination.
	// The App's permanent data and context can be saved via appRegistry.
	return true;
}

void
cantataApp::OnForeground(void)
{
	// TODO:
	// Start or resume drawing when the application is moved to the foreground.
}

void
cantataApp::OnBackground(void)
{
	// TODO:
	// Stop drawing when the application is moved to the background.
}

void
cantataApp::OnLowMemory(void)
{
	// TODO:
	// Free unused resources or close the application.
}

void
cantataApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO:
	// Handle any changes in battery level here.
	// Stop using multimedia features(camera, mp3 etc.) if the battery level is CRITICAL.
}

void
cantataApp::OnScreenOn(void)
{
	// TODO:
	// Get the released resources or resume the operations that were paused or stopped in OnScreenOff().
}

void
cantataApp::OnScreenOff(void)
{
	// TODO:
	// Unless there is a strong reason to do otherwise, release resources (such as 3D, media, and sensors) to allow the device
	// to enter the sleep mode to save the battery.
	// Invoking a lengthy asynchronous method within this listener method can be risky, because it is not guaranteed to invoke a
	// callback before the device enters the sleep mode.
	// Similarly, do not perform lengthy operations in this listener method. Any operation must be a quick one.
}
