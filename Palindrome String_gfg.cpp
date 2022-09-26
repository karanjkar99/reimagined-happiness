bool flag = 1;
	    int n = S.length() -1;
	    int l = 0;
	    
	    while(n>l)
	    {
	        if (S[l++] != S[n--] )
	        {
	            flag = 0;
	        }
	    }
	    return flag;
