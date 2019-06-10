using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGM : MonoBehaviour
{
    private Hv_BGM_2_AudioLib music;

    // Start is called before the first frame update
    void Start()
    {
        music = GetComponent<Hv_BGM_2_AudioLib>();
        music.SendEvent(Hv_BGM_2_AudioLib.Event.Bang);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
