using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerScript : MonoBehaviour
{
    public float speed;
    public float jumpForce;

    private bool isGrounded = true;
    public Transform feetpt;
    public float circleRadius;
    public LayerMask whatIsGround;
    public float jumpTime;
    private bool isJumping;
    private float jumpTimeCounter;

    // Bell SFX
    private GameObject bell;
    public Text countText;

    private Rigidbody2D rb;

    // Used by BellSound.cs
    public static bool hitNote = false;
    private Vector2 notePlace;
    public static float noteHeight;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        if (isGrounded == true && Input.GetKeyDown(KeyCode.Space))
        {
            isJumping = true;
            jumpTimeCounter = jumpTime;
            rb.velocity = new Vector2(rb.velocity.x, jumpForce);
        }
        if(isJumping == true && Input.GetKey(KeyCode.Space))
        {
            if(jumpTimeCounter > 0)
            {
                rb.velocity = new Vector2(rb.velocity.x, jumpForce);
                jumpTimeCounter -= Time.deltaTime;
            }
            else if(jumpTimeCounter < 0)
            {
                isJumping = false;
            }
        }
        if (Input.GetKeyUp(KeyCode.Space))
        {
            isJumping = false;
        }
        if(rb.position.y < -10)
        {
            SceneManager.LoadScene(2);
        }
        hitNote = false;
    }

    void FixedUpdate()
    {
        isGrounded = Physics2D.OverlapCircle(feetpt.position, circleRadius, whatIsGround);

        float move = 1;
        rb.velocity = new Vector2(speed * move, rb.velocity.y);

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "yellowGround")
        {
            hitNote = true;
            noteHeight = collision.gameObject.transform.position.y;
            Debug.Log("Note Hit! Position: " + noteHeight);
        }
    }
}
   
