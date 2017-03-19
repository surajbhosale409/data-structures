typedef struct graph
{
 int vertex_count;
 int **edges;
}graph;


void setVertices(graph *g,int count)
{
 int i,j;
 g->vertex_count=count;
 g->edges=(int **)malloc(sizeof(int *)*count);
 for(i=0;i<count;i++)
   g->edges[i]=(int *)calloc(count,sizeof(int));

}

void addEdge(graph *g,int v1,int v2)
{
 g->edges[v1][v2]=1;
 g->edges[v2][v1]=1;
}

void addWeightedEdge(graph *g,int v1,int v2, int w)
{
 g->edges[v1][v2]=w;
 g->edges[v2][v1]=w;
}


void deleteEdge(graph *g,int v1,int v2)
{
 g->edges[v1][v2]=0;
 g->edges[v2][v1]=0;
}

void display(graph * g)
{
 int i,j;

 printf("Given graph (Adj. Matrix)\n\n      ");
 for(i=0;i<g->vertex_count;i++)
   printf("%d  ",i);

 for(i=0;i<g->vertex_count;i++)
  {
   printf("\n%d => ",i);
   for(j=0;j<g->vertex_count;j++)
    { 
     printf(" %d ",g->edges[i][j]);
    }
  }
}


void bfs(graph *g)
{



}




    
