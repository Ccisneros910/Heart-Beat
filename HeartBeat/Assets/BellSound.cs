using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BellSound : MonoBehaviour
{
    private Hv_BellSFX1_AudioLib note;
    // Start is called before the first frame update
    void Start()
    {
        note = GetComponent<Hv_BellSFX1_AudioLib>();
        note.SendEvent(Hv_BellSFX1_AudioLib.Event.Bang);
    }
    void playNote()
    {
        note.SendEvent(Hv_BellSFX1_AudioLib.Event.Bang);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
