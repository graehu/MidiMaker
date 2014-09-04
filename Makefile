objs = main.o\
	Sequence.o\
	SequenceList.o\
	SymbolTable.o\
	SeqSegment.o\
	Note.o\
	Chord.o\
	music.tab.o\
	music.yy.o

src = main.cpp\
		Sequence.cpp\
		SequenceList.cpp\
		SymbolTable.cpp\
		SeqSegment.cpp\
		Note.cpp\
		Chord.cpp\
		music.tab.cpp\
		music.yy.cpp

#if you're compliling on windows call this.
midimaker.exe: $(src)
	cl -I . -o midimaker.exe $(src) lib/jdksmidi.lib 2> log.txt
#if you're compiling on linux call this
midimaker: $(objs)
	g++ -o midimaker $(objs) lib/libjdksmidi.a 2> log.txt

#you need to have bison and flax installed
music.tab.cpp: music.ypp
	bison -o music.tab.cpp -d  music.ypp -v

music.yy.cpp: music.tab.cpp music.l
	flex -omusic.yy.cpp music.l

%.o: %.cpp
	g++ -c $<

.PHONY: parser
parser:
	bison -o music.tab.cpp -d  music.ypp -v
	flex -omusic.yy.cpp music.l

.PHONY: clean
clean:
	rm -rf *.exe
	rm -rf *.obj
	rm -rf *.o
	rm -rf *.tab.cpp
	rm -rf *.tab.hpp
	rm -rf *.yy.cpp
	rm -rf *.output
	rm -rf *.mid
	rm -rf log.txt
