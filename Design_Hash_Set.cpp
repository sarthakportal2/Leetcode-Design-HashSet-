class MyHashSet {
public:
    //optimal_sol(T(C(N)=(O(1)) and S(C(N)=O(N))) as it requires dynamic memory allocation without iteration each level
    vector<bool>h;//hash vector table declare
    MyHashSet() {h.resize(1e6+1);}//resizing the hash vector
    void add(int key) {h[key]=true;}//Adding Hash key true val
    void remove(int key) {h[key]=false;}//Removing Hash key false val
    bool contains(int key) {return h[key];}};//printing the Exisiting Hash key
