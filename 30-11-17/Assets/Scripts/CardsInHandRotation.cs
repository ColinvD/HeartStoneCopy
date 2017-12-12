using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardsInHandRotation : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> Cards;
    private Transform rotationPoint;

	// Use this for initialization
	void Start()
    {
        rotationPoint = this.gameObject.transform;
        for(int i = 0; i < GameObject.FindGameObjectsWithTag("Card").Length; i++)
        {
            Cards.Add(GameObject.FindGameObjectsWithTag("Card")[i]);
        }
	}
	
	// Update is called once per frame
	void Update()
    {
        if(Cards.Count == 3)
        {

        } else if(Cards.Count == 4)
        {
            for(int i = 0; i < Cards.Count; i++)
            {
                float yRot = (-(Cards.Count - 1.0f) / 2.0f + i) * 20;
                float xPos = (-(Cards.Count - 1.0f) / 2.0f + i) * 2;
                float zPos = 0;
                Cards[i].transform.eulerAngles = new Vector3(0, yRot, -20);
                Cards[i].transform.position = new Vector3(rotationPoint.position.x + xPos, 3, rotationPoint.position.z + zPos);
                //Debug.Log(rotationPoint.position.x + xPos - (Cards.Count - 1) / 2);
            }
        }
	}
}
