<h6>Finoramic-Interview<h6>

<h3>python package installation script</h3>
<p>These scripts are written in node.js</p>
<p>All the required packages which are specified in package.json will be installed by running these scripts</p>
<p>This module contains three files</p>
<ol>
  <li>script-object.js</li>
  <li>script-array.js</li>
  <li>package.json</li>
</ol>
<h4>script-object</h4>
<p>when the packages are in object format,this file can be used to install the dependencies</p>
<h4>script-array</h4>
<p>when the packages are in array format,this file can be used to install the dependencies</p>

<p>execution of the script takes place synchronously,node.js child_process.execSync() is used to excute the command line operations from the script</p>
