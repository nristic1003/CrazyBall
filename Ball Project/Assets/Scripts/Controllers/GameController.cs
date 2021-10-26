using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;



public class GameController : MonoBehaviour
{

    public Text FinalScore;
    public GameObject gameOverPanel, scorePanel , pausePanel, tube;

  public void PlayAgain()
    {
        gameOverPanel.SetActive(false);
        scorePanel.SetActive(true);
        SceneManager.LoadScene("Gameplay");
    }

    public void ToMainMenu()
    {

        SceneManager.LoadScene("MainMenu");
    }

    public void ContinueGame()
    {
        Time.timeScale = 1f;
        tube.SetActive(true);
        pausePanel.SetActive(false);
    }

    public void PauseGame()
    {
        if(!gameOverPanel.activeSelf)
        {
            Time.timeScale = 0f;
            tube.SetActive(false);
            pausePanel.SetActive(true);
        }
       
    }

    public void SetFinalScore()
    {
        FinalScore.text = "" + Score.instance.getHighScore() + "s";
        scorePanel.SetActive(false);
        gameOverPanel.SetActive(true);

    }



}
