// Forbit instantiation in callers. Only instantiate in foo_t.cc
// https://en.cppreference.com/w/cpp/language/class_template
//extern template <typename T> struct FooT {
template <typename T> struct FooT {
    FooT() {}
    ~FooT() {}
};

// don't duplicate these:
extern template struct FooT<int>;
extern template struct FooT<long>;
