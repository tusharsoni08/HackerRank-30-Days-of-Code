	Difference(vector<int> v){
        elements = v;
    }
    
    int computeDifference(){
        std::sort(elements.begin(), elements.end());
        maximumDifference = abs(elements[0] - elements[elements.size()-1]);
        return maximumDifference;
    }