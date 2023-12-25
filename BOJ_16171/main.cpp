#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string sin, sb;
  cin >> sin >> sb;

  auto oss = ostringstream{};
  for (const auto& c : sin) {
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
      oss << c;
    }
  }

  string s = oss.str();

  if (s.length() < sb.length()) {
    cout << 0;
    return 0;
  }

  for (auto i = 0; i <= s.length() - sb.length(); ++i) {
    if (s.substr(i, sb.length()) == sb) {
      cout << 1;
      return 0;
    }
  }

  cout << 0;

  return 0;
}