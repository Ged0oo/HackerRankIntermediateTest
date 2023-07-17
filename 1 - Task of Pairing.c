long taskOfPairing(int freq_count, long* freq) 
{    
    long pairs = 0;
    for (int i = 0; i < freq_count; i++) 
    {
        pairs += freq[i] / 2;
        if (i+1 < freq_count && freq[i] % 2 == 1 && freq[i+1] > 0) 
        {
            freq[i+1]--;
            pairs++;
        }
    }
    return pairs;
}