# Skewness-aware Vertex-cut Partitioner (S5P)
- The implementation of S5P a skewness-aware vertex-cut partitioner. The work is published at ACM SIGMOD 2024.</br>
>Zezhong Ding, Yongan Xiang, Shangyou Wang, Xike Xie, S. Kevin Zhou. “Play like a Vertex: A Stackelberg Game Approach for Streaming Graph Partitioning”. In Proceedings of the 2024 International Conference on Management of Data (SIGMOD ‘24). <https://dl.acm.org/doi/10.1145/3654965>
- Contact: zezhongding@mail.ustc.edu.cn

<p align="center">
  <img src="./Supplements/overview_1.jpg" height="300">
</p>

## Installation
We tested the program (main) on Ubuntu 20.046 LTS.

The programs require the below packages: `g++`, `cmake`, `glog`, `gflags`, `boost`:
```
sudo apt-get install libgoogle-glog-dev libgflags-dev libboost-all-dev cmake g++
```

## Build Programs
```
# C++
cd cpp
mkdir build && cd build
cmake ..
make
```

```
# java
- Details in Java Folder
```



## Usage
Parameters:
* `inputGraphPath`: path to the edge list file, e.g., `./dataset/testgraph.bin`. The edge list file should be in the binary format, separate using `\t`. The convert code (`convert2binary.cpp`) is in the `dataset` folder.
* `Vcount`: $|V|$
* `Ecount`: $|E|$
* `batchsize`: default: 10
* `partitionNum`: the number of partitions, default: 32
* `tau`: load balance constraint $\tau$, default: 1.0

## Data sets used in the paper
* OK: https://snap.stanford.edu/data/com-Orkut.html
* TW: https://snap.stanford.edu/data/twitter-2010.html
* FR: https://snap.stanford.edu/data/com-Friendster.html
* LJ: https://snap.stanford.edu/data/com-LiveJournal.html
* IT: http://law.di.unimi.it/webdata/it-2004/
* UK7: http://law.di.unimi.it/webdata/uk-2007-05/
* IN: https://law.di.unimi.it/webdata/in-2004/
* SK: https://law.di.unimi.it/webdata/sk-2005/
* UK2: https://law.di.unimi.it/webdata/uk-2002/
* AR: https://law.di.unimi.it/webdata/arabic-2005/
* WB: https://law.di.unimi.it/webdata/webbase-2001/
* Synthetic Graphs (R-MAT/TrillionG): https://github.com/chan150/TrillionG (SIGMOD'17)

## Experiments on PowerGraph
- We do experiments on the PowerGraph which is a distributed graph computing system.
- PowerGraph is a graph computating system published at the OSDI conference in 2012. Due to its inclusion of various traditional graph algorithms and support for distributed computing, it continues to serve as a baseline comparison for many papers today, or is used to validate the effectiveness of certain algorithms through PowerGraph.
- However, because PowerGraph has not been maintained for a long time, it is currently impossible to compile directly from the source code on GitHub, primarily due to broken URLs of third-party libraries. Recently, as our paper utilized the PG computation framework, we encountered many challenges. We are documenting this experience to assist others who may need to use PG for testing in the future.
  - **Updated PowerGraph GitHub link**: [GitHub - BearBiscuit05/PowerGraph_update](https://link.zhihu.com/?target=https%3A//github.com/BearBiscuit05/PowerGraph_update)
  - **Original PowerGraph GitHub link**: [https://github.com/jegonzal/PowerGraph](https://link.zhihu.com/?target=https%3A//github.com/jegonzal/PowerGraph)

## Citation

```
@article{S5P,
  author = {Ding, Zezhong and Xiang, Yongan and Wang, Shangyou and Xie, Xike and Zhou, S. Kevin},
  title = {Play like a Vertex: A Stackelberg Game Approach for Streaming Graph Partitioning},
  year = {2024},
  issue_date = {June 2024},
  publisher = {Association for Computing Machinery},
  address = {New York, NY, USA},
  volume = {2},
  number = {3},
  url = {https://doi.org/10.1145/3654965},
  doi = {10.1145/3654965},
  journal = {Proc. ACM Manag. Data},
  month = {may},
  articleno = {162},
  numpages = {27},
  keywords = {distributed systems, graph partitioning, streaming partitioning}
}
```

