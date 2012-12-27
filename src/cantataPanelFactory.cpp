#include "cantataPanelFactory.h"
#include <FUi.h>

using namespace Tizen::Ui::Scenes;


cantataPanelFactory::cantataPanelFactory(void)
{
}

cantataPanelFactory::~cantataPanelFactory(void)
{
}

Tizen::Ui::Controls::Panel*
cantataPanelFactory::CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Panel* pNewPanel = null;

	// TODO:
	// Add your panel creation code here
	return pNewPanel;
}
