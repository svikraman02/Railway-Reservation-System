#include <stdio.h>
#include <limits.h>
#include <string.h>

#define V 10
#define MAX_TRAINS 150

// Station abbreviations
char* stations[V] = {"TVC", "ERS", "MAQ", "CBE", "MDU", "MAS", "TPTY", "VSKP", "HYB", "SBC"};

// Trains running between the stations
char* trains[MAX_TRAINS][3] = {
    {"TVC", "ERS", "Trivandrum Express"},
    {"ERS", "MAQ", "Kerala Coastal Express"},
    {"MAQ", "SBC", "Malabar Express"},
    {"CBE", "MDU", "Kongu Express"},
    {"CBE", "MAS", "Cheran Express"},
    {"MDU", "MAS", "Pandian Express"},
    {"MAS", "TPTY", "Tirupati Special"},
    {"TPTY", "VSKP", "Simhadri Express"},
    {"VSKP", "HYB", "Godavari Express"},
    {"HYB", "SBC", "Kacheguda Express"},
    {"TVC", "MAQ", "Maveli Express"},
    {"TVC", "CBE", "Ananthapuri Express"},
    {"ERS", "MAS", "Intercity Express"},
    {"ERS", "VSKP", "Jan Shatabdi Express"},
    {"MDU", "TPTY", "Cholan Express"},
    {"MDU", "VSKP", "Andhra Pradesh Express"},
    {"MAS", "HYB", "Charminar Express"},
    {"MAS", "SBC", "Shatabdi Express"},
    {"CBE", "SBC", "Nilgiri Express"},
    {"MAQ", "VSKP", "Matsyagandha Express"},
    {"MAS", "ERS", "Chennai Mail"},
    {"ERS", "MDU", "Amrita Express"},
    {"CBE", "HYB", "Kaveri Express"},
    {"SBC", "TPTY", "Garudadri Express"},
    {"SBC", "VSKP", "Prashanti Express"},
    {"TVC", "HYB", "Sabari Express"},
    {"TPTY", "MDU", "Tirukkural Express"},
    {"MAS", "TVC", "Rockfort Express"},
    {"HYB", "MAQ", "Marathwada Express"},
    {"VSKP", "CBE", "Janmabhoomi Express"}
};

int graph[V][V] = {
    {0, 206, 0, 0, 0, 0, 0, 0, 0, 0},       // TVC
    {206, 0, 421, 0, 0, 0, 0, 0, 0, 0},     // ERS
    {0, 421, 0, 512, 0, 0, 0, 0, 0, 447},   // MAQ
    {0, 0, 512, 0, 435, 336, 0, 0, 0, 0},   // CBE
    {0, 0, 0, 435, 0, 497, 0, 0, 0, 0},     // MDU
    {0, 0, 0, 336, 497, 0, 130, 0, 0, 0},   // MAS
    {0, 0, 0, 0, 0, 130, 0, 760, 0, 0},     // TPTY
    {0, 0, 0, 0, 0, 0, 760, 0, 661, 0},     // VSKP
    {0, 0, 0, 0, 0, 0, 0, 661, 0, 610},     // HYB
    {0, 0, 447, 0, 0, 0, 0, 0, 610, 0}      // SBC
};

int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void printPath(int parent[], int j) {
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    printf(" -> %s", stations[j]);
}

void printTrains(int parent[], int j) {
    if (parent[j] == -1)
        return;
    printTrains(parent, parent[j]);
    if (parent[j] != -1) {
        for (int k = 0; k < MAX_TRAINS; k++) {
            if ((strcmp(trains[k][0], stations[parent[j]]) == 0 && strcmp(trains[k][1], stations[j]) == 0) || 
                (strcmp(trains[k][1], stations[parent[j]]) == 0 && strcmp(trains[k][0], stations[j]) == 0)) {
                printf("Take %s from %s to %s\n", trains[k][2], stations[parent[j]], stations[j]);
                break;
            }
        }
    }
}

void printSolution(int dist[], int n, int parent[], int src, int dest) {
    printf("Vertex\t Distance\tPath");
    printf("\n%s -> %s \t %d\t%s ", stations[src], stations[dest], dist[dest], stations[src]);
    printPath(parent, dest);
    printf("\nTrains:\n");
    printTrains(parent, dest);
}

void dijkstra(int graph[V][V], int src, int dest) {
    int dist[V];
    int sptSet[V];
    int parent[V];

    for (int i = 0; i < V; i++) {
        parent[src] = -1;
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]) {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }

    printSolution(dist, V, parent, src, dest);
}

int getStationIndex(char* name) {
    for (int i = 0; i < V; i++) {
        if (strcmp(stations[i], name) == 0)
            return i;
    }
    return -1;
}

int main() {
    char srcName[10], destName[10];
    int src = -1, dest = -1;

    printf("TVC stands for :Trivandrum Central\n");
    printf("ERS stands for :Ernakulam Junction\n");
    printf("MAQ stands for :Mangalore Central\n");
    printf("CBE stands for :Coimbatore Junction\n");
    printf("MDU stands for :Madurai Junction\n");
    printf("MAS stands for :Chennai Central\n");
    printf("TPTY stands for :Tirupati\n");
    printf("VSKP stands for :Visakhapatnam\n");
    printf("HYB stands for  :Hyderabad\n");
    printf("SBC stands for  :Bangalore City\n");

    while (src == -1) {
        printf("Enter source station (TVC, ERS, MAQ, CBE, MDU, MAS, TPTY, VSKP, HYB, SBC): ");
        scanf("%s", srcName);
        src = getStationIndex(srcName);
        if (src == -1) {
            printf("Invalid source station name entered. Please try again.\n");
        }
    }

    while (dest == -1) {
        printf("Enter destination station (TVC, ERS, MAQ, CBE, MDU, MAS, TPTY, VSKP, HYB, SBC): ");
        scanf("%s", destName);
        dest = getStationIndex(destName);
        if (dest == -1) {
            printf("Invalid destination station name entered. Please try again.\n");
        }
    }

    dijkstra(graph, src, dest);

    return 0;
}
