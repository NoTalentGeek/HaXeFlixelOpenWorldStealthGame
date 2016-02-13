package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

class ExtendedFlxButton extends FlxButton{

    private var ExtendedFlxButtonObjectArray:Array<ExtendedFlxButton> = null;

	public function new(

		_textString:String,
		_xPosInt:Float = 0,
		_yPosInt:Float = 0,
		_ExtendedFlxButtonObjectArray:Array<ExtendedFlxButton>,
		_flxState:FlxState,
		?_onclickFunction:Void->Void

	):Void{

		super(_xPosInt, _yPosInt, _textString, _onclickFunction):
        ExtendedFlxButtonObjectArray = _ExtendedFlxButtonObjectArray;
		ExtendedFlxButtonObjectArray.push(this);
		x = Std.int(x - (width/2));
		y = AdjustYPositionAccordinglyInt(
            Std.int(FlxG.height/2 - height/2),
            _ExtendedFlxButtonObjectArray.indexOf(optionButtonObject)
		);
		_flxState.add(this);

	}

	private function AdjustYPositionAccordinglyInt(_buttonStartYPos:Int, _elementIndexInt:Int):Int{

        var yPosInt:Int = -1;
        var isEvenBool:Bool = false;
        var middleIndexInt:Int = 0;

        if(ExtendedFlxButtonObjectArray.length%2 == 0){ isEvenBool = true; }
        if(isEvenBool == true){
            middleIndexInt = Std.int(ExtendedFlxButtonObjectArray.length/2);

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (height/2) + ((_elementIndexInt - 1)*height)); }
            else if((_elementIndexInt + 1) <= middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (height/2) + (_elementIndexInt*height)); }

        }
        else if(isEvenBool == false){
            middleIndexInt = Std.int(ExtendedFlxButtonObjectArray.length/2) + 1;

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (_elementIndexInt - 1)*height); }
            else if((_elementIndexInt + 1) < middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (_elementIndexInt + 1)*height); }
            else if((_elementIndexInt + 1) == middleIndexInt){ yPosInt = Std.int(_buttonStartYPos); }

        }

        return yPosInt;

	}

    private function DestroyVoid():Void{

        ExtendedFlxButtonObjectArray.remove(this);
        FlxDestroyUtil.destroy(this);

    }

}