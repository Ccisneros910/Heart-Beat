using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    public float speed;
    public float jumpForce;

    private bool isGrounded;
    public Transform feetpt;
    public float circleRadius;
    public LayerMask whatIsGround;
    private int jumpCount;
    public int jumpCountResset;

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
            jumpCount = jumpCountResset;
        }
        if (Input.GetKeyDown(KeyCode.Space) && jumpCount > 0)
        {
            rb.velocity = Vector2.up * jumpForce;
            jumpCount--;
        }
        else if (Input.GetKeyDown(KeyCode.Space) && jumpCount == 0 && isGrounded == true)
        {
            rb.velocity = Vector2.up * jumpForce;
        }
        //if(rb.position.y < -10)
        //{
            //SeceneManager.LoadScene(2);
        //}
    }


    void FixedUpdate()
    {
        isGrounded = Physics2D.OverlapCircle(feetpt.position, circleRadius, whatIsGround); 

        float move = 1;
        rb.velocity = new Vector2(speed * move, rb.velocity.y);

    }
}

