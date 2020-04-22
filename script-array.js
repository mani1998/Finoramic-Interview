var packages=require('./packages.json')
const { execSync } = require("child_process");

packages=packages.dependencies;
var failed=[];


for(let i=0;i<packages.length;++i){
try{
    execSync("pip install "+packages[i]+"",{stdio: 'ignore'});
}
catch(e){   
    failed.push(packages[i]);
   }
}
if(failed.length==0){
    console.log("success");
}
else{
console.log(failed.length+" packages failed to install");
failed.map((package)=>{
    console.log(package);
})
}
