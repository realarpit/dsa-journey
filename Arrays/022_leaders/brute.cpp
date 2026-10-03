for(int i = 0; i < n; i++) {
    bool leader = true;

    for(int j = i + 1; j < n; j++) {
        if(arr[i] <= arr[j]) {
            leader = false;
            break;
        }
    }

    if(leader) {
        cout << arr[i] << " ";
    }
}
