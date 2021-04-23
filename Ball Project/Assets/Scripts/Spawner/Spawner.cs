using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public GameObject[] elements;

    private void Start()
    {
        StartCoroutine(create());
    }

    IEnumerator create()
    {
        yield return new WaitForSeconds(Random.Range(1, 4));
        int i = Random.Range(0, 2);
        Instantiate(elements[i], transform.position, Quaternion.identity);
        StartCoroutine(create());

    }


}
