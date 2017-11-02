"use strict";

var TAAG = TAAG || {};
TAAG.shareBox = (function() {
    var me = {},
        shareBoxContainer = document.createElement("div"),
        screenPad = document.createElement("div"),
        dialog = document.createElement("div"),
        container = document.createElement("div"),
        titleBar = document.createElement("div"),
        formContainer = document.createElement("div"),
        isShown = false,
        rootUrl = "http://patorjk.com/software/taag/",
        facebookLoaded = false;
    
    shareBoxContainer.style.display = "none";
    shareBoxContainer.className = "taag-sb";
    screenPad.className = "taag-sb-screenpad";
    
    titleBar.className = "taag-sb-titlebar";
    titleBar.appendChild( document.createTextNode("Share Links") );
    
    formContainer.className = "taag-sb-dialog-form";
    
    // fill up the form
    var label1 = document.createElement("label");
    label1.className = "taag-sb-labels";
    label1.htmlFor = "taag-sharebox1";
    label1.appendChild(document.createTextNode("This Page:"));
    var shareBox1 = document.createElement("input");
    shareBox1.id = "taag-sharebox1";
    shareBox1.type = "text";
    shareBox1.className = "taag-sb-textbox";
    var label2 = document.createElement("label");
    label2.className = "taag-sb-labels";
    label2.htmlFor = "taag-sharebox2";
    label2.appendChild(document.createTextNode("The App:"));
    var shareBox2 = document.createElement("input");
    shareBox2.id = "taag-sharebox2";
    shareBox2.type = "text";
    shareBox2.className = "taag-sb-textbox";        
    
    var shareContainer = document.createElement("div");
    shareContainer.className = "taag-sb-share";
    var shareTable = document.createElement("table");
    shareTable.className = "taag-sb-share-table";
    var tBody = document.createElement("tbody");
    var tr = document.createElement("tr");
    var td1 = document.createElement("td");
    td1.width = "130";
    td1.style.textAlign = "right";
    var td2 = document.createElement("td");
    td2.width = "130";
    td2.style.textAlign = "right";
    var td3 = document.createElement("td");
    td3.width = "130";
    td3.style.textAlign = "center";
    var facebookWidget = document.createElement("div");
    var twitterWidget = document.createElement("div");
    twitterWidget.innerHTML = "<a href=\"https://twitter.com/share\" class=\"twitter-share-button\" data-url=\"http://patorjk.com/software/taag/\" data-via=\"patorjk\">Tweet</a>";
    var googleWidget = document.createElement("div");
    googleWidget.innerHTML = "<div class=\"g-plusone\" data-size=\"small\" data-href=\"http://patorjk.com/software/taag/\"></div>";
    
    td1.appendChild(facebookWidget);
    td2.appendChild(twitterWidget);
    td3.appendChild(googleWidget);
    
    tr.appendChild(td1);
    tr.appendChild(td2);
    tr.appendChild(td3);
    tBody.appendChild(tr);
    shareTable.appendChild(tBody);
    shareContainer.appendChild(shareTable);
    
    var btnContainer = document.createElement("div");
    btnContainer.className = "taag-sb-btn-container";
    
    var btnClose = document.createElement("button");
    btnClose.className = "taag-sb-btn";
    btnClose.appendChild(document.createTextNode("Close"));
    
    btnContainer.appendChild(btnClose);
    
    formContainer.appendChild(label1);
    formContainer.appendChild(shareBox1);
    formContainer.appendChild(document.createElement("br"));
    formContainer.appendChild(label2);
    formContainer.appendChild(shareBox2);
    formContainer.appendChild(document.createElement("br"));
    formContainer.appendChild(shareContainer);
    formContainer.appendChild(btnContainer);
    
    dialog.className = "taag-sb-dialog";
    
    dialog.appendChild(titleBar);
    dialog.appendChild(formContainer);
    
    
    shareBoxContainer.appendChild(screenPad);
    shareBoxContainer.appendChild(dialog);
    document.body.appendChild(shareBoxContainer);
    // -------------------------------------------------------------------------
    // Methods
    
    me.show = function() {
        isShown = true;
        
        shareBox1.value = rootUrl + window.location.hash;
        shareBox2.value = rootUrl;
        
        if (facebookLoaded === false) {
            facebookWidget.innerHTML = "<iframe src=\"//www.facebook.com/plugins/like.php?href=http%3A%2F%2Fpatorjk.com%2Fsoftware%2Ftaag%2F&amp;send=false&amp;layout=button_count&amp;width=100&amp;show_faces=false&amp;action=like&amp;colorscheme=light&amp;font&amp;height=21&amp;appId=142730955792936\" scrolling=\"no\" frameborder=\"0\" style=\"border:none; overflow:hidden; width:100px; height:21px;\" allowTransparency=\"true\"></iframe>";   
        }
        
        me.resize();
        
        shareBoxContainer.style.display = "block";
    };
    
    me.hide = function() {
        shareBoxContainer.style.display = "none";
        isShown = false;
    };
    
    me.resize = function() {
        dialog.style.top = Math.round(($(window).height() / 2) - (160 / 2)) + "px";
        dialog.style.left = Math.round(($(window).width() / 2) - (450 / 2)) + "px";
        screenPad.style.width = $(document).width() + "px";
        screenPad.style.height = $(document).height() + "px";
        shareBoxContainer.style.width = $(document).width() + "px";
        shareBoxContainer.style.height = $(document).height() + "px";
    };
    
    // -------------------------------------------------------------------------
    // Events
    
    $(btnClose).click(function(evt) {
        me.hide();
    });
    
    $(dialog).click(function(evt) {
        return false;
    });
    
    $(screenPad).click(function(evt) {
        me.hide();
    });
    
    $(shareBox1).click(function(evt) {
        shareBox1.select();
    });

    $(shareBox2).click(function(evt) {
        shareBox2.select();
    });
    
    $(window).resize(function(evt) {
        if (isShown) {
            me.resize();   
        }
    });
    
    return me;
})();