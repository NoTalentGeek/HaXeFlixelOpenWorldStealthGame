#include <hxcpp.h>

#ifndef INCLUDED_ExtendedFlxButton
#include <ExtendedFlxButton.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void ExtendedFlxButton_obj::__construct(::String _textString,hx::Null< Float >  __o__xPosInt,hx::Null< Float >  __o__yPosInt,Array< ::Dynamic > _extendedFlxButtonObjectArray,::flixel::FlxState _flxState,Dynamic _onclickFunction)
{
HX_STACK_FRAME("ExtendedFlxButton","new",0xa079da5d,"ExtendedFlxButton.new","ExtendedFlxButton.hx",8,0x3a1e5fb3)
HX_STACK_THIS(this)
HX_STACK_ARG(_textString,"_textString")
HX_STACK_ARG(__o__xPosInt,"_xPosInt")
HX_STACK_ARG(__o__yPosInt,"_yPosInt")
HX_STACK_ARG(_extendedFlxButtonObjectArray,"_extendedFlxButtonObjectArray")
HX_STACK_ARG(_flxState,"_flxState")
HX_STACK_ARG(_onclickFunction,"_onclickFunction")
Float _xPosInt = __o__xPosInt.Default(0);
Float _yPosInt = __o__yPosInt.Default(0);
{
	HX_STACK_LINE(11)
	this->startXPosInt = (int)-1;
	HX_STACK_LINE(10)
	this->extendedFlxButtonObjectArray = null();
	HX_STACK_LINE(24)
	Float tmp = _xPosInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = _yPosInt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::String tmp2 = _textString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	Dynamic tmp3 = _onclickFunction;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(25)
	this->extendedFlxButtonObjectArray = _extendedFlxButtonObjectArray;
	HX_STACK_LINE(26)
	Float tmp4 = _xPosInt;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	this->startXPosInt = tmp5;
	HX_STACK_LINE(27)
	this->extendedFlxButtonObjectArray->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(29)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(30)
	while((true)){
		HX_STACK_LINE(30)
		int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		int tmp7 = this->extendedFlxButtonObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		if ((tmp9)){
			HX_STACK_LINE(30)
			break;
		}
		HX_STACK_LINE(32)
		int tmp10 = this->extendedFlxButtonObjectArray->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("ExtendedFlxButton.hx","\xb3","\x5f","\x1e","\x3a"),32,HX_HCSTRING("ExtendedFlxButton","\xeb","\x67","\xd4","\xf2"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		::haxe::Log_obj::trace(tmp10,tmp11);
		HX_STACK_LINE(33)
		::ExtendedFlxButton tmp12 = this->extendedFlxButtonObjectArray->__get(loopCounter1Int).StaticCast< ::ExtendedFlxButton >();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("ExtendedFlxButton.hx","\xb3","\x5f","\x1e","\x3a"),33,HX_HCSTRING("ExtendedFlxButton","\xeb","\x67","\xd4","\xf2"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(33)
		::haxe::Log_obj::trace(tmp12,tmp13);
		HX_STACK_LINE(34)
		::ExtendedFlxButton tmp14 = this->extendedFlxButtonObjectArray->__get(loopCounter1Int).StaticCast< ::ExtendedFlxButton >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		tmp14->SetPositionObject();
		HX_STACK_LINE(35)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(39)
	_flxState->add(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//ExtendedFlxButton_obj::~ExtendedFlxButton_obj() { }

Dynamic ExtendedFlxButton_obj::__CreateEmpty() { return  new ExtendedFlxButton_obj; }
hx::ObjectPtr< ExtendedFlxButton_obj > ExtendedFlxButton_obj::__new(::String _textString,hx::Null< Float >  __o__xPosInt,hx::Null< Float >  __o__yPosInt,Array< ::Dynamic > _extendedFlxButtonObjectArray,::flixel::FlxState _flxState,Dynamic _onclickFunction)
{  hx::ObjectPtr< ExtendedFlxButton_obj > _result_ = new ExtendedFlxButton_obj();
	_result_->__construct(_textString,__o__xPosInt,__o__yPosInt,_extendedFlxButtonObjectArray,_flxState,_onclickFunction);
	return _result_;}

Dynamic ExtendedFlxButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExtendedFlxButton_obj > _result_ = new ExtendedFlxButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

int ExtendedFlxButton_obj::AdjustYPositionAccordinglyInt( int _buttonStartYPos,int _elementIndexInt){
	HX_STACK_FRAME("ExtendedFlxButton","AdjustYPositionAccordinglyInt",0xeaef18b0,"ExtendedFlxButton.AdjustYPositionAccordinglyInt","ExtendedFlxButton.hx",43,0x3a1e5fb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_buttonStartYPos,"_buttonStartYPos")
	HX_STACK_ARG(_elementIndexInt,"_elementIndexInt")
	HX_STACK_LINE(45)
	int yPosInt = (int)-1;		HX_STACK_VAR(yPosInt,"yPosInt");
	HX_STACK_LINE(46)
	bool isEvenBool = false;		HX_STACK_VAR(isEvenBool,"isEvenBool");
	HX_STACK_LINE(47)
	int middleIndexInt = (int)0;		HX_STACK_VAR(middleIndexInt,"middleIndexInt");
	HX_STACK_LINE(49)
	int tmp = this->extendedFlxButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	int tmp1 = hx::Mod(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(49)
		isEvenBool = true;
	}
	HX_STACK_LINE(50)
	bool tmp3 = (isEvenBool == true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	if ((tmp3)){
		HX_STACK_LINE(51)
		int tmp4 = this->extendedFlxButtonObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		middleIndexInt = tmp6;
		HX_STACK_LINE(53)
		int tmp7 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		int tmp8 = middleIndexInt;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		if ((tmp9)){
			HX_STACK_LINE(53)
			int tmp10 = _buttonStartYPos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Float tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			int tmp14 = (_elementIndexInt - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(53)
			Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(53)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(53)
			yPosInt = tmp18;
		}
		else{
			HX_STACK_LINE(54)
			int tmp10 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			int tmp11 = middleIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			bool tmp12 = (tmp10 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			if ((tmp12)){
				HX_STACK_LINE(54)
				int tmp13 = _buttonStartYPos;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(54)
				int tmp17 = _elementIndexInt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(54)
				Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(54)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(54)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(54)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(54)
				yPosInt = tmp21;
			}
		}
	}
	else{
		HX_STACK_LINE(57)
		bool tmp4 = (isEvenBool == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(58)
			int tmp5 = this->extendedFlxButtonObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			middleIndexInt = tmp8;
			HX_STACK_LINE(60)
			int tmp9 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			int tmp10 = middleIndexInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			if ((tmp11)){
				HX_STACK_LINE(60)
				int tmp12 = _buttonStartYPos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				int tmp13 = (_elementIndexInt - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				yPosInt = tmp17;
			}
			else{
				HX_STACK_LINE(61)
				int tmp12 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = middleIndexInt;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				if ((tmp14)){
					HX_STACK_LINE(61)
					int tmp15 = _buttonStartYPos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					int tmp16 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(61)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(61)
					Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(61)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(61)
					yPosInt = tmp20;
				}
				else{
					HX_STACK_LINE(62)
					int tmp15 = (_elementIndexInt + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					int tmp16 = middleIndexInt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					if ((tmp17)){
						HX_STACK_LINE(62)
						int tmp18 = _buttonStartYPos;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(62)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(62)
						yPosInt = tmp19;
					}
				}
			}
		}
	}
	HX_STACK_LINE(66)
	int tmp4 = yPosInt;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ExtendedFlxButton_obj,AdjustYPositionAccordinglyInt,return )

Void ExtendedFlxButton_obj::DestroyVoid( ){
{
		HX_STACK_FRAME("ExtendedFlxButton","DestroyVoid",0xbc04884b,"ExtendedFlxButton.DestroyVoid","ExtendedFlxButton.hx",70,0x3a1e5fb3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->extendedFlxButtonObjectArray->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(73)
		::flixel::util::FlxDestroyUtil_obj::destroy(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExtendedFlxButton_obj,DestroyVoid,(void))

::ExtendedFlxButton ExtendedFlxButton_obj::SetPositionObject( ){
	HX_STACK_FRAME("ExtendedFlxButton","SetPositionObject",0x0d89ea27,"ExtendedFlxButton.SetPositionObject","ExtendedFlxButton.hx",77,0x3a1e5fb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	int tmp = this->startXPosInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	this->set_x(tmp4);
	HX_STACK_LINE(81)
	int tmp5 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(81)
	Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	int tmp11 = this->extendedFlxButtonObjectArray->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(80)
	int tmp12 = this->AdjustYPositionAccordinglyInt(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(80)
	this->set_y(tmp12);
	HX_STACK_LINE(85)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ExtendedFlxButton_obj,SetPositionObject,return )


ExtendedFlxButton_obj::ExtendedFlxButton_obj()
{
}

void ExtendedFlxButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExtendedFlxButton);
	HX_MARK_MEMBER_NAME(extendedFlxButtonObjectArray,"extendedFlxButtonObjectArray");
	HX_MARK_MEMBER_NAME(startXPosInt,"startXPosInt");
	::flixel::ui::FlxTypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExtendedFlxButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extendedFlxButtonObjectArray,"extendedFlxButtonObjectArray");
	HX_VISIT_MEMBER_NAME(startXPosInt,"startXPosInt");
	::flixel::ui::FlxTypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ExtendedFlxButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"DestroyVoid") ) { return DestroyVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startXPosInt") ) { return startXPosInt; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SetPositionObject") ) { return SetPositionObject_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"extendedFlxButtonObjectArray") ) { return extendedFlxButtonObjectArray; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"AdjustYPositionAccordinglyInt") ) { return AdjustYPositionAccordinglyInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExtendedFlxButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"startXPosInt") ) { startXPosInt=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"extendedFlxButtonObjectArray") ) { extendedFlxButtonObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExtendedFlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1"));
	outFields->push(HX_HCSTRING("startXPosInt","\x11","\x1e","\xfe","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ExtendedFlxButton_obj,extendedFlxButtonObjectArray),HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1")},
	{hx::fsInt,(int)offsetof(ExtendedFlxButton_obj,startXPosInt),HX_HCSTRING("startXPosInt","\x11","\x1e","\xfe","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("extendedFlxButtonObjectArray","\x0f","\x30","\x8d","\xa1"),
	HX_HCSTRING("startXPosInt","\x11","\x1e","\xfe","\x21"),
	HX_HCSTRING("AdjustYPositionAccordinglyInt","\x73","\xc6","\x8a","\x04"),
	HX_HCSTRING("DestroyVoid","\x4e","\xb9","\x98","\x90"),
	HX_HCSTRING("SetPositionObject","\x6a","\x3f","\x99","\xa1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExtendedFlxButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExtendedFlxButton_obj::__mClass,"__mClass");
};

#endif

hx::Class ExtendedFlxButton_obj::__mClass;

void ExtendedFlxButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ExtendedFlxButton","\xeb","\x67","\xd4","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExtendedFlxButton_obj >;
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

