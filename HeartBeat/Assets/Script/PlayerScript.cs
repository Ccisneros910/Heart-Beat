using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour
{
    public float speed;
    public float jumpForce;
    bool isJumping;

    private Rigidbody2D rb;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        float move = 1;
        rb.velocity = new Vector2(speed * move, rb.velocity.y);
        Jump();
    }

    void Jump()
    {
        if(Input.GetKeyDown(KeyCode.Space) && !isJumping)
        {
            isJumping = true;

            rb.AddForce(new Vector2(rb.velocity.x, jumpForce));
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Ground"))
        {
            isJumping = false;
            rb.velocity = Vector2.zero;
        }
    }
}
