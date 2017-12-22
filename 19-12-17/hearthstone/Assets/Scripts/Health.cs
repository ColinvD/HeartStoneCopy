using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour
{
    private int health = 30;
    
    public void LoseHealth(int damage)
    {
        health -= damage;
    }
}
