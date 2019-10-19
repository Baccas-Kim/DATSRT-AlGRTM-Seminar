할일 : "DFShowGraphVertex(ALGraph * pg, int startV)" 함수 완성하기
Question1. 참거짓판단(TRUE or FALSE) - LFirst(&(pg->adjList[visitV]), &nextV) 리턴값으로 알맞은 것은?
Question2. 코드완성 
	- if(VisitVertex(pg, nextV) == /*/Q1 TRUE or FALSE/*/)//nextV의 방문에 성공한 경우
	- SPush(/*/Q2/*/); //visitV의 정보는 스텍에 PUSH 
Question3. 코드완성 

==============================================================
정답시 출력 

C between connected Vertex: B D
D between connected Vertex: A C E
E between connected Vertex: D F G
F between connected Vertex: E
G between connected Vertex: E
A B C D E F G
C B A D E F G
E D A B C F G
G E D A B C F

* a.exe 파일 실행


==============================================================
참고 - 터미널 명령어 
빌드 : $make all
정리 : $make clean
실행 : a.exe (a.exe파일 실행)

