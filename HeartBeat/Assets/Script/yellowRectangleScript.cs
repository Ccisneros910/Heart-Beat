using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class yellowRectangleScript : MonoBehaviour
{
    public Animator animator;
    private bool isPlayer = false;


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("yellowGround!!!");
            isPlayer = true; //true when player hit the ground(rectangle)
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(isPlayer == true)
        {
            animator.SetBool("IsPlayer", true); //switch to lightUp animation
        }
    }
}
