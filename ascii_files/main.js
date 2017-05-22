"use strict";

var TAAG = TAAG || {};
TAAG.fonts = {};
TAAG.fonts.figlet = [];
TAAG.fonts.figlet[0] = new Figlet();
TAAG.fonts.aol = [];
TAAG.fonts.aol[0] = new AolFont();
TAAG.currentFont = null;
TAAG.testingAll = false;
TAAG.lastAjax = {};
TAAG.opts = {};
TAAG.opts.progComment = "";
TAAG.opts.whiteSpace = "";

var AOLFONTS = {};

TAAG.imageGenerationSupported = (function (){
  //var elem = document.createElement('canvas');
  //return !!(elem.getContext && elem.getContext('2d') && elem.toDataURL);
  return false;
})();
if (TAAG.imageGenerationSupported) {
    document.getElementById("divBtnGenImage").style.display = "block";
}

TAAG.displayClass = function(className, fontName) {
    if (className !== 'fig') {
        return className;
    }
    //console.log('fontname='+fontName);

    var ansiFonts = {};
    ansiFonts['3D-ASCII'] = true;
    ansiFonts['Bloody'] = true;
    ansiFonts['Calvin S'] = true;
    ansiFonts['Delta Corps Priest 1'] = true;
    ansiFonts['Electronic'] = true;
    ansiFonts['Elite'] = true;
    ansiFonts['KOLO-TDF'] = true;
    ansiFonts['ANSI Shadow'] = true;
    ansiFonts['Stronger Than All'] = true;
    ansiFonts['THIS'] = true;
    ansiFonts['The Edge'] = true;

    return ansiFonts[fontName] ? 'fig-ansi' : 'fig';
}

TAAG.updateWhiteSpace = function() {
    var elm = document.getElementById("taagWhiteSpaceOverride");
    if (elm) {TAAG.opts.whiteSpace = elm.value;}
};
TAAG.updateProgComment = function() {
    var elm = document.getElementById("taagProgComment");
    if (elm) {TAAG.opts.progComment = elm.value;}
};

TAAG.setHash = function(page) {
    var txtBox = document.getElementById("inputText");
    var fontList = document.getElementById("fontList");
    var params = [], paramsStr;
    
    var hBox = document.getElementById("taagCharWidth");
    var hBoxValue = hBox.options[hBox.selectedIndex].value;
    var vBox = document.getElementById("taagCharHeight");
    var vBoxValue = vBox.options[vBox.selectedIndex].value;
    
    if (hBoxValue !== "default") {
        params.push("h=" + hBox.selectedIndex);
    }
    if (vBoxValue !== "default") {
        params.push("v=" + vBox.selectedIndex);
    }
    if (TAAG.opts.progComment !== "") {
        params.push("c=" + encodeURIComponent(TAAG.opts.progComment));
    }
    if (TAAG.opts.whiteSpace !== "") {
        params.push("w=" + encodeURIComponent(TAAG.opts.whiteSpace));
    }
    params.push("f="+encodeURIComponent(fontList.options[fontList.selectedIndex].text));
    params.push("t="+ encodeURIComponent(txtBox.value));
    
    paramsStr = params.join("&");
    
    if (page === "display") {
        window.location.hash = "#p=display&" + paramsStr;
    } else if (page === "author") {
        window.location.hash = "#p=author&" + paramsStr;
    } else if (page === "about") {
        window.location.hash = "#p=about&" + paramsStr;
    } else if (page === "whatsnew") {
        window.location.hash = "#p=whatsnew&" + paramsStr;
    } else if (page === "moreopts") {
        window.location.hash = "#p=moreopts&" + paramsStr;
    } else if (page === "testall") {
        window.location.hash = "#p=testall&" + paramsStr;
    }
};

