# Altar
Unreal Engine SDK project for Oblivion Remastered

This project is intended to be compatible with **vanilla** UE 5.3.x redistributed via Epic Launcher.
Because of this, 4 classes/types are unavailable:
```
VWorldPartitionStreamingPolicy
VAltarBowTriggerResistance
VAltarFatigueTriggerResistance
VAltarBlockHitTriggerVibration
```
because they require source Engine changes (which is not the point of this uproject - not everyone can bother to compile it)
In 99% cases they wont matter. They cannot be dummied for the rest 1% because they would be used in serialization so for that 1% you'd have to use source build.

## Dummied out code
Search for `FIXME` to find all dummied out code you may want to fix if you need it.

## Dummied out Plugins
Wwise plugin is a stub. That means you can't use it to actually work with WWise stuff if you plan to do very in-depth wwise project recooking and restruturing. In order to do that, you need real Wwise plugin v2023.1.8.8601.3258 - https://www.audiokinetic.com
Rest of the plugins are irrelevant.
