CFLAGS=-g -Wall -Wextra
SRCDIR=src

all: $(SRCDIR)/main.o  $(SRCDIR)/liblogger.so
	$(CC) $(CFLAGS) $(SRCDIR)/main.o -ldl -L$(SRCDIR)/ -llogger -o startc.exe

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

$(SRCDIR)/liblogger.so:
	$(CC) $(CFLAGS) -shared -fPIC $(SRCDIR)/liblogger.c -o $@

clean:
	rm -rf startc.exe
	rm -rf $(SRCDIR)/*.o $(SRCDIR)/*.so.* $(SRCDIR)/*.a $(SRCDIR)/*.so