TAAG.loadHash = function(hash) {
    if (hash.length <= 1) {hash = "#nope=nope";}
    
    var elms = hash.substr(1).split("&");
    var ii, params = {}, param, len;
    var fontList = document.getElementById("fontList");
    len = elms.length;
    for (ii = 0; ii < len; ii++) {
        param = elms[ii].split("=");
        if (param.length === 2) {
            params[param[0]] = decodeURIComponent(param[1]);
        }
    }
    
    if (params["h"]) {
        var num = parseInt(params["h"], 10);
        var hBox = document.getElementById("taagCharWidth");
        if (num >= 0 && num < hBox.options.length) {
            hBox.selectedIndex = num;
        }
    }
    if (params["v"]) {
        var num = parseInt(params["v"], 10);
        var vBox = document.getElementById("taagCharHeight");
        if (num >= 0 && num < vBox.options.length) {
            vBox.selectedIndex = num;
        }
    }
    if (params["c"]) {
        TAAG.opts.progComment = params["c"];
    }
    if (params["w"]) {
        TAAG.opts.whiteSpace = params["w"].substr(0,1);
    }
    
    if (params["f"]) {
        len = fontList.options.length;
        for (ii = 0; ii < len; ii++) {
            if (fontList.options[ii].text === params["f"]) {
                fontList.selectedIndex = ii;
                break;
            }
        }
    }
    
    if (params["t"]) {
        var txtBox = document.getElementById("inputText");
        txtBox.value = params["t"];
    }
    
    var page = params["p"];
    if (page) {
        if (page === "display") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.updateDisplay();
                var txtBox = document.getElementById("inputText");
                txtBox.focus();
                var tmp = txtBox.value;
                txtBox.value = "";
                txtBox.value = tmp;
            });
        } else if (page === "author") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.displayAuthorInfo();   
            });
        } else if (page === "about") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.displayAbout();   
            });
        } else if (page === "whatsnew") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.displayWhatsNew();   
            });
        } else if (page === "moreopts") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.displayMoreOptions();   
            });
        } else if (page === "testall") {
            TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
                TAAG.displayTestAll();   
            });
        }
    } else {
        var fontList = document.getElementById("fontList");
        TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
            TAAG.updateDisplay();   
            var txtBox = document.getElementById("inputText");
            txtBox.focus();
            var tmp = txtBox.value;
            txtBox.value = "";
            txtBox.value = tmp;
        });
    }
};

TAAG.updateFont = function(newFont, callback, secondAttempt) {
    var fontUrl = "./fonts/"+newFont;
    var isFiglet = (fontUrl.substr(fontUrl.length-3,3)!=="aol") ? true : false;
    if (isFiglet) {
        TAAG.lastAjax = $.ajax({
            url: fontUrl,
            success: function(res) {
                TAAG.fonts.figlet[0].load(res);
                TAAG.currentFont = TAAG.fonts.figlet[0];
                
                var charWidth = document.getElementById("taagCharWidth");
                TAAG.currentFont.loadHorizontalOpts(charWidth.options[charWidth.selectedIndex].value);
                var charHeight = document.getElementById("taagCharHeight");
                TAAG.currentFont.loadVerticalOpts(charHeight.options[charHeight.selectedIndex].value);
                
                TAAG.setHash("display");
                if (callback) {callback();}
            }
        });
    } else {
        if (typeof AOLFONTS[newFont] !== "undefined") {
            TAAG.fonts.aol[0].load(AOLFONTS[newFont]);
            TAAG.currentFont = TAAG.fonts.aol[0];
            TAAG.updateDisplay();
            TAAG.setHash("display");
            if (callback) {callback();}
        } else {
            if (!AOLFONTS.isLoaded && secondAttempt !== true) {
                var aolScript = document.createElement("script");
                aolScript.src = "./js/macros.min2.js";
                aolScript.onload = function() {
                    TAAG.updateFont(newFont, callback, true);
                };
                aolScript.onreadystatechange = function () {
                    if (this.readyState === 'complete' || this.readyState === 'loaded' ) {
                        TAAG.updateFont(newFont, callback, true);
                    }
                };
                var head= document.getElementsByTagName('head')[0];
                head.appendChild(aolScript);
            } else {
                console.log("Error: Something went wrong");
            }
        }
    }
};

TAAG.footerButtonsHidden = false;
TAAG.changePage = function(newPage) {
    TAAG.currentPage = newPage;
    if (TAAG.lastAjax) {
        if (typeof TAAG.lastAjax.abort !== "undefined") {
            TAAG.lastAjax.abort();
        }
    }
    if (newPage === "testall") {
        TAAG.footerButtonsHidden = true;
        $("#footer-text-specific").fadeOut("slow");
    } else if (newPage === "testallstop") {
        // do nothing
    } else {
        if (TAAG.footerButtonsHidden===true) {
            TAAG.footerButtonsHidden = false;
            $("#footer-text-specific").fadeIn("slow");
        }
    }
};

TAAG.fontReady = function() {
    if (TAAG.currentFont !== null) {
        return true;
    }
    return false;  
};

