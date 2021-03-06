﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
public class Menu : MonoBehaviour
{
    public Text[] buttons = new Text[3];
    private int[] xPositions = new int[3] { 140, 90, 130 };
    private int[] yPositions = new int[3] { 60, -40, -120};
    private bool inCredits = false;
    private RectTransform textPos, imagePos;
    // background effect
    public ParticleSystem ripples;
    // heart sprites on side of selected option
    public Image leftBound, rightBound;
    private int currentOption;
    // Pure Data
    public Text countText;
    //private Hv_untitled_2d02fb5c0bb6_AudioLib pd;
    private Hv_heartbeatHeavy_AudioLib pd;
    public AudioClip _clip;

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
        pd.FillTableWithMonoAudioClip("PD", _clip);

        // set up to receive messages from the PD patch
        pd.RegisterSendHook();
        pd.FloatReceivedCallback += OnFloatMessage;
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
                // hide the options
                for (int i = 0; i < 3; i++)
                {
                    buttons[i].enabled = false;
                }
                inCredits = true;
            }
            // hide the credits
            else if (currentOption == 1 && inCredits == true)
            {
                for (int i = 0; i < 3; i++)
                {
                    buttons[i].enabled = true;
                }
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
            imagePos = leftBound.GetComponent<RectTransform>();
            imagePos.localPosition = new Vector3(-xPositions[currentOption], yPositions[currentOption], 0);
            imagePos = rightBound.GetComponent<RectTransform>();
            imagePos.localPosition = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
        }
        void stopAnimation()
        {

        }
        void startAnimation()
        {

        }

    }
}