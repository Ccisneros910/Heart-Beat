using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
public class Menu : MonoBehaviour
{
    public Text[] buttons = new Text[5];
    private int[] xPositions = new int[4] { 140, 90, 130, 85};
    private int[] yPositions = new int[4] { 60, -40, -120, -120};
    private bool inCredits = false;
    private RectTransform textPos, imagePos;
    // background effect
    public ParticleSystem ripples;
    // heart sprites on side of selected option
    public Image leftBound, rightBound;
    private int currentOption;
    // Pure Data
    public Text countText;
    private Hv_heartbeatHeavy_AudioLib pd;
    public AudioClip _clip;

    IEnumerator playHB()
    {
        while (true)
        {
            yield return new WaitForSecondsRealtime(1.0f);
            pd.SendEvent(Hv_heartbeatHeavy_AudioLib.Event.Bang);
        }
    }

    void Start()
    {
        // Selecting an option
        currentOption = 0;
        textPos = buttons[currentOption].GetComponent<RectTransform>();
        Debug.Log(textPos.localPosition);
        buttons[currentOption].GetComponent<Animation>().Play();
        Debug.Log(textPos.localPosition);

        //Initialize Heavy Library here
        pd = GetComponent<Hv_heartbeatHeavy_AudioLib>();
        pd.SendEvent(Hv_heartbeatHeavy_AudioLib.Event.Bang);
        StartCoroutine(playHB());
        buttons[3].enabled = false;
        buttons[4].enabled = false;
    }
    
    void OnFloatMessage(Hv_heartbeatHeavy_AudioLib.FloatMessage message)
    {
        Debug.Log(message.receiverName + ": " + message.value);
        countText.text = message.value.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        // if the Player is not in the credits, move through the menu
        if (inCredits == false)
        {
            if (Input.GetKeyDown(KeyCode.DownArrow) && currentOption < 2)
            {
                buttons[currentOption].GetComponent<Animation>().Stop();
                buttons[currentOption].color = Color.white;
                currentOption++;
                buttons[currentOption].GetComponent<Animation>().Play();
                moveHearts();
                //buttons[currentOption].transform.position = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
            }
            else if (Input.GetKeyDown(KeyCode.UpArrow) && currentOption > 0)
            {
                buttons[currentOption].GetComponent<Animation>().Stop();
                buttons[currentOption].color = Color.white;
                currentOption--;
                buttons[currentOption].GetComponent<Animation>().Play();
                moveHearts();
                //buttons[currentOption].transform.position = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
            }
            else if (Input.GetKeyDown(KeyCode.DownArrow) && currentOption == 2 || Input.GetKeyDown(KeyCode.UpArrow) && currentOption == 0)
            {
                Debug.Log("can\'t go farther");
            }
            // checks for Player input
            if (Input.GetKeyDown(KeyCode.Return))
            {
                buttonPressed();
            }
        }
        else if (inCredits == true)
        {
            Debug.Log("Waiting for back button");
            if (Input.GetKeyDown(KeyCode.Return))
            {
                Debug.Log("Back to menu");
                for (int i = 0; i < 3; i++)
                {
                    buttons[i].enabled = true;
                }
                buttons[3].enabled = false;
                buttons[4].enabled = false;
                inCredits = false;
                currentOption = 1;
                moveHearts();
                buttons[currentOption].GetComponent<Animation>().Play();
            }
        }
        void buttonPressed()
        {
            // start the game
            if (currentOption == 0)
            {
                SceneManager.LoadScene(1);
            }
            // display the credits
            else if (currentOption == 1 && inCredits == false)
            {
                buttons[currentOption].GetComponent<Animation>().Stop();
                // hide the options
                for (int i = 0; i < 3; i++)
                {
                    buttons[i].enabled = false;
                }
                //show the credits and back button
                buttons[3].enabled = true;
                buttons[4].enabled = true;
                //going to the credits
                inCredits = true;
                moveHearts();
                Debug.Log("incredits: " + inCredits);
            }
            // hide the credits
            else if (currentOption == 1 && inCredits == true)
            {
                for (int i = 0; i < 3; i++)
                {
                    buttons[i].enabled = true;
                }
                buttons[3].enabled = false;
                buttons[4].enabled = false;
                inCredits = false;
            }
            // close the game
            else if (currentOption == 2)
            {
                Application.Quit();
            }
            else if (currentOption == 1 && inCredits == false)
            {

            }
        }
        void moveHearts()
        {
            if (inCredits == false)
            {
                imagePos = leftBound.GetComponent<RectTransform>();
                imagePos.localPosition = new Vector3(-xPositions[currentOption], yPositions[currentOption], 0);
                imagePos = rightBound.GetComponent<RectTransform>();
                imagePos.localPosition = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
            }
            else if(inCredits == true)
            {
                currentOption = 3;
                imagePos = leftBound.GetComponent<RectTransform>();
                imagePos.localPosition = new Vector3(-xPositions[currentOption], yPositions[currentOption], 0);
                imagePos = rightBound.GetComponent<RectTransform>();
                imagePos.localPosition = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);

            }
        }
    }
}