cmake_minimum_required (VERSION 2.6)

project (MidiMaker)
set(
source
main.cpp;
Sequence.cpp;
SequenceList.cpp;
SymbolTable.cpp;
SeqSegment.cpp;
Note.cpp;
Chord.cpp;
music.tab.cpp;
music.yy.cpp;
)

set(
header
Sequence.hpp;
SequenceList.hpp;
SymbolTable.hpp;
SeqSegment.hpp;
Note.hpp;
Chord.hpp;
music.tab.hpp;
unistd.h

#jdksmidi

jdksmidi/advancedsequencer.h;
jdksmidi/driver.h;
jdksmidi/driverdump.h;
jdksmidi/driverwin32.h;
jdksmidi/edittrack.h;
jdksmidi/file.h;
jdksmidi/fileread.h;
jdksmidi/filereadmultitrack.h;
jdksmidi/fileshow.h;
jdksmidi/filewrite.h;
jdksmidi/filewritemultitrack.h;
jdksmidi/keysig.h;
jdksmidi/manager.h;
jdksmidi/matrix.h;
jdksmidi/midi.h;
jdksmidi/msg.h;
jdksmidi/multitrack.h;
jdksmidi/parser.h;
jdksmidi/process.h;
jdksmidi/queue.h;
jdksmidi/sequencer.h;
jdksmidi/showcontrol.h;
jdksmidi/showcontrolhandler.h;
jdksmidi/smpte.h;
jdksmidi/song.h;
jdksmidi/sysex.h;
jdksmidi/tempo.h;
jdksmidi/tick.h;
jdksmidi/track.h;
jdksmidi/utils.h;
jdksmidi/world.h;
)
include_directories(.)
add_executable(MidiMaker ${source} ${header})
target_link_libraries(MidiMaker ${CMAKE_SOURCE_DIR}/lib/jdksmidi.lib)
#target_link_libraries(MidiMaker ${CMAKE_CURRENT_SOURCE_DIR}/lib/jdksmidi.lib)
