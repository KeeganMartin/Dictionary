#include "dependencies/LinkedList/DLinkedList.h"

template <class T, class U>
class Dictionary
{
private:
    DLinkedList<T> KeyList = DLinkedList<T>();
    DLinkedList<U> ValList = DLinkedList<U>();

public:
    void set(T key, U val)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key) {
                ValList.set(i, val);
                return;
            }
        }
        KeyList.add(key);
        ValList.add(val);
    }

    U get(T key)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key)
            {
                return ValList.get(i);
            }
        }
    }

    T getKey(U val)
    {
        for (int i = 0; i < ValList.size(); i++)
        {
            if (ValList.get(i) == val)
            {
                return KeyList.get(i);
            }
        }
    }

    int length()
    {
        return KeyList.size();
    }

    bool contains(T key) {
        for (int x = 0; x < length(); x++) {
            if(KeyList.get(x) == key) {
                return true;
            }
        }
        return false;
    }

    T getKeyByIndex(int index) {
        return KeyList.get(index);
    }
};
