/*Write the class AddElements here*/
template <class T> class AddElements {
    public:
        T element;
        AddElements(T new_element) { // Need constructor
            element = new_element;
        }
        T add(T input) {
            return element + input;
        }
        T concatenate(T new_string) {
            return element + new_string;
        }
};