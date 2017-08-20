#include <limits>
#define INF std::numeric_limits<int>::max()
#define FUNCTION(name,operator) inline void name(int &current, int candidate) {!(current operator candidate) ? current = candidate : false;}
#define io(v) cin >> v
#define toStr(str) #str
#define foreach(vec, i) for (int i = 0; i < vec.size(); ++i)