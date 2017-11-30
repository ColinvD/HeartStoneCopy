using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardMove : MonoBehaviour {

    public string hello;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
        switch (hello)
        {
            case "hi":
                Debug.Log("hi");
                break;
            case "hey":
                Debug.Log("hey");
                break;
        }
    }
}
