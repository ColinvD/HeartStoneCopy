using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateRayCast : MonoBehaviour
{
    private CardToMousePosition moveActions;

	// Use this for initialization
	void Start()
    {
        moveActions = FindObjectOfType<CardToMousePosition>();
	}
	
	// Update is called once per frame
	void Update()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        int layer_Mask = LayerMask.GetMask("Playfield");
        Debug.DrawRay(ray.origin, ray.direction * 100, Color.red);

        if(Physics.Raycast(ray, out hit, 50f, layer_Mask))
        {
            if(Input.GetMouseButtonDown(0))
            {
                moveActions.FollowChange();
            }
            if(Input.GetMouseButton(0))
            {
                moveActions.ChangePosition(hit);
            }
            if(Input.GetMouseButtonUp(0))
            {
                moveActions.FollowChange();
            }
        }
    }
}
