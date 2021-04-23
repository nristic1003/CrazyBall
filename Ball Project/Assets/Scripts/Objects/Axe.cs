using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EZCameraShake;

public class Axe : MonoBehaviour
{

    private int direction; // left = -1 , right = 1
    private float speed = 3f;

    private Rigidbody2D myBody;
    private float x, y;
    public GameObject prefab;
    private void Awake()
    {
        myBody = GetComponent<Rigidbody2D>();
    }

    private void Start()
    {
        y = Random.RandomRange(-5f, 5f);
        x = transform.position.x;
    }


    private void FixedUpdate()
    {
        myBody.velocity = new Vector2(-1 * x, y);
        transform.Rotate(0, 0, 5);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Ball")
        {
            Score.instance.notAlive();
           // CameraShaker.Instance.ShakeOnce(4f, 4f, 0.1f, 1f);
            Instantiate(prefab, transform.position, Quaternion.identity);
            GameObject.Find("GameController").GetComponent<GameController>().SetFinalScore();
            Destroy(collision.gameObject);
            

        }
    }
}
