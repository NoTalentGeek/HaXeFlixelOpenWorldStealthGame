#ifndef INCLUDED_ExtendedFlxButton
#define INCLUDED_ExtendedFlxButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
HX_DECLARE_CLASS0(ExtendedFlxButton)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  ExtendedFlxButton_obj : public ::flixel::ui::FlxButton_obj{
	public:
		typedef ::flixel::ui::FlxButton_obj super;
		typedef ExtendedFlxButton_obj OBJ_;
		ExtendedFlxButton_obj();
		Void __construct(::String _textString,hx::Null< Float >  __o__xPosInt,hx::Null< Float >  __o__yPosInt,Array< ::Dynamic > _extendedFlxButtonObjectArray,::flixel::FlxState _flxState,Dynamic _onclickFunction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ExtendedFlxButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExtendedFlxButton_obj > __new(::String _textString,hx::Null< Float >  __o__xPosInt,hx::Null< Float >  __o__yPosInt,Array< ::Dynamic > _extendedFlxButtonObjectArray,::flixel::FlxState _flxState,Dynamic _onclickFunction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExtendedFlxButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ExtendedFlxButton","\xeb","\x67","\xd4","\xf2"); }

		Array< ::Dynamic > extendedFlxButtonObjectArray;
		int startXPosInt;
		virtual int AdjustYPositionAccordinglyInt( int _buttonStartYPos,int _elementIndexInt);
		Dynamic AdjustYPositionAccordinglyInt_dyn();

		virtual Void DestroyVoid( );
		Dynamic DestroyVoid_dyn();

		virtual ::ExtendedFlxButton SetPositionObject( );
		Dynamic SetPositionObject_dyn();

};


#endif /* INCLUDED_ExtendedFlxButton */ 
