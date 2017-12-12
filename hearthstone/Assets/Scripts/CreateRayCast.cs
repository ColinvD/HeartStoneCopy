using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateRayCast : MonoBehaviour
{
    private CardToMousePosition moveActions;
    private CardsInHand cardsHand;
    private ManaAmount manaAmount;
    private CardData cardData;
    private int cardMask;
    private int playfieldMask;
    private int defaultMask;

    void Start()
    {
        manaAmount = FindObjectOfType<ManaAmount>();
        cardsHand = FindObjectOfType<CardsInHand>();
        cardMask = LayerMask.GetMask("Cards");
        playfieldMask = LayerMask.GetMask("Playfield");
        defaultMask = ~cardMask;
    }

    void Update()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        
        Debug.DrawRay(ray.origin, ray.direction * 100, Color.red);

        if(Physics.Raycast(ray, out hit, 50f, defaultMask)) //everything else but not the cards
        {
            if(Input.GetMouseButtonDown(0) && hit.collider.tag == "EndTurnButton")
            {
                hit.collider.GetComponent<TurnSwitch>().ChangeTurn();
            }
            if(Input.GetMouseButtonUp(0) && hit.collider.name != "FightField")
            {
                if(moveActions != null)
                {
                    moveActions.gameObject.transform.position = cardsHand.getCardPositions(moveActions.gameObject.name);
                    moveActions.gameObject.transform.eulerAngles = cardsHand.getCardRotations(moveActions.gameObject.name);
                }
            }
        }

        if(Physics.Raycast(ray, out hit, 50f, cardMask)) //selecting the card
        {
            if(Input.GetMouseButtonDown(0) && hit.collider.tag == "Card")
            {
                moveActions = hit.collider.GetComponent<CardToMousePosition>();
                cardData = hit.collider.GetComponent<CardData>();
            }
        }

        if(Physics.Raycast(ray, out hit, 50f, playfieldMask)) //move the card
        {
            if(moveActions != null && cardData != null)
            {
                if (cardData.GetManaCost() <= manaAmount.GetCurrentMana())
                {
                    if (Input.GetMouseButtonDown(0))
                    {
                        moveActions.FollowChange();
                    }
                    if (Input.GetMouseButton(0))
                    {
                        moveActions.ChangePosition(hit);
                    }
                    if (Input.GetMouseButtonUp(0))
                    {
                        moveActions.FollowChange();
                        moveActions = null;
                        cardData = null;
                    }
                }
            }
        }
    }
}
