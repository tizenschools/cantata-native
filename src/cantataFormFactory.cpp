#include "cantataFormFactory.h"
#include "cantataMainForm.h"

using namespace Tizen::Ui::Scenes;


cantataFormFactory::cantataFormFactory(void)
{
}

cantataFormFactory::~cantataFormFactory(void)
{
}

Tizen::Ui::Controls::Form*
cantataFormFactory::CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Form* pNewForm = null;

	if (formId == L"MainForm")
	{
		cantataMainForm* pForm = new cantataMainForm();
		pForm->Initialize();
		pSceneManager->AddSceneEventListener(sceneId, *pForm);
		pNewForm = pForm;
	}
	// TODO:
	// Add your form creation code here

	return pNewForm;
}
