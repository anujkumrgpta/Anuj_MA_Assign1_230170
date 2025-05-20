int NthRoot(int n, int m) {
  int low = 1, high = m;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Compute mid^n manually
        long long val = 1;
        for (int i = 0; i < n; ++i) {
            val *= mid;
            if (val > m) break; // no need to continue if it exceeds m
        }

        if (val == m) return mid;
        else if (val < m) low = mid + 1;
        else high = mid - 1;
    }

    return -1; // Not a perfect nth root
}