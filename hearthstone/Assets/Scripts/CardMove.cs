using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardMove : MonoBehaviour
{
    private short state;
    private float speed;
    private float slowdownSpeed;
    private float currentSpeed;
    private Vector3 targetPos;

	// Use this for initialization
	void Start()
    {
        state = 0;
        speed = 0;
        currentSpeed = 1;
        targetPos = transform.position;
	}
	
	// Update is called once per frame
	void Update()
    {
        switch(state)
        {
            case 0:
                //hold position
                break;
            case 1:
                //move consistently
                consistentMove();
                break;
            case 2:
                //move speeding up
                speedMove();
                break;
            case 3:
                //move slowing down
                slowMove();
                break;
        }
    }

    public void stayStill()
    {
        state = 0;
    }
    public void stayStill(Vector3 targetPosition)
    {
        state = 0;
        goTo(targetPosition);
    }

    public void moveConsistent(Vector3 targetPosition)
    {
        state = 1;
        targetPos = targetPosition;
    }

    public void moveSpeeding(Vector3 targetPosition)
    {
        state = 2;
        targetPos = targetPosition;
        currentSpeed = 1;
    }

    public void moveSlowing(Vector3 targetPosition)
    {
        state = 3;
        targetPos = targetPosition;
    }

    public void goTo(Vector3 targetPosition)
    {
        transform.position = targetPosition;
        targetPos = targetPosition;
        stayStill();
    }

    private void consistentMove()
    {

    }

    private void speedMove()
    {

    }

    private void slowMove()
    {

    }
}
