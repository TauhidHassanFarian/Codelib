
unordered_set:
    All operation: O(1) 
    unordered_set<data_type> name;
    insert () and erase() -> for modification
    find() -> for searching a key
    if (stringSet.find(key) == stringSet.end()) not found

Set:
    all operation O(logn)
    all operations same as unordered_set
    set<int> s;
    s.count(4) -> if 4 is in set reutrn 1(all same elements will be counted as 1) else 0

multiset and unordered_multiset:
    s.count(4) -> count all instances of 4
    s.erase(4) -> erase all instances of 4    
    s.erase(s.find(4)) -> erase 1 instance of 4

Map(O(logn)) and unordered_map(O(1)):
    map<string,int> m;
    m["some"] = 4; -> if something is not initialized in key then its 0

iterators:
    s.begin() -> means first position (use * to make it element from pointer)
    s.end() -> means after the last position
    for stl element use -> auto it = s.being(); 

for looping in stl:
    for(auto x : s){
        court << x;    -> iterates through any stl 
    }

sorting:
    sort(arr, arr + n, greater<int>()); -> for descending order sort 

Vector:
    vector<int> v(10) -> 10 elements of 0 
    v.back() -> shows the last element
    v.pop_back() -> removes the last element

String:
    string c = b.substr(3, 4) -> begins at 3 and length 4 substring

bitset: 
    bitset<10> s; ->bitset of 10 elements. each takes 1 bit of memory. the value can be 0 or 1
    bitset<10> s(string("0010011010")); -> defining all bits at the same time
    if a and b pre defined bitset then we can use bitwise operations and get bit string as output -> cout << a&b; -> 0010101010(sample output)
    & -> and; | -> or; ^ -> xor

deque: 
    like vector but can do operations in both ends
    O(1)
    deque<int> d;
    d.push_back();
    d.push_fron();
    d.pop_back();
    d.pop_front();

stack:
    operations for only last element
    stack<int> s;
    s.push()
    s.top()
    s.pop()

Queue:
    queue<int> q;
    q.push() -> add elements in the end
    q.front() -> shows first element
    q.pop() -> removes the first element

priority queue:
    






