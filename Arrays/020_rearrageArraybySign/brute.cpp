vector<int> pos, neg;

for (int i = 0; i < n; i++) {
    if (arr[i] > 0) pos.push_back(arr[i]);
    else neg.push_back(arr[i]);
}

for (int i = 0; i < pos.size(); i++) {
    ans[2 * i] = pos[i];
    ans[2 * i + 1] = neg[i];
}
