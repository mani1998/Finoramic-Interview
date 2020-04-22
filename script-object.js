var packages=require('./packages.json')
const { execSync } = require("child_process");
packages=packages["dependencies-obj"];
var keys=Object.keys(packages)
var failed=[];
for(let i=0;i<keys.length;++i){
try{
    execSync("pip install "+keys[i]+"=="+packages[keys[i]],{stdio: 'ignore'});
}
catch(e){   
    failed.push(keys[i]);
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
