using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardsInHand : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> Cards;
    private Transform rotationPoint;
    private int oldCardsCount = 0;
    private List<Vector3> cardRotations;
    private List<Vector3> cardPositions;
    
	void Start()
    {
        cardRotations = new List<Vector3>();
        cardPositions = new List<Vector3>();
        rotationPoint = gameObject.transform;
    }
    
    void Update()
    {
        if(Cards.Count != oldCardsCount)
        {
            if(cardRotations.Count > 0)
            {
                cardRotations.Clear();
            }
            if(cardRotations.Count > 0)
            {
                cardPositions.Clear();
            }
            for(int i = 0; i < Cards.Count; i++)
            {
                float yRot = (-(Cards.Count - 1.0f) / 2.0f + i) * 20;
                float xPos = (-(Cards.Count - 1.0f) / 2.0f + i) * 2;
                float zPos = 0;
                cardRotations.Add(new Vector3(0, yRot, -20));
                cardPositions.Add(new Vector3(rotationPoint.position.x + xPos, 3, rotationPoint.position.z + zPos));
                Cards[i].transform.eulerAngles = cardRotations[i];
                Cards[i].transform.position = cardPositions[i];
            }
            oldCardsCount = Cards.Count;
        }
	}

    public Vector3 getCardRotations(string cardName)
    {
        int card = 0;
        for(int i = 0; i < Cards.Count; i++)
        {
            if(cardName == Cards[i].name)
            {
                card = i;
            }
        }
        return cardRotations[card];
    }

    public Vector3 getCardPositions(string cardName)
    {
        int card = 0;
        for (int i = 0; i < Cards.Count; i++)
        {
            if (cardName == Cards[i].name)
            {
                card = i;
            }
        }
        return cardPositions[card];
    }
}
