bool checkRecord(char* s) {
    int A=0,L=0;
    int len = strlen(s);
    for(int i =0;i<len;i++){
        if (s[i]=='P'){
            L=0;
        }
        else if(s[i]=='L'){
            L++;
            if (L==3){
                return 0;
            }
            
        }
        else if(s[i]=='A'){
            L=0;
            A++;
            if(A==2){
                return 0;
            }
        
        }
        

    }
    return 1;
}