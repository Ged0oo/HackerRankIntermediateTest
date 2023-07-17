/*
*	A company sells dumbbells in pairs. These are weights for exercising. 
*	They receive a shipment of dumbbells weighing anywhere from 1 unit up to a certain maximum. 
*	A pair can only be sold if their weights are sufficiently close: no greater than 1 unit difference. 
*	Given an inventory of various weights, determine the maximum number of pairs the company can sell.
*/

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