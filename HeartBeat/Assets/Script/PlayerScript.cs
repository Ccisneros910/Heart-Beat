using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Assertions;

public class PlayerScript : MonoBehaviour
{
    public float speed;
    public float jumpForce;

    private bool isGrounded;
    public static bool hitNote = false;
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
    public static bool hitNote;
    private Vector2 notePlace;
    public static float noteHeight;


    // Start is called before the first frame update
    void Start()
    {
        jumpCount = jumpCountResset;
        rb = GetComponent<Rigidbody2D>();
        hitNote = false;

        // Initialize all of the bell sounds
        //Initialize Heavy Library here
        //bell = GameObject.Find("/Player/bell1");
        //Assert.AreNotEqual(bell, null);
        //GameObject.Find("/Player/bell1")
        //bell1 = GetComponent<Hv_BellSFX1_AudioLib>();
        //bell1.SendEvent(Hv_BellSFX1_AudioLib.Event.Bang);
        //bell2 = GetComponent<Hv_BellSFX2_AudioLib>();
        //bell2.SendEvent(Hv_BellSFX2_AudioLib.Event.Bang);
        //bell3 = GetComponent<Hv_BellSFX3_AudioLib>();
        //bell3.SendEvent(Hv_BellSFX3_AudioLib.Event.Bang);
        //bell4 = GetComponent<Hv_BellSFX4_AudioLib>();
        //bell4.SendEvent(Hv_BellSFX4_AudioLib.Event.Bang);
        //pd.FillTableWithMonoAudioClip("PD", _clip);
        // need this? ^ 

        // set up to receive messages from the PD patch
        //bell1.RegisterSendHook();
        //bell1.FloatReceivedCallback += OnFloatMessage;
    }

    void OnFloatMessage(Hv_BellSFX1_AudioLib.FloatMessage message)
    {
        Debug.Log(message.receiverName + ": " + message.value);

        countText.text = message.value.ToString();
    }

    // void OnFloatMessage(Hv_BellSFX1_AudioLib.FloatMessage message)
    // {
        // Debug.Log(message.receiverName + ": " + message.value);

        // countText.text = message.value.ToString();
    // }

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
        isGrounded = Physics2D.OverlapCircle(feetpt.position, circleRadius, whatIsGround); 
        float move = 1;
        rb.velocity = new Vector2(speed * move, rb.velocity.y);

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        hitNote = true;
        Debug.Log("Note Hit!");

        if (collision.gameObject.tag == "yellowGround")
        {
            hitNote = true;
            //Debug.Log("Collision: " + hitNote);
            noteHeight = collision.gameObject.transform.position.y;
            //Debug.Log("Note Hit! Position: " + noteHeight);
        }

        hitNote = true;
        Debug.Log("Note Hit!");
    }
}
   
