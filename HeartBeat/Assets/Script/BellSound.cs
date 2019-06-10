using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BellSound : MonoBehaviour
{
    private Hv_bell_fin_AudioLib note;
    private static bool playSound;
    public static float frequency;

    // Start is called before the first frame update
    void Start()
    {
        playSound = false;
        note = GetComponent<Hv_bell_fin_AudioLib>();
        note.SetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency, 50);
        note.SendEvent(Hv_bell_fin_AudioLib.Event.Bang);
    }
    public void playNote()
    {
        if (PlayerScript.noteHeight == 0)
        {
            frequency = 60;
        }
        else if (PlayerScript.noteHeight == 1)
        {
            frequency = 65;
        }
        else if (PlayerScript.noteHeight == 2)
        {
            frequency = 68;
        }
        else if (PlayerScript.noteHeight == 3)
        {
            frequency = 70;
        }
        Debug.Log("Frequence: " + frequency);
        note.SetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency, frequency);
        note.SendEvent(Hv_bell_fin_AudioLib.Event.Bang);
        playSound = false;
    }

    // Update is called once per frame
    void Update()
    {
        playSound = PlayerScript.hitNote;
        Debug.Log("hitNote: " + PlayerScript.hitNote);
        Debug.Log("Playsound: " + playSound);
        if (playSound == true) {
            Debug.Log("frequency: " + note.GetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency));
            playNote();
        }
    }
}