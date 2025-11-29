# physim
physics simulator lol


11/23
some c++ things I had to do to get started:
- had to go to tasks.json and change 
"command": "/usr/bin/clang" 
to 
"command": "/user/bin/clang++"

-the previous step reverted the changes when we re-opened vscode. For a permanent fix, we navigated to the .vscode folder using cd .vscode and manually changed the tasks.json using code tasks.json, replacing clang with clang++. 

^I ended up changing this and went off a github thread here: https://github.com/microsoft/vscode-cpptools/issues/9025#issuecomment-1777156301

-I gave up on trying to run stuff in integrated terminal. Now, I run things in the mac terminal. See the Overleaf Notes for details on commands to use in lldb

-I had a few problems with git. Make sure to use git add filename when new files are created, and use git commit -m "message" to commit the changes in the local repo. Use git push origin main to stuff the changes in the actual remote repo

^You have to use git add filename every time you want to stage its changes to the commit and thus repo. 

11/29 Just finished learning the basics of C++... Gonna start tackling this simulation thing. Plan:
-Create an ideal gas chamber with variable T, p, V
-Create a rigid body sphere that can move around discretized space
>Use simpson's integration, euler integration, RK4, and gaussian quadrature all in one
-Create a poisson solver that can solve the electric field at each time step
>Finite differencing, forward + backward
>Matrix solver libraries
