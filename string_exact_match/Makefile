CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		string_exact_match.o

LIBS =

TARGET =	string_exact_match.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
