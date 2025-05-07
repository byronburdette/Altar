# What is this
Unreal Engine SDK project for Oblivion Remastered

This project is intended to be compatible with **vanilla** UE 5.3.x redistributed via Epic Launcher.
Because of this, 4 classes/types are unavailable:
```
VWorldPartitionStreamingPolicy
VAltarBowTriggerResistance
VAltarFatigueTriggerResistance
VAltarBlockHitTriggerVibration
```
because they require source Engine changes (which is not the point of this uproject - not everyone can bothered to compile it)
In 99% cases they wont matter anyway. They cannot be dummied out for the rest 1% cases because these would be the serialization cases, so for that 1% you'd have to use a source build (but it is very unlikely you will ever need that).

## Dummied out code
Search for `FIXME` to find all dummied out code you may want to fix if you need it for a source build.

## Dummied out Plugins
Wwise plugin is a stub. That means you can't use it to actually work with WWise audio if you plan to do very in-depth wwise project recooking and restructuring. If you need that, you can remove the stub and install a real Wwise plugin v2023.1.8.8601.3258 - https://www.audiokinetic.com
Rest of the plugins are irrelevant.

## How to use
1. Download UE 5.3.2 from Epic Launcher
2. [Install required build tools](https://github.com/EpicGames/UnrealEngine/blob/5.3.2-release/README.md#windows)
3. Build the project
