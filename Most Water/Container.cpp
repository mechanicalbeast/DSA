int maxArea(vector<int>& height) {
        int p=0,q=height.size()-1;
        int maxarea=0;
        while(p<q){
            maxarea=max(maxarea,min(height[q],height[p])*(q-p));
            if(height[p]<height[q]) p++;
            else q--;
        }
        return maxarea;
    }