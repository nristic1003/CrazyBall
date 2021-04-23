using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallMoving : MonoBehaviour
{

    private Rigidbody2D myBody;
    public bool canMove = false;
    public float speed = 1f;
    private float d = 1;

    public bool up = false , down = false;


    void Awake()
    {
        myBody = GetComponent<Rigidbody2D>();
    }

    public void SetMoveDown(bool v)
    {
        down = true;
        up = false;
    }

    public void SetMoveUp(bool v)
    {
        up = true;
        down = false;
    }

    public void stopUpAndDown()
    {
        up = false;
        down = false;
    }

    // Update is called once per frame



    private void FixedUpdate()
    {
       /* float a = Input.GetAxisRaw("Horizontal");*/

        if(up)
        {
            moveUp();
        }
        else if(down)
        {
            moveDown();
        }
        else
        {
            myBody.velocity = new Vector2(0, 0);
        }

    }

    void moveUp()
    {
        if ((!canMove && up && transform.position.y < 0)) canMove = true;
        if (canMove)
             myBody.velocity = new Vector2(myBody.velocity.x, speed * d);
    }

    void moveDown()
    {
        if (!canMove && down && transform.position.y > 0) canMove = true;
        if (canMove)
            myBody.velocity = new Vector2(myBody.velocity.x, -1*speed * d);
    }


    public void stopMoving()
    {
        canMove = false;
    }

    public void startMoving()
    {
        canMove = true;
    }

}
