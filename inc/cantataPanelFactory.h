#ifndef _CANTATA_PANEL_FACTORY_H_
#define _CANTATA_PANEL_FACTORY_H_

#include <FUi.h>


class cantataPanelFactory
	: public Tizen::Ui::Scenes::IPanelFactory
{
public:
	cantataPanelFactory(void);
	virtual ~cantataPanelFactory(void);

	virtual Tizen::Ui::Controls::Panel* CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _CANTATA_PANEL_FACTORY_H_
