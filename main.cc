#include "foo_t.hh"

int main() {
    FooT<int> fi;
    FooT<long> fl;
    // this should be duplicated
    FooT<char> fc;
}
