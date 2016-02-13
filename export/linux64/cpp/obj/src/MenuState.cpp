#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",13,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	this->mainMenuButtonObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(19)
	this->testButtonObject = null();
	HX_STACK_LINE(18)
	this->exitButtonObject = null();
	HX_STACK_LINE(17)
	this->optionButtonObject = null();
	HX_STACK_LINE(16)
	this->playGameButtonObject = null();
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",26,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::create();
		HX_STACK_LINE(29)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		Dynamic tmp4 = this->ChangeToMainStateVoid_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::flixel::ui::FlxButton tmp5 = ::flixel::ui::FlxButton_obj::__new(tmp1,tmp3,HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		this->playGameButtonObject = tmp5;
		HX_STACK_LINE(30)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp7,tmp9,HX_HCSTRING("Option","\x95","\x47","\x0f","\x60"),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		this->optionButtonObject = tmp10;
		HX_STACK_LINE(31)
		int tmp11 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(31)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(31)
		int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(31)
		Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new(tmp12,tmp14,HX_HCSTRING("Exit","\x3e","\x23","\xf7","\x2d"),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(31)
		this->exitButtonObject = tmp15;
		HX_STACK_LINE(32)
		int tmp16 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(32)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(32)
		int tmp18 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(32)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(32)
		::flixel::ui::FlxButton tmp20 = ::flixel::ui::FlxButton_obj::__new(tmp17,tmp19,HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37"),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(32)
		this->testButtonObject = tmp20;
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp21 = this->playGameButtonObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(35)
		this->mainMenuButtonObjectArray->push(tmp21);
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton tmp22 = this->optionButtonObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(36)
		this->mainMenuButtonObjectArray->push(tmp22);
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp23 = this->exitButtonObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		this->mainMenuButtonObjectArray->push(tmp23);
		HX_STACK_LINE(38)
		::flixel::ui::FlxButton tmp24 = this->testButtonObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		this->mainMenuButtonObjectArray->push(tmp24);
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp25 = this->playGameButtonObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp26 = this->playGameButtonObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(40)
		Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(40)
		::flixel::ui::FlxButton tmp28 = this->playGameButtonObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(40)
		Float tmp29 = tmp28->get_width();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(40)
		Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(40)
		Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(40)
		int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(40)
		tmp25->set_x(tmp32);
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp33 = this->playGameButtonObject;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton tmp34 = this->playGameButtonObject;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(42)
		Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(42)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(43)
		int tmp37 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(43)
		Float tmp38 = (Float(tmp37) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(43)
		::flixel::ui::FlxButton tmp39 = this->playGameButtonObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(43)
		Float tmp40 = tmp39->get_height();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(43)
		Float tmp41 = (Float(tmp40) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(43)
		Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(43)
		int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(44)
		::flixel::ui::FlxButton tmp44 = this->playGameButtonObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(44)
		int tmp45 = this->mainMenuButtonObjectArray->indexOf(tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(41)
		int tmp46 = this->MainMenuButtonObjectArrayAdjustYPosInt(tmp36,tmp43,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(41)
		tmp33->set_y(tmp46);
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp47 = this->optionButtonObject;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp48 = this->optionButtonObject;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(46)
		Float tmp49 = tmp48->x;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(46)
		::flixel::ui::FlxButton tmp50 = this->optionButtonObject;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(46)
		Float tmp51 = tmp50->get_width();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(46)
		Float tmp52 = (Float(tmp51) / Float((int)2));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(46)
		Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(46)
		int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(46)
		tmp47->set_x(tmp54);
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton tmp55 = this->optionButtonObject;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(48)
		::flixel::ui::FlxButton tmp56 = this->optionButtonObject;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(48)
		Float tmp57 = tmp56->get_height();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(48)
		int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(49)
		int tmp59 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(49)
		Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(49)
		::flixel::ui::FlxButton tmp61 = this->optionButtonObject;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(49)
		Float tmp62 = tmp61->get_height();		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(49)
		Float tmp63 = (Float(tmp62) / Float((int)2));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(49)
		Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(49)
		int tmp65 = ::Std_obj::_int(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(50)
		::flixel::ui::FlxButton tmp66 = this->optionButtonObject;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(50)
		int tmp67 = this->mainMenuButtonObjectArray->indexOf(tmp66,null());		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(47)
		int tmp68 = this->MainMenuButtonObjectArrayAdjustYPosInt(tmp58,tmp65,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(47)
		tmp55->set_y(tmp68);
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp69 = this->exitButtonObject;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp70 = this->exitButtonObject;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(52)
		Float tmp71 = tmp70->x;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(52)
		::flixel::ui::FlxButton tmp72 = this->exitButtonObject;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(52)
		Float tmp73 = tmp72->get_width();		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(52)
		Float tmp74 = (Float(tmp73) / Float((int)2));		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(52)
		Float tmp75 = (tmp71 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(52)
		int tmp76 = ::Std_obj::_int(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(52)
		tmp69->set_x(tmp76);
		HX_STACK_LINE(53)
		::flixel::ui::FlxButton tmp77 = this->exitButtonObject;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(54)
		::flixel::ui::FlxButton tmp78 = this->exitButtonObject;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(54)
		Float tmp79 = tmp78->get_height();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(54)
		int tmp80 = ::Std_obj::_int(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(55)
		int tmp81 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(55)
		Float tmp82 = (Float(tmp81) / Float((int)2));		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(55)
		::flixel::ui::FlxButton tmp83 = this->exitButtonObject;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(55)
		Float tmp84 = tmp83->get_height();		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(55)
		Float tmp85 = (Float(tmp84) / Float((int)2));		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(55)
		Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(55)
		int tmp87 = ::Std_obj::_int(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(56)
		::flixel::ui::FlxButton tmp88 = this->exitButtonObject;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(56)
		int tmp89 = this->mainMenuButtonObjectArray->indexOf(tmp88,null());		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(53)
		int tmp90 = this->MainMenuButtonObjectArrayAdjustYPosInt(tmp80,tmp87,tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(53)
		tmp77->set_y(tmp90);
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp91 = this->testButtonObject;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp92 = this->testButtonObject;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(58)
		Float tmp93 = tmp92->x;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton tmp94 = this->testButtonObject;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(58)
		Float tmp95 = tmp94->get_width();		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(58)
		Float tmp96 = (Float(tmp95) / Float((int)2));		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(58)
		Float tmp97 = (tmp93 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(58)
		int tmp98 = ::Std_obj::_int(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(58)
		tmp91->set_x(tmp98);
		HX_STACK_LINE(59)
		::flixel::ui::FlxButton tmp99 = this->testButtonObject;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(60)
		::flixel::ui::FlxButton tmp100 = this->testButtonObject;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(60)
		Float tmp101 = tmp100->get_height();		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(60)
		int tmp102 = ::Std_obj::_int(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(61)
		int tmp103 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(61)
		Float tmp104 = (Float(tmp103) / Float((int)2));		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(61)
		::flixel::ui::FlxButton tmp105 = this->testButtonObject;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(61)
		Float tmp106 = tmp105->get_height();		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(61)
		Float tmp107 = (Float(tmp106) / Float((int)2));		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(61)
		Float tmp108 = (tmp104 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(61)
		int tmp109 = ::Std_obj::_int(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(62)
		::flixel::ui::FlxButton tmp110 = this->testButtonObject;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(62)
		int tmp111 = this->mainMenuButtonObjectArray->indexOf(tmp110,null());		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(59)
		int tmp112 = this->MainMenuButtonObjectArrayAdjustYPosInt(tmp102,tmp109,tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(59)
		tmp99->set_y(tmp112);
		HX_STACK_LINE(65)
		::flixel::ui::FlxButton tmp113 = this->playGameButtonObject;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(65)
		this->add(tmp113);
		HX_STACK_LINE(66)
		::flixel::ui::FlxButton tmp114 = this->optionButtonObject;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(66)
		this->add(tmp114);
		HX_STACK_LINE(67)
		::flixel::ui::FlxButton tmp115 = this->exitButtonObject;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(67)
		this->add(tmp115);
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton tmp116 = this->testButtonObject;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(68)
		this->add(tmp116);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",77,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",85,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->super::update();
	}
return null();
}


Void MenuState_obj::ChangeToMainStateVoid( ){
{
		HX_STACK_FRAME("MenuState","ChangeToMainStateVoid",0xfaa342c5,"MenuState.ChangeToMainStateVoid","MenuState.hx",89,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(89)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,ChangeToMainStateVoid,(void))

int MenuState_obj::MainMenuButtonObjectArrayAdjustYPosInt( int _buttonHeightInt,int _buttonStartYPos,int _elementIndexInt){
	HX_STACK_FRAME("MenuState","MainMenuButtonObjectArrayAdjustYPosInt",0xdebf9f71,"MenuState.MainMenuButtonObjectArrayAdjustYPosInt","MenuState.hx",91,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buttonHeightInt,"_buttonHeightInt")
	HX_STACK_ARG(_buttonStartYPos,"_buttonStartYPos")
	HX_STACK_ARG(_elementIndexInt,"_elementIndexInt")
	HX_STACK_LINE(93)
	int yPosInt = (int)-1;		HX_STACK_VAR(yPosInt,"yPosInt");
	HX_STACK_LINE(94)
	bool isEvenBool = false;		HX_STACK_VAR(isEvenBool,"isEvenBool");
	HX_STACK_LINE(95)
	int middleIndexInt = (int)0;		HX_STACK_VAR(middleIndexInt,"middleIndexInt");
	HX_STACK_LINE(97)
	int tmp = this->mainMenuButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1 = hx::Mod(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	if ((tmp2)){
		HX_STACK_LINE(97)
		isEvenBool = true;
	}
	HX_STACK_LINE(98)
	bool tmp3 = (isEvenBool == true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	if ((tmp3)){
		HX_STACK_LINE(99)
		int tmp4 = this->mainMenuButtonObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		middleIndexInt = tmp6;
		HX_STACK_LINE(101)
		int tmp7 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		int tmp8 = middleIndexInt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		if ((tmp9)){
			HX_STACK_LINE(101)
			int tmp10 = _buttonStartYPos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			Float tmp11 = (Float(_buttonHeightInt) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			int tmp13 = (_elementIndexInt - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(101)
			int tmp14 = _buttonHeightInt;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(101)
			int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(101)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(101)
			yPosInt = tmp17;
		}
		else{
			HX_STACK_LINE(102)
			int tmp10 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			int tmp11 = middleIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			bool tmp12 = (tmp10 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			if ((tmp12)){
				HX_STACK_LINE(102)
				int tmp13 = _buttonStartYPos;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				Float tmp14 = (Float(_buttonHeightInt) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int tmp16 = (_elementIndexInt * _buttonHeightInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				yPosInt = tmp18;
			}
		}
	}
	else{
		HX_STACK_LINE(105)
		bool tmp4 = (isEvenBool == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		if ((tmp4)){
			HX_STACK_LINE(106)
			int tmp5 = this->mainMenuButtonObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			middleIndexInt = tmp8;
			HX_STACK_LINE(108)
			int tmp9 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			int tmp10 = middleIndexInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			if ((tmp11)){
				HX_STACK_LINE(108)
				int tmp12 = _buttonStartYPos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(108)
				int tmp13 = (_elementIndexInt - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				int tmp14 = _buttonHeightInt;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(108)
				int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				int tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(108)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				yPosInt = tmp17;
			}
			else{
				HX_STACK_LINE(109)
				int tmp12 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				int tmp13 = middleIndexInt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(109)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				if ((tmp14)){
					HX_STACK_LINE(109)
					int tmp15 = _buttonStartYPos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(109)
					int tmp16 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(109)
					int tmp17 = _buttonHeightInt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(109)
					int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(109)
					int tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(109)
					yPosInt = tmp20;
				}
				else{
					HX_STACK_LINE(110)
					int tmp15 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(110)
					int tmp16 = middleIndexInt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(110)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(110)
					if ((tmp17)){
						HX_STACK_LINE(110)
						int tmp18 = _buttonStartYPos;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(110)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(110)
						yPosInt = tmp19;
					}
				}
			}
		}
	}
	HX_STACK_LINE(114)
	int tmp4 = yPosInt;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(MenuState_obj,MainMenuButtonObjectArrayAdjustYPosInt,return )


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(playGameButtonObject,"playGameButtonObject");
	HX_MARK_MEMBER_NAME(optionButtonObject,"optionButtonObject");
	HX_MARK_MEMBER_NAME(exitButtonObject,"exitButtonObject");
	HX_MARK_MEMBER_NAME(testButtonObject,"testButtonObject");
	HX_MARK_MEMBER_NAME(mainMenuButtonObjectArray,"mainMenuButtonObjectArray");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playGameButtonObject,"playGameButtonObject");
	HX_VISIT_MEMBER_NAME(optionButtonObject,"optionButtonObject");
	HX_VISIT_MEMBER_NAME(exitButtonObject,"exitButtonObject");
	HX_VISIT_MEMBER_NAME(testButtonObject,"testButtonObject");
	HX_VISIT_MEMBER_NAME(mainMenuButtonObjectArray,"mainMenuButtonObjectArray");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"exitButtonObject") ) { return exitButtonObject; }
		if (HX_FIELD_EQ(inName,"testButtonObject") ) { return testButtonObject; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"optionButtonObject") ) { return optionButtonObject; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"playGameButtonObject") ) { return playGameButtonObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ChangeToMainStateVoid") ) { return ChangeToMainStateVoid_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"mainMenuButtonObjectArray") ) { return mainMenuButtonObjectArray; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"MainMenuButtonObjectArrayAdjustYPosInt") ) { return MainMenuButtonObjectArrayAdjustYPosInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"exitButtonObject") ) { exitButtonObject=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testButtonObject") ) { testButtonObject=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"optionButtonObject") ) { optionButtonObject=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"playGameButtonObject") ) { playGameButtonObject=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"mainMenuButtonObjectArray") ) { mainMenuButtonObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a"));
	outFields->push(HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87"));
	outFields->push(HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65"));
	outFields->push(HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d"));
	outFields->push(HX_HCSTRING("mainMenuButtonObjectArray","\xf0","\xbf","\x40","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,playGameButtonObject),HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,optionButtonObject),HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,exitButtonObject),HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,testButtonObject),HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MenuState_obj,mainMenuButtonObjectArray),HX_HCSTRING("mainMenuButtonObjectArray","\xf0","\xbf","\x40","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a"),
	HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87"),
	HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65"),
	HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d"),
	HX_HCSTRING("mainMenuButtonObjectArray","\xf0","\xbf","\x40","\x6f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ChangeToMainStateVoid","\x61","\x38","\xeb","\x2d"),
	HX_HCSTRING("MainMenuButtonObjectArrayAdjustYPosInt","\x55","\x9a","\x19","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

