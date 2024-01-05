bub sort: arr, size

for step in 0 to size-1
  for i in 0 to size-step-1
    if ar[i] > ar[i+1]
      swap
      
ins sort: arr, size

for step in 1 to size
  curr = ar[step]
  prev_idx = step-1
  
  while curr < ar[prev_idx] and prev_idx >= 0
    ar[prev_idx+1] = ar[prev_idx]
    prv_idx--
    
  ar[prev_idx+1] = curr
  
merge sort: arr, l, r

m = l + (r - l) / 2

mergeSort(arr, l, m)
mergeSort(arr, m + 1, r)
merge(arr, l, m, r)

quick sort: arr, low, high

pi = partition(array, low, high)
quickSort(array, low, pi - 1)
quickSort(array, pi + 1, high)

partition:
  pivot = array[high];
  i = (low - 1);

  for j in low to high
    if array[j] <= pivot {
      i++;
      swap(&array[i], &array[j])

  swap(&array[i + 1], &array[high]) // use pointers

  return (i + 1);
  

prims:

selected[V] = all false
selected[0] = truee

while no_edg < V-1
  min = INF
  
  for i in 0 to V
    if selected[i]
      for j in 0 to V
        if !selected[j] and G[i][j] != 0
          if min > G[i][j]
            min = G[i][j]
            x=i
            y=j
            
   print x, y, G[x][y]
   selected[y] = true
   no_edg++
   
kruskal:

edge u,v,w
edg_lst edge[], n

edg_lst elist
spn_lst slist 

elist.n = 0
for i in 1 to n
  for j in 0 to i
    if g[i][j] != 0
      elist.data[elist.n].u = i
      j
      w = g[i][j]
      elist.n++
      
sort:

for i in 1 to elist.n
  for j in 0 to elist.n-1
    if elist.data[j].w > elist.data[j+1].w 
      swap

belongs[MAX]

for i in 0 to n
  belogs[i] = i
  
slist.n = 0

for i in 0 to elist.n
  c1 = belongs[elist.data[i].u]
  c2 = belongs[elist.data[i].v]
  
  if c1 != c2
    slist.data[slist.n] = elist.data[i]
    slist.n++;
    apu(belongs, c1, c2)
    
apu:
  for i in 0 to n
    if belongs[i] == c2
      belongs[i] = c1
      
for i in spanlist.n
  print slist.data[i].u, v, w

  
dijkstra: grph, n, start 

cst[mx][mx]

for i in 0 to n
  for j in 0 to n
    if grph[i][j] == 0
      cst[i][j] = inf
    else
      cst[i][j] = grph[i][j]
      
distance[max], pred[max], visted[max]

for i in 0 to n
  dist[i] = cost[strt][i]
  pred[i] = strt
  visited[i] = 0  
  
dist[strt] = 0
visid[strt] = 1
cnt = 1

while cnt < n-1
  mindst = inf
  
  for i in 0 to n
    if dist[i] < mindst and !vist[i]
      mindist = dist[i]
      nxtnode = i
      
   vistd[nxtnode] = 1
   
   for i in 0 to n
     if !vistd[i]
       if mindist + cost[nxtnode][i] < dist[i]
         dist[i] = mind + cst[nxtnode][i]
         prd[i] = nxtnode
         
    count++
    
for i 0 to n
  if i != strt
    print i, distance[i]
  
  
  

