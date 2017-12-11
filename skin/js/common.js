$(function(){
scrolling("n_con","n1p","n2p");
$(".s_txt").each(function(){  
var txt = $(this).val();  
$(this).focus(function(){  
if(txt === $(this).val()) $(this).val("");  
}).blur(function(){  
if($(this).val() == "") $(this).val(txt);  
});  
})
})

function scrolling(a,b,c){
var speedp=30;
var tabp=document.getElementById(a);
var tab1p=document.getElementById(b);
var tab2p=document.getElementById(c);
tab2p.innerHTML=tab1p.innerHTML;
function Marqueep(){
if(tab2p.offsetWidth-tabp.scrollLeft<=0)
tabp.scrollLeft-=tab1p.offsetWidth
else{
tabp.scrollLeft++;
}
}
var MyMarp=setInterval(Marqueep,speedp);
tabp.onmouseover=function() {clearInterval(MyMarp)};
tabp.onmouseout=function() {MyMarp=setInterval(Marqueep,speedp)};
}



