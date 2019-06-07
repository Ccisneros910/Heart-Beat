using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BellSound : MonoBehaviour
{
    private Hv_BellSFX1_AudioLib note;
    private static bool playSound;

    // Start is called before the first frame update
    void Start()
    {
        playSound = false;
        note = GetComponent<Hv_BellSFX1_AudioLib>();
        note.SendEvent(Hv_BellSFX1_AudioLib.Event.Bang);
    }
    // Update is called once per frame
    void Update()
    {
        playSound = PlayerScript.hitNote;
        if (playSound == true)
        {
            playNote();
        }
    }

    void playNote()
    {
        note.SendEvent(Hv_BellSFX1_AudioLib.Event.Bang);
        playSound = false;
    }
}
