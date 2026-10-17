#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(FIridiumMenuLayer, MenuLayer)
{
    bool init()
    {
        if (!MenuLayer::init())
            return false;

        log::info("Iridium Menu v{}!", Mod::get()->getVersion().toVString());
        
        CCNode* BottomMenu = this->getChildByID("bottom-menu");
        if (!BottomMenu)
        {
            log::warn("Could not find 'bottom-menu' node! Iridium's main menu button will be missing...");
            return true;
        }

        // TODO: (Ayydxn) Change the button sprite to something like an appropriately styled version of Iridium's logo.
        CCMenuItemSpriteExtra* IridiumButton = CCMenuItemSpriteExtra::create(CCSprite::createWithSpriteFrameName("GJ_likeBtn_001.png"), this,
            menu_selector(FIridiumMenuLayer::OnIridiumButtonPressed));
        IridiumButton->setID("iridium-button"_spr);

        BottomMenu->addChild(IridiumButton);
        BottomMenu->updateLayout();

        return true;
    }

    void OnIridiumButtonPressed(CCObject*)
    {
        FLAlertLayer::create(
            "Iridium Menu",
            "In the future, this will open up to some other menu for configuring other stuff with the mod menu.",
            "OK"
        )->show();
    }
};
