package;

import flixel.*;
import flixel.text.*;
import flixel.ui.*;
import flixel.util.*;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

    var playGameButtonObject:ExtendedFlxButton = null;
    var optionButtonObject:ExtendedFlxButton = null;
    var exitButtonObject:ExtendedFlxButton = null;
    var testButtonObject:ExtendedFlxButton = null;
    var extendedFlxButtonObjectArray:Array<ExtendedFlxButton> = new Array<ExtendedFlxButton>();

    /**
     * Function that is called up when to state is created to set it up. 
     */
    override public function create():Void
    {
        super.create();

        playGameButtonObject = new ExtendedFlxButton("Play", FlxG.width/2, FlxG.height/2, extendedFlxButtonObjectArray, this, ChangeToMainStateVoid);
        optionButtonObject = new ExtendedFlxButton("Option", FlxG.width/2, FlxG.height/2, extendedFlxButtonObjectArray, this);
        exitButtonObject = new ExtendedFlxButton("Exit", FlxG.width/2, FlxG.height/2, extendedFlxButtonObjectArray, this);
        testButtonObject = new ExtendedFlxButton("Test", FlxG.width/2, FlxG.height/2, extendedFlxButtonObjectArray, this);

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

}