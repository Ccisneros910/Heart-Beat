using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{
    public GameObject heart;
    public Text title, restart, quit;
    public Text textColor;
    private Color tempColor;
    private bool textOn;
    // Start is called before the first frame update
    void Start()
    {
        textOn = false;
        if(heart != null)
        {
            Rigidbody2D heartBody = heart.GetComponent<Rigidbody2D>();
            heartBody.velocity = new Vector2(150.0f, 0.0f);
        }
        /*must get the color of the text object and then change the alpha of it
        okay if all text objects are the same, but if of different styles they
        might conflict
        */
        /*
        // if doing this, cannot use CrossFadeAlpha()
        tempColor = title.color; // change title alpha
        tempColor.a = 0f;
        title.color = tempColor;
        tempColor = restart.color;   // change restart alpha
        tempColor.a = 0f;
        restart.color = tempColor;
        tempColor = quit.color;      // change quit alpha
        tempColor.a = 0f;
        quit.color = tempColor;
        */
        //
        
        title.CrossFadeAlpha(0.0f, 0.001f, false);
        restart.CrossFadeAlpha(0.0f, 0.001f, false);
        quit.CrossFadeAlpha(0.0f, 0.001f, false);
        

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private IEnumerator OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("heart in!");
       // if(textOn == false)
        //{
            textOn = true;
            yield return new WaitForSecondsRealtime(3);
        Debug.Log("time over");
        //FadeInText();
        
        title.CrossFadeAlpha(1.0f, 4.0f, false);
        restart.CrossFadeAlpha(1.0f, 4.0f, false);
        quit.CrossFadeAlpha(1.0f, 4.0f, false);
        
        //tempColor.crossFadeAlpha(1.0f, 4.0f, false);
        Debug.Log("after fade in");
        //}
        //yield return new WaitForSecondsRealtime(0);
    }

    void FadeInText()
    {
        title.CrossFadeAlpha(1.0f, 4.0f, false);
        restart.CrossFadeAlpha(1.0f, 4.0f, false);
        quit.CrossFadeAlpha(1.0f, 4.0f, false);
    }
}
