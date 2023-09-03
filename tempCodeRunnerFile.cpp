    for (int i = 0; i < q; i++)
    {
        for (int j = i * k; j < i * k + k; j++)
            cin >> ar[j].n;
        sort(&(ar[i * k]), &(ar[i * k]) + k, sortt);
        for (int a = 0; a < k; a++)
            ar[(i + 1) * k + a].w = ar[i * k + a].w;
    }
    for(int i=(q-1)*k;i<q*k;i++)
        cout<<ar[i].w;