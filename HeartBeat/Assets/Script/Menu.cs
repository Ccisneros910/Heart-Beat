using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
public class Menu : MonoBehaviour
{
    public Text[] buttons = new Text[3];
    private int[] xPositions = new int[3] {250, 100, 160};
    private int[] yPositions = new int[3] {60, -57, -157};
    private RectTransform textPos, imagePos;
    // background effect
    public ParticleSystem ripples;
    // heart sprites on side of selected option
    public Image leftBound, rightBound;
    private int currentOption;

    void Start()
    {
        /*buttons[0] = start;
        buttons[1] = credits;
        buttons[2] = quit;
        */
        currentOption = 0;
        textPos = buttons[currentOption].GetComponent<RectTransform>();
        Debug.Log(textPos.localPosition);
        buttons[currentOption].GetComponent<Animation>().Play();
        //pos.y = yPositions[currentOption];
        //buttons[currentOption].transform.position = new Vector3(xPositions[currentOption], yPositions[currentOption], 0); //pos;
        //textPos.localPosition = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
        //textPos.localPosition = new Vector3(10, 300, 0);
        //textPos.sizeDelta = new Vector2(600, 200);
        Debug.Log(textPos.localPosition);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.DownArrow) && currentOption<2)
        {
            buttons[currentOption].GetComponent<Animation>().Stop();
            buttons[currentOption].color = Color.white;
            currentOption++;
            buttons[currentOption].GetComponent<Animation>().Play();
            imagePos = leftBound.GetComponent<RectTransform>();
            imagePos.localPosition = new Vector3(-xPositions[currentOption], yPositions[currentOption], 0);
            //buttons[currentOption].transform.position = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow) && currentOption > 0)
        {
            buttons[currentOption].GetComponent<Animation>().Stop();
            buttons[currentOption].color = Color.white;
            currentOption--;
            buttons[currentOption].GetComponent<Animation>().Play();
            //buttons[currentOption].transform.position = new Vector3(xPositions[currentOption], yPositions[currentOption], 0);
        }
        else if(Input.GetKeyDown(KeyCode.DownArrow) && currentOption == 2 || Input.GetKeyDown(KeyCode.UpArrow) && currentOption == 0)
        {
            Debug.Log("can\'t go farther");
        }

        void buttonPressed()
        {
            if(currentOption == 0)
            {
                
            }
        }
    }
}
/*
void changeTextPos()
{

}
*/