TAAG.getText = function(txt, txtId, font, fontName) {
    font = font || TAAG.currentFont;
    var txt = font.getText(txt);
    txt = txt.replace(/</g, "&lt;").replace(/>/g, "&gt;");
    
    if (TAAG.opts.whiteSpace) {
        if (TAAG.opts.whiteSpace !== " " && font.getFontType() === "fig") {
            txt = txt.replace(/ /g, TAAG.opts.whiteSpace);
        }
    }
    
    var progCommentOpt = TAAG.opts.progComment;
    if (progCommentOpt) {
        if (progCommentOpt === "c") {
            txt = "/***\n *    " + txt.split("\n").join("\n *    ") + "\n */";
        } else if (progCommentOpt === "lua") {
            txt = "--[[\n" + txt.split("\n").join("\n") + "\n--]]";
        } else if (progCommentOpt === "c++") {
            txt = "//  " + txt.split("\n").join("\n//  ");
        } else if (progCommentOpt === "echo") {
            txt = "echo \"" + txt.replace(/"/g,'\\"').replace(/`/g,'\\`').split("\n").join("\";\necho \"") + '";';
        } else if (progCommentOpt === "bash") {
            txt = "#  " + txt.split("\n").join("\n#  ");
        } else if (progCommentOpt === "vb") {
            txt = "'  " + txt.split("\n").join("\n'  ");
        } else if (progCommentOpt === "mysql") {
            txt = "--  " + txt.split("\n").join("\n--  ");
        }
    }
    
    fontName = fontName || fontList.options[fontList.selectedIndex].value.split('.')[0];

    var idStr = (typeof txtId !== "undefined") ? "id='"+txtId+"'" : "id='taag_output_text'";
    return "<pre " + idStr + " style='float:left;' class='"+TAAG.displayClass(font.getFontType(),fontName)+"' contenteditable='true'>" + txt + "</pre><div style=\"clear:both\"></div>";
};

TAAG.useFont = function(fontName) {
    var ii,
        fontList = document.getElementById("fontList"),
        len = fontList.length,
        listedName,
        index = -1;
    for (ii = 0; ii < len; ii++) {
        listedName = fontList.options[ii].text;
        if (listedName === fontName) {
            index = ii;
            break;
        }
    }
    if (index === -1) {return;}
    fontList.selectedIndex = index;
    TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
        TAAG.updateDisplay();
    });
};

TAAG.updateDisplay = function() {
    var inputTxt = document.getElementById("inputText");
    var output = document.getElementById("outputFigDisplay");
    var txtBox = document.getElementById("inputText");
    var fontList = document.getElementById("fontList");
    document.getElementById("outputFigDisplay").className = TAAG.displayClass(TAAG.currentFont.getFontType(), fontList.options[fontList.selectedIndex].value.split('.')[0]);

//console.log( document.getElementById("outputFigDisplay").className  );

    output.innerHTML = TAAG.getText(inputTxt.value);
    TAAG.changePage("display");
};

TAAG.displayAuthorInfo = function() {
    if (!TAAG.fontReady()) {return;}
    var comment = TAAG.currentFont.getComment().replace("<","&lt;").replace(">","&gt;").replace(/\bhttp:[^ \)\n\<,]+/g, "<a href='$&' target='_new'>$&</a>");
    var output = document.getElementById("outputFigDisplay");
    output.className = "fig";
    output.innerHTML = "<pre>" + comment + "</pre>\n\n\n\n";
    var fontList = document.getElementById("fontList");
    TAAG.setHash("author");
    TAAG.changePage("author");
};

TAAG.displayAbout = function() {
    if (TAAG.currentPage === "about") {return;}
    TAAG.changePage("about");
    TAAG.lastAjax = $.ajax({
        url: "pages/about.dat",
        success: function(res) {
            if (TAAG.currentPage !== "about") {return;}
            var ret = res.replace("\r\n","\n").replace("\r","\n");
            var output = document.getElementById("outputFigDisplay");
            output.className = "";
            output.innerHTML = "" + ret + "\n\n\n\n";
            TAAG.setHash("about");
        }
    });
};

TAAG.displayWhatsNew = function() {
    if (TAAG.currentPage === "whatsnew") {return;}
    TAAG.changePage("whatsnew");
    TAAG.lastAjax = $.ajax({
        url: "pages/whatsnew.dat",//?" + Math.floor(Math.random()*1000000),
        success: function(res) {
            if (TAAG.currentPage !== "whatsnew") {return;}
            var ret = res.replace("\r\n","\n").replace("\r","\n");
            var output = document.getElementById("outputFigDisplay");
            output.className = "";
            output.innerHTML = "" + ret + "\n\n\n\n";
            TAAG.setHash("whatsnew");
        }
    });
};

TAAG.displayGeneratedImage = function() {
    var textDisplay = $("#taag_output_text");
    if (!textDisplay) {return;}
    if (!TAAG.imageGenerationSupported) {return;}
    
    var imageBorder = document.createElement("div");
    $(imageBorder).css({"borderWidth": "1px", "borderStyle": "solid", "borderColor": "black", "float":"left"});
    var myCanvas = document.createElement("canvas");
    var myContext = myCanvas.getContext("2d");
    var txt = textDisplay.text();
    txt = txt.replace(/\r\n/g,"\n").replace(/\r/g,"\n");
    var lines = txt.split("\n");
    var ii, len = lines.length;
    var lineHeight;
    var cWidth = 0, padding=5,messuarement;
    
    var tmp = document.createElement("div");
    tmp.style.cssText = "font-family: "+textDisplay.css("font-family")+"; font-size: " + textDisplay.css("font-size") + "; display: block;white-space:pre;";
    tmp.style.position = "absolute";
    tmp.innerText = "|";
    document.body.appendChild(tmp);
    lineHeight = parseInt($(tmp).css("height"),10);
    document.body.removeChild(tmp);
    
    myContext.font = "normal " + textDisplay.css("font-size") + " " + textDisplay.css("font-family");
    
    for (ii = 0; ii < len; ii++) {
        messuarement = myContext.measureText(lines[ii]);
        //console.log(messuarement.width);
        cWidth = Math.max(cWidth, messuarement.width + (padding*2));
    }
    var cHeight = lineHeight * len + 0;
    myCanvas.width = cWidth;
    myCanvas.height = cHeight;
    myContext.font = "normal 10pt monospace"; // setting a canvas' width and height clears properties
    
    for (ii = 0; ii < len; ii++) {
        myContext.fillText(lines[ii], padding, padding+(ii*lineHeight));
    }
    
	var oSaveCanvas = document.createElement("canvas");
	oSaveCanvas.width = cWidth;
	oSaveCanvas.height = cHeight;
	oSaveCanvas.style.width = cWidth+"px";
	oSaveCanvas.style.height = cHeight+"px";
	var oSaveCtx = oSaveCanvas.getContext("2d");
	oSaveCtx.drawImage(myCanvas, 0, 0, cWidth, cHeight, 0, 0, cWidth, cHeight);
    
    var myDataUri = oSaveCanvas.toDataURL().replace("image/png","image/octet-stream");
    
    var img = document.createElement("img");
    img.src = myDataUri;
    img.download = "ascii-art-text.png";
    
    var downloadLink = document.createElement("a");
    downloadLink.appendChild(document.createTextNode("clicking this link"));
    downloadLink.download = "ascii-art-text.png";
    downloadLink.href = myDataUri;
    
    var display = $("#outputFigDisplay");
    display.empty();
    
    display.append(document.createTextNode("You can download the image below by right clicking it as selecting 'Save Image As' (be sure to save it as a *.png file)"));
    if (!$.browser.msie) {
        display.append(document.createTextNode(", or by "));
        display.append(downloadLink);
    }
    display.append(document.createTextNode("."));
    display.append("<p/>");
    imageBorder.appendChild(img);
    display.append(imageBorder);
    var endElm = document.createElement("div");
    endElm.style.clear = "both";
    display.append(endElm);
    

};

TAAG.displayMoreOptions = function() {
    if (TAAG.currentPage === "moreopts") {return;}
    TAAG.changePage("moreopts");
    TAAG.lastAjax = $.ajax({
        url: "pages/moreopts.dat?2013.11.11",//?" + Math.floor(Math.random()*1000000),
        success: function(res) {
            if (TAAG.currentPage !== "moreopts") {return;}
            var ret = res.replace("\r\n","\n").replace("\r","\n");
            var output = document.getElementById("outputFigDisplay");
            output.className = "";
            output.innerHTML = "" + ret + "\n\n\n\n";
            
            var elm = document.getElementById("taagProgComment");
            var ii, len;
            if (elm) {
                $(elm).unbind( "change", TAAG.updateProgComment);
                $(elm).unbind( "keyup", TAAG.updateProgComment);
                
                len = elm.options.length;
                for (ii = 0; ii < len; ii++) {
                    if (elm.options[ii].value === TAAG.opts.progComment) {
                        elm.selectedIndex = ii;
                        break;   
                    }
                }

                $(elm).bind( "change", TAAG.updateProgComment);
                $(elm).bind( "keyup", TAAG.updateProgComment);
            }

            var elm = document.getElementById("taagWhiteSpaceOverride");
            if (elm) {
                $(elm).unbind( "change", TAAG.updateWhiteSpace);
                
                elm.value = TAAG.opts.whiteSpace;
                
                $(elm).bind( "change", TAAG.updateWhiteSpace);
            }
            
            TAAG.setHash("moreopts");
        }
    });
};

TAAG.testAll = {};
TAAG.testAll.banner = 
"  *   )           )                   (    (  (   \n"+
"` )  /(  (     ( /((        (  (      )\\   )\\ )\\  \n"+
" ( )(_))))\\(   )\\())\\  (    )\\))(  ((((_)(((_)(_) \n"+
"(_(_())/((_)\\ (_))((_) )\\ )((_))\\   )\\ _ )\\)_()_) \n"+
"|_   _(_))((_)| |_ (_)_(_/( (()(_)  (_)_\\(_) || | \n"+
"  | | / -_|_-<|  _|| | ' \\)) _` |    / _ \\ | || | \n"+
"  |_| \\___/__/ \\__||_|_||_|\\__, |   /_/ \\_\\|_||_| \n"+
"                           |___/                  ";
TAAG.displayTestAll = function() {
    if (TAAG.currentPage === "testall") {return;}
    var fontList = document.getElementById("fontList");
    var fList = [], afList = [], ii,val,len=fontList.options.length;
    var output = document.getElementById("outputFigDisplay");
    var testAllHtml = "<div id='taagTestAll' style=\"width:100%;\"><pre style=\"text-align:center;\" class=\"fig\">" + TAAG.testAll.banner + "</pre>";
    testAllHtml += "<div style=\"text-align:center;\" id='taagTestAllListLoaded'>Loaded: 0 of " + len + "</div><p/><div id='taagTestAllCancelDiv' style=\"text-align:center;\"><button id='taagTestAllCancel' onclick='javascript:TAAG.testAllCancel()'>Cancel</button></div><p/><div style=\"text-align:center;\">Sort order: Popular FIGlet fonts, Regular FIGlet fonts, AOL fonts</div><p/>";
    testAllHtml += "<p/><br/>";
    testAllHtml += "</div>";
    output.className = "";
    output.innerHTML = testAllHtml;
    TAAG.testAllDiv = document.getElementById("taagTestAll");
    // create font list
    
    
    for (ii=0; ii<len;ii++) {
        val = fontList.options[ii].value;
        if (val.substr(val.length-3,3)==="aol") {
            afList.push(val);   
        } else {
            fList.push(val);
        }
    }
    Array.prototype.push.apply(fList, afList);
    TAAG.testAll.numFonts = fList.length;
    var txtBox = document.getElementById("inputText");
    TAAG.setHash("testall");
    
    TAAG.changePage("testall");
    // TODO for test all:
    // - fade out the non-useful buttons on the bottom toolbar (have a page change function to handle this)
    TAAG.testAllDisplayer(fList, txtBox.value);
};

TAAG.testAllCancel = function() {
      TAAG.changePage("testallstop");
};

TAAG.testAll.numFonts = 0;
TAAG.testAll.figlet = new Figlet();
TAAG.testAll.aolFont = new AolFont();
TAAG.testAll.font = TAAG.testAll.figlet;
TAAG.testAllDiv;
TAAG.testAllDisplayer = function(fList, txt) {

    if (fList.length === 0) {
        // we're done
        
        var dividerDiv = document.createElement("div");
        dividerDiv.style.borderTop = "dashed 1px black";
        TAAG.testAllDiv.appendChild(dividerDiv);
        
        var footerBlurb = document.createElement("div");
        footerBlurb.style.paddingBottom = "40px";
        footerBlurb.innerHTML = "<div style='width:700px;padding-top:20px;margin:0 auto;'><div style='text-align:center;padding-bottom:20px;'><p>If you're interested in creating your own font, see my <a href='http://patorjk.com/figlet-editor/'>FIGlet Editor</a></p><p>-</p>This app can now be installed into Google Chrome!</div><div style='padding-right:40px;float:left;'><a href='https://chrome.google.com/webstore/detail/fgnnnhgifkejnkjbmigmenlfnjkngelg'><img src='images/chrome-promotion.png' border='0'></a></div><ul><li><a href='https://chrome.google.com/webstore/detail/fgnnnhgifkejnkjbmigmenlfnjkngelg'>Click here</a> to visit the app's page in Chrome's App Store (app is <strong>free</strong>).</li><li>Hopefully the other browsers follow suite, though the app should still work offline in certain browsers like FireFox and IE10.</li></ul></div><div style='clear:both;'></div>";
        TAAG.testAllDiv.appendChild(footerBlurb);
        
        var elm = document.getElementById("taagTestAllCancel");
        if (elm) {
            elm.disabled  = "disabled";   
        }
        return;
    }
    if (TAAG.currentPage !== "testall") {return;}
    var fontItem = fList.splice(0,1)[0];
    var fontName = fontItem.split(".")[0];
    var fontUrl = "./fonts/"+fontItem;

    var isFiglet = (fontUrl.substr(fontUrl.length-3,3)!=="aol") ? true : false;
    TAAG.lastAjax = $.ajax({
        url: fontUrl,
        success: function(res) {
            try {
                if (TAAG.currentPage !== "testall") {return;}
                if (isFiglet) {
                    TAAG.testAll.figlet.load(res);
                    
                    var charWidth = document.getElementById("taagCharWidth");
                    TAAG.testAll.figlet.loadHorizontalOpts(charWidth.options[charWidth.selectedIndex].value);
                    var charHeight = document.getElementById("taagCharHeight");
                    TAAG.testAll.figlet.loadVerticalOpts(charHeight.options[charHeight.selectedIndex].value);
                        
                    TAAG.testAll.font = TAAG.testAll.figlet;
                } else {
                    var data = AOLFONTS[fontItem];
                    TAAG.testAll.aolFont.load(data);
                    TAAG.testAll.font = TAAG.testAll.aolFont;
                }
                var elm = document.createElement("div");
                var fontId = "taag_font_"+fontName.replace(/[^a-zA-Z0-9]/g, "");
                elm.className = TAAG.displayClass(TAAG.testAll.font.getFontType(), fontName);
                elm.innerHTML = TAAG.getText(txt, fontId, TAAG.testAll.font, fontName );
                var dividerDiv = document.createElement("div");
                dividerDiv.style.borderTop = "dashed 1px black";
                
                var infoBar = document.createElement("div");
                var divFontName = document.createElement("div");
                divFontName.appendChild(document.createTextNode( "Font Name: " + fontName ));
                divFontName.style.marginBottom = "4px";
                var btnUseFont = document.createElement("button");
                btnUseFont.appendChild( document.createTextNode("Use Font"));
                
                $(btnUseFont).click((function() {
                    var savedFontName = fontName;
                    return function() {
                        TAAG.useFont(savedFontName);  
                    };
                })());
                
                var btnSelectAll = document.createElement("button");
                btnSelectAll.appendChild(document.createTextNode("Select & Copy"));
                
                $(btnSelectAll).click((function() {
                    var savedFontId = fontId;
                    return function() {
                        var elm = document.getElementById(savedFontId);
                        
                        if (document.selection) {
                            var range = document.body.createTextRange();
                                range.moveToElementText(elm);
                            range.select();
                        } else if (window.getSelection) {
                            /*var range = document.createRange();
                            elm.focus();
                            range.selectNode(elm);
                            window.getSelection().addRange(range);*/

                            elm.contentEditable = false;
                            elm.focus();
                            var mySelection = window.getSelection();
                            if(mySelection.rangeCount > 0) {mySelection.removeAllRanges();}
                            var range = document.createRange();
                            range.selectNode(elm.parentNode);
                            mySelection.addRange(range);
                            elm.contentEditable = true;
                            
                        }

                        try {
                            document.execCommand('copy');
                        } catch (err) {
                            alert('Unable to copy text, you will need to press Ctrl+C on your keyboard to copy.');
                        }
                    };
                })());
                infoBar.appendChild(divFontName);
                infoBar.appendChild(btnUseFont);
                infoBar.appendChild(btnSelectAll);
                
                TAAG.testAllDiv.appendChild(dividerDiv);
                TAAG.testAllDiv.appendChild(elm);
                TAAG.testAllDiv.appendChild( infoBar );
                TAAG.testAllDiv.appendChild( document.createElement("p") );
                
                var loadedDiv = document.getElementById("taagTestAllListLoaded");
                loadedDiv.innerHTML = "Loaded: " + (TAAG.testAll.numFonts-fList.length) + " of " + TAAG.testAll.numFonts;
            } catch (err) {
                
            }
            setTimeout(function() {
                TAAG.testAllDisplayer(fList, txt);
            }, 20);
        }
    });
};

(function() {
    
    // load up page from hash
    
    TAAG.loadHash(window.location.hash);
    
    // Event Listeners
    
    $("#inputText").bind("keyup", function(evt) {
        evt = evt || window.event;
        if (TAAG.fontReady()) { // don't run unless there is a font loaded
            TAAG.updateDisplay();
        }
    });
    $("#inputText").bind("blur", function(evt) {
        TAAG.setHash("display");
    });
    
    $("#maincontent").bind("resize", function() {
        var contentSize = document.getElementById("maincontent").getBoundingClientRect();
        var elm = document.getElementById("outputFigDisplay");
        if (isFinite(contentSize.width) && isFinite(contentSize.height)) {
            elm.style.width = contentSize.width + "px";
            elm.style.height = contentSize.height + "px";
        }
    }, false);
    
    var updateTextAlignment = function() {
        var elm = document.getElementById("outputFigDisplay");
        if ( document.getElementById("tAlignmentLeft").checked === true) {
            elm.style.textAlign = "left";
        } else if (document.getElementById("tAlignmentRight").checked === true) {
            elm.style.textAlign = "right";
        } else if (document.getElementById("tAlignmentCenter").checked === true) {
            elm.style.textAlign = "center";
        }
    };
    
    var updateFontFromDropDown = function() {
        var fontList = document.getElementById("fontList");
        TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
            TAAG.updateDisplay();   
        });
    };
    
    $("#fontList").bind("keyup", function(){
    	if (navigator.userAgent.indexOf("Firefox")!==-1){updateFontFromDropDown();}
    });
    $("#fontList").bind("change", updateFontFromDropDown);

    $(window).bind("hashchange", function(evt) {
        // add to browser history (future feature)
    });

    $("#btnAuthor").click(TAAG.displayAuthorInfo);
    $("#btnMoreOptions").click(TAAG.displayMoreOptions);
    $("#btnAbout").click(TAAG.displayAbout);
    $("#btnTestAll").click(TAAG.displayTestAll);
    $("#btnSelectAll").click( function(evt) {
        var elm = document.getElementById("taag_output_text");
        if (elm) {
            if (document.selection) {
                var range = document.body.createTextRange();
                    range.moveToElementText(elm);
                range.select();
            } else if (window.getSelection) {
                elm.contentEditable = false;
                elm.focus();
                var mySelection = window.getSelection();
                if(mySelection.rangeCount > 0) {mySelection.removeAllRanges();}
                var range = document.createRange();
                range.selectNode(elm.parentNode);
                mySelection.addRange(range);
                elm.contentEditable = true;
            }

            try {
                document.execCommand('copy');
            } catch (err) {
                alert('Unable to copy text, you will need to press Ctrl+C on your keyboard to copy.');
            }
        }
    });

    var updateCharFromDropDown = function() {
        var fontList = document.getElementById("fontList");
        TAAG.updateFont(fontList.options[fontList.selectedIndex].value, function() {
            TAAG.updateDisplay();   
        });
    };
    
    $("#taagCharWidth").bind("keyup", function(){
    	if (navigator.userAgent.indexOf("Firefox")!==-1){updateCharFromDropDown();}
    });
    $("#taagCharWidth").bind( "change", updateCharFromDropDown);

    $("#taagCharHeight").bind( "keyup", function(){
    	if (navigator.userAgent.indexOf("Firefox")!==-1){updateCharFromDropDown();}
    });
    $("#taagCharHeight").bind( "change", updateCharFromDropDown);

    $("#btnShare").click( function() {
        TAAG.shareBox.show();
    });

    $("#divBtnGenImage").click(TAAG.displayGeneratedImage);

    $("#footer-buttons").fadeIn("slow");
})();