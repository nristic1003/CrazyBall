using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TubeScript : MonoBehaviour
{


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag =="Ball")
        {
            GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().stopUpAndDown();
            GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().stopMoving();
          
        }
      

    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Ball")
            GameObject.FindGameObjectWithTag("Ball").GetComponent<BallMoving>().startMoving();
   

    }


}
