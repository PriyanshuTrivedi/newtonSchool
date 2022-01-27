function getNoofDays(month)
{
    month=month.toLowerCase();
    if(month==='january')
    return 31;
    else if(month==='february')
    return 28;
    else if(month==='march')
    return 31;
    else if(month==='april')
    return 30;
    else if(month==='may')
    return 31;
    else if(month==='june')
    return 30;
    else if(month==='july')
    return 31;
    else if(month==='august')
    return 31;
    else if(month==='september')
    return 30;
    else if(month==='october')
    return 31;
    else if(month==='november')
    return 30;
    else if(month==='december')
    return 31;
    else
    return "enter a valid month"
}
var month = window.prompt("Enter month:");
console.log(getNoofDays(month));