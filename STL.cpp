
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

for looping in stl:
    for(auto x : s){
        court << x;    -> iterates through any stl 
    }



Vector:
    vector<int> v(10) -> 10 elements of 0 
    v.back() -> shows the lats element
    v.pop_back() -> removes the last element

String:
    string c = b.substr(3, 4) -> begins at 3 and length 4 substring




