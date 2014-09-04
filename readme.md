# MidiMaker (WIP)

MidiMaker uses a simple musical language which compiles into midi.

### Features

* Definitions _Cmajor [C,E,G]_
* Sequences _{A#, B^, C}_
* Chords _[A#, B^, C]_
* Tempo Changes _180bpm_
* Notes _A#2_

## Build Instructions

First you'll need to build or download a version of [jdksmidi](https://github.com/jdkoftinoff/jdksmidi), which is a c++ opensource(GPL) midi library.
Once you've aquired the library and headers, stick the library in a "lib" folder and the headers in a "jdksmidi" folder on the  root of the project.

Either use the CmakeLists.txt file to generate a project you like or use the make file included.
Both should work, though CMake sets the /MD flag in visual studio which causes compile errors. Setting the /MT flag instead is the fix.



### makefile

On linux call
```
$ make midimaker
```
On windows call
```
$ make midimaker.exe
```
or just
```
$ make
```
