using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{

    public Text highScore;
    private float currentScore = 0;

    private bool alive = true;

    public static Score instance;

    private void Start()
    {
        if (!instance) instance = this;
    }


    private void Update()
    {
        if(alive)
        {
            currentScore += Time.deltaTime;
            currentScore = currentScore % 60;
            highScore.text = "Score (s): " + currentScore;
        }
    }

    public void notAlive() { alive = false; }

    public float getHighScore()
    {
        return currentScore;
    }





}
