# Arduino Dictionary

This is a simple key-value dictionary for Arduino. It uses LinkedList (It has its own version within it to ensure compatibility). This library has had very little testing, so use at your own risk.

## Installation
1. Click Code > Download ZIP
2. Open Arduino IDE
3. From the Sketch menu select Include Library > Add .ZIP Library
4. Navigate to Dictionary-master.zip
5. Click Open

  The IDE should say something like *Library added to your libraries. Check "Include library" menu.*

## Usage
  Include the library like this:

```cpp
  #include <Dictionary.h>
```
Create an object with String keys and String values:

 ```cpp
 //Object with String keys and String values
 Dictionary<String, String> MyDict = Dictionary<String, String>();
 ```
 Or just
 ```cpp
 Dictionary<String, String> MyDict;
 ```
 Set a value:
 ```cpp
 //Set a value when key and value are String
 MyDict.set("MyKey", "MyValue");
 ```
 
 Get a value:
 ```cpp
 //Get a value when a key is known
 MyVal = MyDict.get("MyKey");
 ```
 
 Get a key when value is known:
 ```cpp
 //Get a key when value is known
 MyKey = MyDict.getKey("MyValue");
 ```
 
 Get length of dictionary:
 ```cpp
 length = MyDict.length();
 ```
