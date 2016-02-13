package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

    var playGameButtonObject:FlxButton = null;
    var optionButtonObject:FlxButton = null;
    var exitButtonObject:FlxButton = null;
    var testButtonObject:FlxButton = null;
    var mainMenuButtonObjectArray:Array<FlxButton> = new Array<FlxButton>();

    /**
     * Function that is called up when to state is created to set it up. 
     */
    override public function create():Void
    {
        super.create();

        playGameButtonObject = new FlxButton(FlxG.width/2, FlxG.height/2, "Play", ChangeToMainStateVoid);
        optionButtonObject = new FlxButton(FlxG.width/2, FlxG.height/2, "Option");
        exitButtonObject = new FlxButton(FlxG.width/2, FlxG.height/2, "Exit");
        testButtonObject = new FlxButton(FlxG.width/2, FlxG.height/2, "Test");

        /*Adding all button in main menu into main menu array for easy access.*/
        mainMenuButtonObjectArray.push(playGameButtonObject);
        mainMenuButtonObjectArray.push(optionButtonObject);
        mainMenuButtonObjectArray.push(exitButtonObject);
        mainMenuButtonObjectArray.push(testButtonObject);

        playGameButtonObject.x = Std.int(playGameButtonObject.x - (playGameButtonObject.width/2));
        playGameButtonObject.y = MainMenuButtonObjectArrayAdjustYPosInt(
            Std.int(playGameButtonObject.height),
            Std.int(FlxG.height/2 - playGameButtonObject.height/2),
            mainMenuButtonObjectArray.indexOf(playGameButtonObject)
        );
        optionButtonObject.x = Std.int(optionButtonObject.x - (optionButtonObject.width/2));
        optionButtonObject.y = MainMenuButtonObjectArrayAdjustYPosInt(
            Std.int(optionButtonObject.height),
            Std.int(FlxG.height/2 - optionButtonObject.height/2),
            mainMenuButtonObjectArray.indexOf(optionButtonObject)
        );
        exitButtonObject.x = Std.int(exitButtonObject.x - (exitButtonObject.width/2));
        exitButtonObject.y = MainMenuButtonObjectArrayAdjustYPosInt(
            Std.int(exitButtonObject.height),
            Std.int(FlxG.height/2 - exitButtonObject.height/2),
            mainMenuButtonObjectArray.indexOf(exitButtonObject)
        );
        testButtonObject.x = Std.int(testButtonObject.x - (testButtonObject.width/2));
        testButtonObject.y = MainMenuButtonObjectArrayAdjustYPosInt(
            Std.int(testButtonObject.height),
            Std.int(FlxG.height/2 - testButtonObject.height/2),
            mainMenuButtonObjectArray.indexOf(testButtonObject)
        );

        add(playGameButtonObject);
        add(optionButtonObject);
        add(exitButtonObject);
        add(testButtonObject);
    }
    
    /**
     * Function that is called when this state is destroyed - you might want to 
     * consider setting all objects this state uses to null to help garbage collection.
     */
    override public function destroy():Void
    {
        super.destroy();
    }

    /**
     * Function that is called once every frame.
     */
    override public function update():Void
    {
        super.update();
    }

    private function ChangeToMainStateVoid():Void{
        FlxG.switchState(new PlayState());
    }
    private function MainMenuButtonObjectArrayAdjustYPosInt(_buttonHeightInt:Int, _buttonStartYPos:Int, _elementIndexInt:Int):Int{

        var yPosInt:Int = -1;
        var isEvenBool:Bool = false;
        var middleIndexInt:Int = 0;

        if(mainMenuButtonObjectArray.length%2 == 0){ isEvenBool = true; }
        if(isEvenBool == true){
            middleIndexInt = Std.int(mainMenuButtonObjectArray.length/2);

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (_buttonHeightInt/2) + ((_elementIndexInt - 1)*_buttonHeightInt)); }
            else if((_elementIndexInt + 1) <= middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (_buttonHeightInt/2) + (_elementIndexInt*_buttonHeightInt)); }

        }
        else if(isEvenBool == false){
            middleIndexInt = Std.int(mainMenuButtonObjectArray.length/2) + 1;

            if((_elementIndexInt + 1) > middleIndexInt){ yPosInt = Std.int(_buttonStartYPos + (_elementIndexInt - 1)*_buttonHeightInt); }
            else if((_elementIndexInt + 1) < middleIndexInt){ yPosInt = Std.int(_buttonStartYPos - (_elementIndexInt + 1)*_buttonHeightInt); }
            else if((_elementIndexInt + 1) == middleIndexInt){ yPosInt = Std.int(_buttonStartYPos); }

        }

        return yPosInt;

    }

}