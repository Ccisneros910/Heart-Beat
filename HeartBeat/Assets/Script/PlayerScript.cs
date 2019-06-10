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
    private int jumpCount;
    public int jumpCountResset;

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
        jumpCount = jumpCountResset;
        rb = GetComponent<Rigidbody2D>();
    }

    void OnFloatMessage(Hv_BellSFX1_AudioLib.FloatMessage message)
    {
        Debug.Log(message.receiverName + ": " + message.value);

        countText.text = message.value.ToString();
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
        if(rb.position.y < -10)
        {
            SceneManager.LoadScene(2);
        }
        hitNote = false;
    }


    void FixedUpdate()
    {
        //isGrounded = Physics2D.OverlapCircle(feetpt.position, circleRadius, whatIsGround); 

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
   
