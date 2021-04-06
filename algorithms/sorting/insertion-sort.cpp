void insertion_sort(vector<long long> &v) {
	int n = v.size();
	
	for(int i = 1; i < n; i++) {
		int value = v[i], j = i-1;
		
		while(j >= 0 && v[j] < value) {
			v[j+1] = v[j];
			v[j] = value;
			j--;
		}
	}
}