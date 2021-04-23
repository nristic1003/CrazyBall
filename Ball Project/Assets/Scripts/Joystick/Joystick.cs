using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Joystick : MonoBehaviour, IPointerUpHandler, IPointerDownHandler
{
	private BallMoving ball;

	void Awake()
	{
		ball = GameObject.Find("Ball").GetComponent<BallMoving>();
	}

	public void OnPointerDown(PointerEventData data)
	{
		Debug.Log(gameObject.name);
		if (gameObject.name == "Down")
		{
			
			ball.SetMoveDown(true);
		}
		else
		{
			ball.SetMoveUp(false);
		}
	}

	public void OnPointerUp(PointerEventData data)
	{
		ball.stopUpAndDown();
	}
}
