#ifndef INCLUDED_flixel_input_FlxSwipe
#define INCLUDED_flixel_input_FlxSwipe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxSwipe)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxSwipe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSwipe_obj OBJ_;
		FlxSwipe_obj();
		Void __construct(int ID,::flixel::util::FlxPoint StartPosition,::flixel::util::FlxPoint EndPosition,Float StartTimeInTicks);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxSwipe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSwipe_obj > __new(int ID,::flixel::util::FlxPoint StartPosition,::flixel::util::FlxPoint EndPosition,Float StartTimeInTicks);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSwipe_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSwipe","\xc8","\x32","\xe7","\x42"); }

		int ID;
		::flixel::util::FlxPoint startPosition;
		::flixel::util::FlxPoint endPosition;
		Float _startTimeInTicks;
		Float _endTimeInTicks;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

		virtual Float get_angle( );
		Dynamic get_angle_dyn();

		virtual Float get_duration( );
		Dynamic get_duration_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxSwipe */ 
