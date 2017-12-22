using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardMove : MonoBehaviour
{
    private short state;
    private float speed;

	// Use this for initialization
	void Start()
    {
        state = 0;
        speed = 0;
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
                break;
            case 2:
                //move speeding up
                break;
            case 3:
                //move slowing down
                break;
        }
    }

    public void moveConsistent()
    {
        state = 1;
    }

    public void moveFaster()
    {
        state = 2;
    }

    public void moveSlowing()
    {
        state = 3;
    }
}
