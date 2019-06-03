using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    public float speed; //speed of player moving
    public float jumpForce; //Height of player jumping


    private bool isGrounded; //check is grounded
    public Transform feetpt; //an empty object is used to check is grounded
    public float circleRadius; //the radius of circle(feetpt)
    public LayerMask whatIsGround; //check which layer is ground
    private int jumpCount; //jump counting
    public int jumpCountResset; //limited number of times for jumping

    private Rigidbody2D rb;


    // Start is called before the first frame update
    void Start()
    {
        jumpCount = jumpCountResset;
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if (isGrounded == true)
        {
            jumpCount = jumpCountResset; //reset jumpCount when hit the ground
        }
        if (Input.GetKeyDown(KeyCode.Space) && jumpCount > 0)
        { //able to jump more than one if jumpCountResset > 0
            rb.velocity = Vector2.up * jumpForce;
            jumpCount--; //stop jumping if jumpCount equals to 0 and player not on the ground
        }
        else if (Input.GetKeyDown(KeyCode.Space) && jumpCount == 0 && isGrounded == true)
        { //allow jumping if player hit the ground
            rb.velocity = Vector2.up * jumpForce;
        }

        //if(rb.position.y < -10)
        //{
            //SeceneManager.LoadScene(2);
        //}

    }


    void FixedUpdate()
    {
        //Allow player tests to check objects on Ground layer
        isGrounded = Physics2D.OverlapCircle(feetpt.position, circleRadius, whatIsGround);

        float move = 1;
        rb.velocity = new Vector2(speed * move, rb.velocity.y); //auto moving forward

    }

   
}

