int binary_search(vector<long long> v, value) {
	int i = 0, j = v.size()-1;
	
	while(i <= j) {
		int mid = i + (j-i)/2;
		
		if(v[mid] == value) {
			return mid;
		} else if(v[mid] > value) {
			j = mid - 1;
		} else {
			i = mid + 1;
		}
	}
	
	return -1;
}