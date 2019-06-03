using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraScript : MonoBehaviour
{
    Vector3 c_NewPosition;
    void Start()
    {
        //Initialise the vector
        c_NewPosition = new Vector3(0, 0,-10);
    }
    // Update is called once per frame
    void Update()
    {
        float x = GameObject.Find("Player").transform.position.x;
        c_NewPosition.x = x;
        transform.position = c_NewPosition;
    }
}
