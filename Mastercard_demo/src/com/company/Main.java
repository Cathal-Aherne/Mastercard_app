package com.company;

public class Main {

    public static void main(String[] args) {
	int [] values = {1,1,1,1,1,2,3,4,4,4,4,5};

	int mostCommon = MostCommonElement(values);
	System.out.print(mostCommon);
    }


    public static int MostCommonElement(int[] values){

        int freq = 1;
        int TempCount;
        int MostCommon = values[0];
        int CurrentEle;
        int ArraySize = values.length;

        for(int i=0; i<ArraySize;i++){

            CurrentEle = values[i];
            TempCount = 0;
            for(int j = 1; j < ArraySize; j++)
            {
                if(CurrentEle == values[j]){
                    TempCount++;

                }
                if (TempCount > freq){
                    MostCommon = CurrentEle;
                    freq = TempCount;
                }
            }

        }

        return MostCommon;
    }
}
