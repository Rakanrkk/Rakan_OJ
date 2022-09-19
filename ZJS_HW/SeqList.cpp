#include <iostream>

using namespace std;

template<class T, int Maxsize>
class SeqList {
    T data[Maxsize];
    int length;
public:
    SeqList();

    SeqList(T a[], int n);

    int ListLength();

    T Get(int pos);

    int Locate(T item);

    void PrintSeqList();

    void Insert(int i, T item);

    T Delete(int i);

};

template<class T, int Maxsize>
SeqList<T, Maxsize>::SeqList() {
    length = 0;
}

template<class T, int Maxsize>
SeqList<T, Maxsize>::SeqList(T *a, int n) {
    if (n > Maxsize) {
        cerr << "OverFlow";
        exit(1);
    }
    for (int i = 0; i < n; ++i) {
        data[i] = a[i];
    }
    length = n;
}

template<class T, int Maxsize>
int SeqList<T, Maxsize>::ListLength() {
    return length;
}

template<class T, int Maxsize>
T SeqList<T, Maxsize>::Get(int pos) {
    if (pos < 1 || pos > length) {
        cerr << "overflow";
        exit(1);
    }
    return data[pos - 1];
}

template<class T, int Maxsize>
int SeqList<T, Maxsize>::Locate(T item) {
    for (int i = 0; i < length; ++i) {
        if (data[i] == item) {
            return i + 1;
        }
    }
    return 0;
}

template<class T, int Maxsize>
void SeqList<T, Maxsize>::PrintSeqList() {
    for (auto x: data) {
        cout<<x;
    }
}

template<class T, int Maxsize>
void SeqList<T, Maxsize>::Insert(int i, T item) {
    for (int j = length; j >= i; --j) {
        data[j]=data[j-1];
    }
    data[i-1]=item;
    length++;
}

template<class T, int Maxsize>
T SeqList<T, Maxsize>::Delete(int i) {
    T x=data[i-1];
    for (int j = i; j < length; ++j) {
        data[j]=data[j+1];
    }
    return x;
}


int main() {


}