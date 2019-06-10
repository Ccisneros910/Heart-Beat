using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BellSound : MonoBehaviour
{
    private Hv_bell_fin_AudioLib note;
    private static bool playSound;

    // Start is called before the first frame update
    void Start()
    {
        playSound = false;
        note = GetComponent<Hv_bell_fin_AudioLib>();
        note.SetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency, 30f);
        note.SendEvent(Hv_bell_fin_AudioLib.Event.Bang);
    }
    void playNote()
    {
        note.SetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency, 70f);
        note.SendEvent(Hv_bell_fin_AudioLib.Event.Bang);
        playSound = false;
    }

    // Update is called once per frame
    void Update()
    {
        playSound = PlayerScript.hitNote;
        if (playSound == true) {
            Debug.Log("frequency: " + note.GetFloatParameter(Hv_bell_fin_AudioLib.Parameter.Frequency));
            playNote();
        }
    }
}