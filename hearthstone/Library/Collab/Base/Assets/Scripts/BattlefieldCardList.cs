using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattlefieldCardList : MonoBehaviour {

    [SerializeField]
    private GameObject[] battlefieldArray;
    
    public void AddToArray(GameObject card)
    {
        int location = LocationCalculator(card);
        GameObject[] tempArray = new GameObject[battlefieldArray.Length + 1];
        for(int i = 0; i < location; i++)
        {
            tempArray[i] = battlefieldArray[i];
        }
        for(int i = battlefieldArray.Length; i > location; i--)
        {
            tempArray[i + 1] = battlefieldArray[i];
        }
        tempArray[location] = card;
        battlefieldArray = tempArray;
        CardOrderner();
    }

    public void RemoveFromArray(GameObject card)
    {
        int location;
        location = 22;
        for (int i = 0; i < battlefieldArray.Length; i++)
        {
            if(battlefieldArray[i] == card)
            {
                location = i;
            }
        }

        if(location != 22)
        {
            GameObject[] tempArray = new GameObject[battlefieldArray.Length - 1];
            for (int i = 0; i < location; i++)
            {
                tempArray[i] = battlefieldArray[i];
            }
            for (int i = battlefieldArray.Length; i > location; i--)
            {
                tempArray[i - 1] = battlefieldArray[i];
            }
            battlefieldArray = tempArray;
            CardOrderner();
        }
    }

    private void CardOrderner()
    {
        for(int i = 0; i < battlefieldArray.Length; i++)
        {
            battlefieldArray[i].transform.position = new Vector3((i + battlefieldArray.Length / 2 - 0.5f) * 6, 0,0);
        }
    }

    private int LocationCalculator(GameObject card)
    {
        int location = battlefieldArray.Length;
        for(int i = 0; i < battlefieldArray.Length; i++)
        {
            if(card.transform.position.x < battlefieldArray[i].transform.position.x)
            {
                location = i;
                break;
            }
        }
        return location;
    }
}
