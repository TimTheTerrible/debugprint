# debugprint

A simple Arduino library that implements a printf-like function to send debug output to the serial console.

## Example
The following example shows the basic mechanism for using debugprint()

### Code
```
  int foo = 3;
  float bar = 3.141592695F;
  const char * baz = "Hello, World!";

  debugprint(DEBUG_TRACE, "foo = %3.3d bar = %6.4f baz = '%s'", foo, bar, baz);
```
### Output
```
foo = 003 bar = 3.1416 baz = 'Hello, World!'

```
