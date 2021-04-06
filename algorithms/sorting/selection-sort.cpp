void selection_sort(vector<long long> &v) {
	int n = v.size();
	
	for(int i = 0; i < n; i++) {
		long long min = 1e18;
		int min_index;
		
		for(int j = i; j < n; j++) {
			if(v[j] < min) {
				min = v[j];
				min_index = j;
			}
		}
		
		swap(v[i], v[min_index]);
	}
}