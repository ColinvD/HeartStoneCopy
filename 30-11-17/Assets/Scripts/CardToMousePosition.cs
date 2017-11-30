using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardToMousePosition : MonoBehaviour
{
    private bool follow = false;
    private Transform cardPosition;

	// Use this for initialization
	void Start()
    {
        cardPosition = transform;
	}
	
	// Update is called once per frame
	void Update()
    {
         
	}
    
    public void ChangePosition(RaycastHit hit)
    {
        if(follow)
        {
            Vector3 holder = hit.point;
            holder.y += 3;
            cardPosition.position = holder;
        }
    }

    public void FollowChange()
    {
        follow = !follow;
    }
}
