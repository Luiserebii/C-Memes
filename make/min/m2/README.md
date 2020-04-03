Make implicit rule:
```
%.o: 
        $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $*.c
```
doesn't quite help here when we have dependencies/specific file path, as shown by this example.
