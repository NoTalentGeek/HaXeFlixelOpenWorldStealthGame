#include <hxcpp.h>

#ifndef INCLUDED_ExtendedFlxButton
#include <ExtendedFlxButton.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",11,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	this->extendedFlxButtonObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(17)
	this->testButtonObject = null();
	HX_STACK_LINE(16)
	this->exitButtonObject = null();
	HX_STACK_LINE(15)
	this->optionButtonObject = null();
	HX_STACK_LINE(14)
	this->playGameButtonObject = null();
	HX_STACK_LINE(11)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
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
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",24,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::create();
		HX_STACK_LINE(27)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Dynamic tmp4 = this->ChangeToMainStateVoid_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::ExtendedFlxButton tmp5 = ::ExtendedFlxButton_obj::__new(HX_HCSTRING("Play","\x14","\x5a","\x33","\x35"),tmp1,tmp3,this->extendedFlxButtonObjectArray,hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		this->playGameButtonObject = tmp5;
		HX_STACK_LINE(28)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(28)
		::ExtendedFlxButton tmp10 = ::ExtendedFlxButton_obj::__new(HX_HCSTRING("Option","\x95","\x47","\x0f","\x60"),tmp7,tmp9,this->extendedFlxButtonObjectArray,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		this->optionButtonObject = tmp10;
		HX_STACK_LINE(29)
		int tmp11 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(29)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		int tmp13 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(29)
		Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(29)
		::ExtendedFlxButton tmp15 = ::ExtendedFlxButton_obj::__new(HX_HCSTRING("Exit","\x3e","\x23","\xf7","\x2d"),tmp12,tmp14,this->extendedFlxButtonObjectArray,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(29)
		this->exitButtonObject = tmp15;
		HX_STACK_LINE(30)
		int tmp16 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		int tmp18 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(30)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(30)
		::ExtendedFlxButton tmp20 = ::ExtendedFlxButton_obj::__new(HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37"),tmp17,tmp19,this->extendedFlxButtonObjectArray,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		this->testButtonObject = tmp20;
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",40,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",48,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->super::update();
	}
return null();
}


Void MenuState_obj::ChangeToMainStateVoid( ){
{
		HX_STACK_FRAME("MenuState","ChangeToMainStateVoid",0xfaa342c5,"MenuState.ChangeToMainStateVoid","MenuState.hx",52,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(52)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,ChangeToMainStateVoid,(void))


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
	HX_MARK_MEMBER_NAME(extendedFlxButtonObjectArray,"extendedFlxButtonObjectArray");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playGameButtonObject,"playGameButtonObject");
	HX_VISIT_MEMBER_NAME(optionButtonObject,"optionButtonObject");
	HX_VISIT_MEMBER_NAME(exitButtonObject,"exitButtonObject");
	HX_VISIT_MEMBER_NAME(testButtonObject,"testButtonObject");
	HX_VISIT_MEMBER_NAME(extendedFlxButtonObjectArray,"extendedFlxButtonObjectArray");
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
	case 28:
		if (HX_FIELD_EQ(inName,"extendedFlxButtonObjectArray") ) { return extendedFlxButtonObjectArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"exitButtonObject") ) { exitButtonObject=inValue.Cast< ::ExtendedFlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testButtonObject") ) { testButtonObject=inValue.Cast< ::ExtendedFlxButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"optionButtonObject") ) { optionButtonObject=inValue.Cast< ::ExtendedFlxButton >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"playGameButtonObject") ) { playGameButtonObject=inValue.Cast< ::ExtendedFlxButton >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"extendedFlxButtonObjectArray") ) { extendedFlxButtonObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a"));
	outFields->push(HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87"));
	outFields->push(HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65"));
	outFields->push(HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d"));
	outFields->push(HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ExtendedFlxButton*/ ,(int)offsetof(MenuState_obj,playGameButtonObject),HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a")},
	{hx::fsObject /*::ExtendedFlxButton*/ ,(int)offsetof(MenuState_obj,optionButtonObject),HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87")},
	{hx::fsObject /*::ExtendedFlxButton*/ ,(int)offsetof(MenuState_obj,exitButtonObject),HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65")},
	{hx::fsObject /*::ExtendedFlxButton*/ ,(int)offsetof(MenuState_obj,testButtonObject),HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MenuState_obj,extendedFlxButtonObjectArray),HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("playGameButtonObject","\x77","\xeb","\x28","\x6a"),
	HX_HCSTRING("optionButtonObject","\x66","\x51","\xf4","\x87"),
	HX_HCSTRING("exitButtonObject","\x8f","\xce","\x52","\x65"),
	HX_HCSTRING("testButtonObject","\xc3","\x9d","\x3d","\x9d"),
	HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("ChangeToMainStateVoid","\x61","\x38","\xeb","\x2d"),
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

