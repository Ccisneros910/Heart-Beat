using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//https://www.youtube.com/watch?v=Oadq-IrOazg
public class LevelChanger : MonoBehaviour
{
    //public Animator anim;
    private Hv_select_final_AudioLib sound;

    void Start()
    {
        sound = GetComponent<Hv_select_final_AudioLib>();
        if(sound == null)
        {
            Debug.Log("no sound here");
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Menu.launchSelect == true) {
            //sound.SendEvent(Hv_select_final_AudioLib.Event.Bang);
            sound.SendEvent(Hv_select_final_AudioLib.Event.Bang);
            Menu.launchSelect = false;
        }
        //if(Menu.switchScene == true)
        //{
        //    fadeToLevel();
        //}
    }

    //public void fadeToLevel()
    //{
    //    anim.setTrigger("screenFade");
    //}

    public void onFadeComplete()
    {
        SceneManager.LoadScene(1);
    }
}
