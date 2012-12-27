#ifndef _CANTATA_H_
#define _CANTATA_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>

/**
 * [cantataApp] UiApp must inherit from UiApp class
 * which provides basic features necessary to define an UiApp.
 */
class cantataApp
	: public Tizen::App::UiApp
	, public Tizen::System::IScreenEventListener
{
public:
	/**
	 * [Test] UiApp must have a factory method that creates an instance of itself.
	 */
	static Tizen::App::UiApp* CreateInstance(void);

public:
	cantataApp(void);
	virtual~cantataApp(void);

public:
	// Called when the UiApp is initializing.
	bool OnAppInitializing(Tizen::App::AppRegistry& appRegistry);

	// Called when the UiApp initializing is finished. 
	bool OnAppInitialized(void); 

	// Called when the UiApp is requested to terminate. 
	bool OnAppWillTerminate(void); 

	// Called when the UiApp is terminating.
	bool OnAppTerminating(Tizen::App::AppRegistry& appRegistry, bool forcedTermination = false);

	// Called when the UiApp's frame moves to the top of the screen.
	void OnForeground(void);

	// Called when this UiApp's frame is moved from top of the screen to the background.
	void OnBackground(void);

	// Called when the system memory is not sufficient to run the UiApp any further.
	void OnLowMemory(void);

	// Called when the battery level changes.
	void OnBatteryLevelChanged(Tizen::System::BatteryLevel batteryLevel);

	// Called when the screen turns on.
	void OnScreenOn(void);

	// Called when the screen turns off.
	void OnScreenOff(void);
};

#endif //  _CANTATA_H_
