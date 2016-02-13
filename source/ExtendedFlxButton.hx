package;

import flixel.*;
import flixel.text.*;
import flixel.ui.*;
import flixel.util.*;

class ExtendedFlxButton extends FlxButton{

    private var extendedFlxButtonObjectArray:Array<ExtendedFlxButton> = null;
    private var startXPosInt:Int = -1;

	public function new(

		_textString:String,
		_xPosInt:Float = 0,
		_yPosInt:Float = 0,
		_extendedFlxButtonObjectArray:Array<ExtendedFlxButton>,
		_flxState:FlxState,
		?_onclickFunction:Void->Void

	):Void{

		super(_xPosInt, _yPosInt, _textString, _onclickFunction);
        extendedFlxButtonObjectArray = _extendedFlxButtonObjectArray;
        startXPosInt = Std.int(_xPosInt);
		extendedFlxButtonObjectArray.push(this);

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < extendedFlxButtonObjectArray.length){

            trace(extendedFlxButtonObjectArray.length);
            trace(extendedFlxButtonObjectArray[loopCounter1Int]);
            extendedFlxButtonObjectArray[loopCounter1Int].SetPositionObject();
            loopCounter1Int ++;

        }

		_flxState.add(this);

	}

	private function AdjustYPositionAccordinglyInt(_buttonStartYPos:Int, _elementIndexInt:Int):Int{

        var yPosInt:Int = -1;
        var isEvenBool:Bool = false;
        var middleIndexInt:Int = 0;

        if(extendedFlxButtonObjectArray.length%2 == 0){ isEvenBool = true; }
        if(isEvenBool == true){
            middleIndexInt = Std.int(extendedFlxButtonObjectArray.length/2);

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (height/2) + ((_elementIndexInt - 1)*height)); }
            else if((_elementIndexInt + 1) <= middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (height/2) + (_elementIndexInt*height)); }

        }
        else if(isEvenBool == false){
            middleIndexInt = Std.int(extendedFlxButtonObjectArray.length/2) + 1;

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (_elementIndexInt - 1)*height); }
            else if((_elementIndexInt + 1) < middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (_elementIndexInt + 1)*height); }
            else if((_elementIndexInt + 1) == middleIndexInt){ yPosInt = Std.int(_buttonStartYPos); }

        }

        return yPosInt;

	}

    private function DestroyVoid():Void{

        extendedFlxButtonObjectArray.remove(this);
        FlxDestroyUtil.destroy(this);

    }

    public function SetPositionObject(){

        x = Std.int(startXPosInt - (width/2));
        y = AdjustYPositionAccordinglyInt(
            Std.int(FlxG.height/2 - height/2),
            extendedFlxButtonObjectArray.indexOf(this)
        );

        return this;

    }

}