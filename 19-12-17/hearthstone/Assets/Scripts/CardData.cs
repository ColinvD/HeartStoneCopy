using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardData : MonoBehaviour {

    [SerializeField]
    private bool attackCharge = false; //oppakken boolean
    [SerializeField]
    private int manaCost = 1; //manaCost
    [SerializeField]
    private int damage = 1; //damage
    [SerializeField]
    private int health = 1; //health

	public bool GetAttackCharge()
    {
        return attackCharge;
    }

    public int GetManaCost()
    {
        return manaCost;
    }

    public int GetDamage()
    {
        return damage;
    }

    public int GetHealth()
    {
        return health;
    }
}
