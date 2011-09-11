/******************************************************************************* 
 * menu-entries.h - SNES9x PS3
 *
 *  Created on: May 5, 2011
********************************************************************************/
static item items_generalsettings[MAX_NO_OF_CONTROLS_SETTINGS] =
{
	{
		SETTING_CHANGE_RESOLUTION, 						/* enum ID of item					*/
		"Resolution",							/* item label						*/
		0.0f,								/* text X position					*/
		0.0f,								/* text Y position					*/
		YELLOW,								/* text color if selected				*/
		WHITE,								/* text color if not selected				*/
		"INFO - Change the display resolution - press X to confirm.",	/* item comment						*/
		LIGHTBLUE,								/* color of item comment				*/
		0.91f,								/* font scale of item comment				*/
		0.09f,								/* comment X position					*/
		0.83f,								/* comment Y position					*/
		&Settings.PS3CurrentResolution,					/* associated pointer to setting			*/
		{0},								/* item comment (yes if setting_ptr true)		*/
		{0}								/* item comment (no if setting_ptr false)		*/
	},
	{
		SETTING_SHADER_PRESETS,
		"Shader Preset",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}	
	},
	{
		SETTING_BORDER,
		"Selected border",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Select an image file as the background border for 'border shaders'.\nNOTE: The image has to be in PNG format.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_SHADER,
		"Selected shader #1",
		0.0f,	
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Select a shader as [Shader #1]. NOTE: Some shaders might be\ntoo slow at 1080p. If you experience any slowdown, try another shader.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},	
		{0},
		0,
		1
	},
	{
		SETTING_SHADER_2,
		"Selected shader #2",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Select a shader as [Shader #2]. NOTE: Some shaders might be\ntoo slow at 1080p. If you experience any slowdown, try another shader.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_GAME_AWARE_SHADER,
		"Game Aware Shader Script",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Select a [Game Aware Shader] script.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},	
		{0},
		0,
		1
	},
	{
		SETTING_FONT_SIZE,
		"Font Size",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Increase or decrease the font size in the menu.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.PS3FontSize,
		{0},
		{0},	
		0,
		1
	},
	{
		SETTING_KEEP_ASPECT_RATIO,
		"Aspect Ratio",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Aspect Ratio] is set to 'Scaled (4:3)' - screen will have black\nborders left/right on widescreen TVs/monitors.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.PS3KeepAspect,
		"INFO - [Aspect ratio] is set to 'Scaled' - screen will have black\nborders left and right on widescreen TVs/monitors.",
		"INFO - [Aspect ratio] is set to 'Stretched' - widescreen TVs/monitors will\n have a full stretched picture.",
		1,
		1
	},
	{
		SETTING_HW_TEXTURE_FILTER,
		"Hardware Filtering shader #1",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #1].",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.PS3Smooth,
		"INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #1].",
		"INFO - Hardware filtering is set to 'Point filtering' for [Shader #1] -\nmost shaders look much better on this setting.",
		1,
		1
	},
	{
		SETTING_HW_TEXTURE_FILTER_2,
		"Hardware Filtering shader #2",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #2].",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.PS3Smooth2,
		"INFO - Hardware filtering is set to 'Bilinear filtering' for [Shader #2].",
		"INFO - Hardware filtering is set to 'Point filtering' for [Shader #2] -\nmost shaders look much better on this setting.",
		1,
		1
	},
	{
		SETTING_SCALE_ENABLED,
		"Custom Scaling/Dual Shaders",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Custom Scaling] is set to 'ON' - 2x shaders will look much\nbetter, and you can select a shader for [Shader #2].",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ScaleEnabled,
		"INFO - [Custom Scaling] is set to 'ON' - 2x shaders will look much\nbetter, and you can select a shader for [Shader #2].",
		"INFO - [Custom Scaling] is set to 'OFF'. You will only be able to select\na shader for [Shader #1].",
		1,
		1
	},
	{
		SETTING_SCALE_FACTOR,
		"Custom Scaling Factor",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Custom Scaling Factor] is set to '2x'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ScaleFactor,
		{0},
		{0},
		2,
		1
	},
	{
		SETTING_HW_OVERSCAN_AMOUNT,
		"Overscan",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Adjust or decrease [Overscan]. Set this to higher than 0.000\nif the screen doesn't fit on your TV/monitor.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_THROTTLE_MODE,
		"Throttle Mode",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Throttle Mode] is set to 'ON' - VSync is enabled and sound\nis turned on.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.Throttled,
		"INFO - [Throttle mode] is set to 'ON' - VSync is enabled and sound\nis turned on.",
		"INFO - [Throttle Mode] is set to 'OFF' - VSync is disabled and sound\nis turned off. NOTE: Useful for benchmarking (measure raw FPS).",
		1,
		1
	},
	{
		SETTING_TRIPLE_BUFFERING,
		"Triple Buffering",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Triple Buffering] is set to 'ON' - faster graphics/shaders at\nthe possible expense of input lag.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.TripleBuffering,
		"INFO - [Triple Buffering] is set to 'ON' - faster graphics/shaders at\nthe possible expense of input lag",
		"INFO - [Triple Buffering] is set to 'OFF' - slower graphics, but\npossibly better input response times.",
		1,
		1
	},
	{
		SETTING_ENABLE_SCREENSHOTS,
		"Enable Screenshots Feature",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Enable Screenshots] feature is set to 'OFF'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ScreenshotsEnabled,
		"INFO - [Enable Screenshots] is set to 'ON'.",
		"INFO - [Enable Screenshots] is set to 'OFF'.",
		1,
		1
	},
	{
		SETTING_SAVE_SHADER_PRESET,
		"SAVE SETTINGS AS SHADER PRESET",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Save the current video settings to a shader preset file.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_APPLY_SHADER_PRESET_ON_STARTUP,
		"APPLY SHADER PRESET ON STARTUP",
		0.0f,	
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Automatically load the shader preset on startup.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ApplyShaderPresetOnStartup,
		"INFO - [Apply Shader Preset On Startup] is set to 'ON'.",
		"INFO - [Apply Shader Preset On Startup] is set to 'OFF'.",
		0,
		1
	},
	{
		SETTING_DEFAULT_VIDEO_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set all [General Video Settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_SOUND_MODE,
		"Sound Output",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Sound Output] is set to 'Normal' - normal audio output will be\nused.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.SoundMode,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_RSOUND_SERVER_IP_ADDRESS,
		"RSound Audio Server IP Address",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Enter the IP Address of the [RSound Audio Server]. IP address\nmust be an IPv4 32-bits address, eg: '192.168.1.7'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},	
		{0},
		0,
		1
	},
	{
		SETTING_DEFAULT_AUDIO_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set all [General Audio Settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_EMU_CURRENT_SAVE_STATE_SLOT, 
		"Current save state slot", 
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the current savestate slot (can also be configured ingame).",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.CurrentSaveStateSlot,
		{0},
		{0},
		0,
		1
	},
#if 0
	{
		SETTING_SNES9X_SKIP_FRAMES,
		"Frame skip",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set frameskipping.\nNOTE: This option doesn't work at the moment.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
#endif
	{
		SETTING_SNES9X_FORCE_PAL,
		"Force NTSC ROM to PAL",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Force NTSC ROM to PAL] is set to 'OFF'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ForcePAL,
		"INFO - Force PAL is set to 'On' - this will force NTSC games to run at PAL\nfrequencies (50Hz). NOTE: This needs to be set per-game.",
		"INFO - Force PAL is set to 'Off'.",
		0,
		1
	},
	{
		SETTING_SNES9X_FORCE_NTSC,
		"Force PAL ROM to NTSC",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Force PAL ROM to NTSC] is set to 'OFF'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ForceNTSC,
		"INFO - Force NTSC is set to 'On' - this will force PAL games to run at\nNTSC frequencies (60Hz). NOTE: This needs to be set per-game.",
		"INFO - Force NTSC is set to 'Off'.",
		0,
		1
	},
	{
		SETTING_SNES9X_PAL_TIMING,
		"PAL Timing",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Change PAL timing frequency.\nNOTE: Doesn't need changing from the default value.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_SNES9X_AUTO_APPLY_CHEATS,
		"Auto-Apply Cheats",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Auto-Apply Cheats] is set to 'ON'. Automatically apply cheat files if\nit has the same name as the ROM.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ApplyCheats,
		"INFO - Auto-apply cheats is set to 'On'. Automatically apply cheat files if it\nhas the same name as the ROM.",
		"INFO - Auto-apply cheats is set to 'Off'. Cheat files will not be applied.",
		1,
		1
	},
	{
		SETTING_SNES9X_AUTO_APPLY_PATCH,
		"Auto-Apply IPS/UPS Patch",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Auto-Apply IPS/UPS Patch] is set to 'ON'. Automatically applies similarly\nnamed patch files if they are in the same directory as the ROM.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.NoPatch,
		"INFO - Auto-apply IPS/UPS patch is set to 'Off'. Translation/hack IPS/UPS\npatches will not be applied.",
		"INFO - Auto-apply IPS/UPS patch is set to 'On'. Automatically applies similarly\nnamed patch files if they are in the same directory as the ROM.",
		0,
		1
	},
	{
		SETTING_SNES9X_RESET_BEFORE_RECORDING_MOVIE,
		"Reset Before Recording Movie",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Reset Before Recording Movie] is set to 'OFF'. The game will start\nfrom the current position in the game while recording a movie..",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.ResetBeforeRecordingMovie,
		"INFO - Reset Before Recording Movie is set to 'On'. The game will reset before\nbeginning to record a movie.",
		"INFO - Reset Before Recording Movie is set to 'Off'. The game will start\nfrom the current position in the game while recording a movie.",
		0,
		1
	},
	{
		SETTING_SNES9X_SRAM_WRITEPROTECT,
		"Savestate SRAM Overwrite Protect",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [RAM Overwrite Protect] is set to 'OFF'. Savestates that you\nload will immediately overwrite SRAM.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.SRAMWriteProtect,
		"INFO - [SRAM Overwrite Protect] is set to 'ON'. If you load a savestate\n,it will not overwrite the SRAM. (NOTE: SRAM is not saved)",
		"INFO - [SRAM Overwrite Protect] is set to 'OFF'. Savestates that you\n load will immediately overwrite SRAM.",
		0,
		1
	},
	{
		SETTING_SNES9X_TURBO_SKIP_FRAMES,
		"Fast forwarding - frameskip",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the amount of frames to be skipped during 'Fast forward'.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_SNES9X_ACCESSORY_AUTODETECTION,
		"Accessory Autodetection",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - [Accessory Autodetection] is set to 'Confirm'. When detecting a Mouse\nScope/Multitap-compatible game, you are asked if you want to enable it.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_SNES9X_ACCESSORY_TYPE,
		"Accessory Type",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Accessory Type is set to 'Left analog stick'. The left analog stick\non controller 1 will be used for SuperScope/Mouse games.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.AccessoryType,
		"INFO - Accessory Type is set to 'USB/Bluetooth Mouse'. The mouse will be\nused for SuperScope/Mouse games.",
		"INFO - Accessory Type is set to 'Left analog stick'. The left analog stick\non controller 1 will be used for SuperScope/Mouse games.",
		0,
		1
	},
	{
		SETTING_EMU_DEFAULT_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set [all SNES9x settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_SNES9X_SOUND_INPUT_RATE, 
		"Sound Inputrate", 
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the Sound Inputrate. The default value (31950) is ideal for A/V\nsynchronization.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.SoundInputRate,
		{0},	
		{0},
		31950,
		1
	},
	{
		SETTING_SNES9X_MUTE_SOUND, 
		"Sound Mute", 
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Mute the sound entirely.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		&Settings.Throttled,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_EMU_AUDIO_DEFAULT_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set [all SNES9x Audio settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},	
		{0},
		0,
		1
	},
	{
		SETTING_PATH_DEFAULT_ROM_DIRECTORY,
		"Startup ROM Directory",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the default [Startup ROM directory]. NOTE: You will have to\nrestart the emulator for this change to have any effect.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},	
		{0}
	},
	{
		SETTING_PATH_SAVESTATES_DIRECTORY,
		"Savestate Directory",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the default path where all the savestate files will be saved to.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_PATH_SRAM_DIRECTORY,
		"SRAM Directory",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the default SRAM (SaveRAM) directory path. All the\nbattery backup saves will be stored in this directory.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_PATH_CHEATS,
		"Cheatfile Directory",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		"INFO - Set the default [Cheatfile directory] path. All CHT (cheat) files\nwill be stored here.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_PATH_DEFAULT_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set [all Path settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_CONTROLS_SCHEME,
		"Control Scheme",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_CONTROLS_NUMBER,
		"Controller No",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0}
	},
	{
		SETTING_CONTROLS_DPAD_UP,
		"D-Pad Up",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_UP
	},
	{
		SETTING_CONTROLS_DPAD_DOWN,
		"D-Pad Down",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_DOWN
	},
	{
		SETTING_CONTROLS_DPAD_LEFT,
		"D-Pad Left",
		0.0f,	
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_LEFT
	},
	{
		SETTING_CONTROLS_DPAD_RIGHT,
		"D-Pad Right",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_RIGHT
	},
	{
		SETTING_CONTROLS_BUTTON_CIRCLE,
		"Circle button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},	
		{0},
		BTN_A
	},
	{
		SETTING_CONTROLS_BUTTON_CROSS,
		"Cross button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_B
	},
	{
		SETTING_CONTROLS_BUTTON_TRIANGLE,
		"Triangle button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_X
	},
	{
		SETTING_CONTROLS_BUTTON_SQUARE,
		"Square button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_Y
	},
	{
		SETTING_CONTROLS_BUTTON_SELECT,
		"Select button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_SELECT
	},
	{
		SETTING_CONTROLS_BUTTON_START,
		"Start button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_START
	},
	{
		SETTING_CONTROLS_BUTTON_L1,
		"L1 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_L
	},
	{
		SETTING_CONTROLS_BUTTON_R1,
		"R1 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_R
	},
	{
		SETTING_CONTROLS_BUTTON_L2,
		"L2 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2,
		"R2 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_L3,
		"L3 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R3,
		"R3 button",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_L2_BUTTON_L3,
		"Button combo: L2 & L3",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_L2_BUTTON_R2,
		"Button combo: L2 & R2",
		0.0f,	
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_L2_BUTTON_R3,
		"Button combo: L2 & R3",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_QUICKLOAD
	},
	{
		SETTING_CONTROLS_BUTTON_L2_ANALOG_R_RIGHT,
		"Button combo: L2 & RStick Right",
		0.0f,	
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},	
		{0},
		BTN_INCREMENTCHEAT
	},
	{
		SETTING_CONTROLS_BUTTON_L2_ANALOG_R_LEFT,
		"Button combo: L2 & RStick Left",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_DECREMENTCHEAT
	},
	{
		SETTING_CONTROLS_BUTTON_L2_ANALOG_R_UP,
		"Button combo: L2 & RStick Up",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_L2_ANALOG_R_DOWN,
		"Button combo: L2 & RStick Down",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2_ANALOG_R_RIGHT,
		"Button combo: R2 & RStick Right",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2_ANALOG_R_LEFT,
		"Button combo: R2 & RStick Left",
		0.0f,	
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2_ANALOG_R_UP,
		"Button combo: R2 & RStick Up",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2_ANALOG_R_DOWN,
		"Button combo: R2 & RStick Down",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_BUTTON_R2_BUTTON_R3,
		"Button combo: R2 & R3",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_QUICKSAVE
	},
	{
		SETTING_CONTROLS_BUTTON_R3_BUTTON_L3,
		"Button combo: R3 & L3",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_EXITTOMENU
	},
	{
		SETTING_CONTROLS_BUTTON_L2_BUTTON_R2_ANALOG_R_DOWN,
		"Button combo: R2 & L2 & RS Down",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_NONE
	},
	{
		SETTING_CONTROLS_ANALOG_R_UP,
		"Right Stick - Up",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_CHEATENABLE
	},
	{
		SETTING_CONTROLS_ANALOG_R_DOWN,
		"Right Stick - Down",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_CHEATDISABLE
	},
	{
		SETTING_CONTROLS_ANALOG_R_LEFT,
		"Right Stick - Left",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_DECREMENTSAVE,
		1
	},
	{
		SETTING_CONTROLS_ANALOG_R_RIGHT,
		"Right Stick - Right",
		0.0f,
		0.0f,
		YELLOW,
		WHITE,
		{0},
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL, //setting ptr
		{0},
		{0},
		BTN_INCREMENTSAVE,
		1
	},
	{
		SETTING_CONTROLS_SAVE_CUSTOM_CONTROLS,
		"SAVE CUSTOM CONTROLS",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Save the custom control settings.\nNOTE: This option will not do anything with Control Scheme [New] or [Default].",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	},
	{
		SETTING_CONTROLS_DEFAULT_ALL,
		"DEFAULT",
		0.0f,
		0.0f,
		YELLOW,
		GREEN,
		"INFO - Set all [Controls settings] back to their 'DEFAULT' values.",
		LIGHTBLUE,
		0.91f,
		0.09f,
		0.83f,
		NULL,
		{0},
		{0},
		0,
		1
	}
};
