#ifndef _CANTATA_FORM_FACTORY_H_
#define _CANTATA_FORM_FACTORY_H_

#include <FUi.h>


class cantataFormFactory
	: public Tizen::Ui::Scenes::IFormFactory
{
public:
	cantataFormFactory(void);
	virtual ~cantataFormFactory(void);

	virtual Tizen::Ui::Controls::Form* CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _CANTATA_FORM_FACTORY_H_
