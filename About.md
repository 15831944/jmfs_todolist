# ToDoList 8.0 - An Effective and Flexible Way to Keep on Top of Your Tasks

![](https://www.codeproject.com/Uploads/Membership/ProfileImages/%7B75e6ede4-a425-4a01-bdc0-0ff0fd8db926%7D.png)

[.dan.g.](https://www.codeproject.com/script/Membership/View.aspx?mid=17355)

Rate me:

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-fill-lg.png)

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-fill-lg.png)

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-fill-lg.png)

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-fill-lg.png)

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-fill-lg.png)

![](https://codeproject.freetls.fastly.net/script/Ratings/Images/star-empty-lg.png)

4.85/5 (2,389 votes)

27 Sep 2020[Eclipse](http://www.opensource.org/licenses/eclipse-1.0.php "The Eclipse Public License 1.0")12 min read

A hierarchical task manager with native XML support for custom reporting

## Downloads

----------

-   [Latest Executable + Plugins (8.0)](https://www.codeproject.com/KB/applications/todolist2/todolist_exe.zip)  - 4.4 MB (Includes all associated plugins and resources)
-   [Application Source (8.0)](https://www.codeproject.com/KB/applications/todolist2/todolist_src.zip)  - 3.4 MB (Includes all plugins - compiles under VC6, VS2005/2008/2010, VS2013, VS2015)

## 3rd  Party

_**Note**: Please contact the respective authors directly with comments and questions_

-   [Tdl Todo List](https://play.google.com/store/apps/details?id=hg.hgTdlList&hl=en) - for Android
-   [Writing ToDoList Stylesheets](http://www.codeproject.com/Articles/898616/ToDoLists-StyleSheets-a-tutorial) - Article

![todolist2/CP_screenshot2.png](https://www.codeproject.com/KB/applications/todolist2/CP_screenshot2.png)

## Latest Update (8.0 Feature Release)

-   New - 'Report Writer' exporter
-   New - 'Graphs' Task View (previously 'Burndown')
-   New - 'HTML comments' offering better table editing and image handling
-   New - 'Workload' Task View
-   New - 'Week Planner' 1 and 3 Day views
-   New - 'Fraction' custom attribute
-   New - 'Cost Rate' custom attribute (prefix values with '@')
-   New - 'Working Hours' preferences ('Tasks > Time Periods')
-   New - 'Korean' (Hangul) translation
-   New - 'Command-line options' for editing task attributes

-   Added 'Activate Task View' to 'View' menu to support keyboard shortcuts
-   Added 'Group By' to 'Analyse Logged Time'
-   Added 'Auto-Complete' to attribute droplists
-   Added 'Date-Range' slider to 'Gantt View' to control visible date range
-   Added 'Colour Schemes' to 'Fonts and Colours' preferences
-   Added 'Named Filters' to 'View' menu to support keyboard shortcuts
-   Added 'Heat Maps' to 'Calendar View' preferences
-   Added 'Workload' and 'Gantt' view example tasklists
-   Added 'User Variables' and 'Custom Attributes' to 'User Defined Tools' preferences 'Placeholder' menu
-   Added 'Snooze All' button to 'Reminder' dialog
-   Added 'Selected Task Path' placeholder to 'UDT Preferences' page
-   Added 'Negative number' support to 'Custom Attributes'
-   Added 'Comments' to 'Infotips'

-   And of course many more minor improvements and fixes too numerous to mention...

## Introduction

You know how it is - you start work on one project and halfway through, you find one or two side-projects crop up that have to be solved before you can continue on the original project.

This is one such project with the added twist that it too started its life as a side-project. Here's what happened:

_<Cue wavy screen effect>_

I can only imagine that the planets must have been in (mis-)alignment or something, because at one point a few months ago, I was suddenly fielding emails on four or five separate articles I had previously submitted to CodeProject, some asking for features and others for bug fixes.

Foolishly or otherwise, I largely agreed with all the points raised, and subsequently found myself with fourteen or fifteen separate issues to resolve.

The situation was also made worse because I was trying to use CodeProject to keep track of all the things I had agreed to do, meaning that I had to continuously trawl the comments section of each article to remind myself of what I was supposed to be working on.

It even got to the stage where I was worrying that I'd fail to deliver on something - silly I know, but there you are!

Keeping a list on paper was a definite step in the right direction, but since I do all my coding on the same machine, it seemed somewhat inelegant, and anyway, we all know what happens to crucial bits of paper left lying around on desks and such.

The next step was to hunt around on the web for a tool to meet the following requirements:

-   Simple interface
-   Support for hierarchical data
-   Numbered items/subitems
-   Open file format
-   Freeware

Simple, huh!  **not**!

I will admit that I did not spend weeks searching, but I am still surprised at the general lack of software matching my needs.

On reflection, I think that the reason may be simple: people are so used to commercial software being 'feature-rich' that when they come to design software themselves, they (not unreasonably) think they too need to cram as much in as possible, often leading to software where a lot of essential functionality is hidden away in the menu bar.

So, surprise, surprise, I decided to write something myself.

However, it's fair to say that I did not originally intend to post it on CodeProject and am only really doing so because I had a heap of fun solving some very interesting problems and these are what I think make it worth it.

## Using the Software

There's really very little I need to say here since every feature/function is explicitly visible in the interface.

Nevertheless, the following list of basic capabilities and omissions may go someway to answering any questions that arise:

-   Files are stored in XML format with  _.xml_  file extension.
-   Trying to load a non-tasklist file will generally fail (unless you read the code to see how to circumvent it).
-   The number of items/subitems is limited only by memory (although performance may be the deciding factor before you exhaust memory).
-   Marking a parent item as 'done' will also gray-out child items, but they are not disabled or automatically marked as 'done'.
-   An ellipsis (...) indicates that an item has sub-items.
-   All items can be expanded or collapsed (by double-clicking).
-   Top-level items and sub-items are created using different toolbar buttons.
-   There are task-specific context-menus.
-   The previously open tasklists are re-opened on startup.
-   The tasklist is automatically saved when closing the software or minimizing it to the system tray.
-   The priority of a task is shown as a grayscale box to the left of the item.

## Points of Interest

Here's where we come to the side-projects I was talking about, the first two of which I intend to work up into follow-up articles.

They are:

1.  **The 'ordered' tree control, which incorporates a non-client gutter for displaying the item numbers**.
    
    The idea stemmed from research I did into alternative designs for a tree-list control, which did not solve it by creating a hybrid control incorporating a tree and a list.
    
    The hybrid control seems such an obvious solution that I suspect few people have stopped to question it, but it has still always struck me as looking far too much like hard work to be truly elegant ('square pegs' and 'round holes' spring to mind).
    
    One possible idea is to implement the 'list' portion entirely in the non-client area of the tree. I.e., shift the right hand client edge to the left and then render the list portion in the resulting non-client area.
    
    Whilst I've yet to get round to building a proof of concept, it was nevertheless this ongoing mental debate which prompted me to try to solve the requirement for numbered items and subitems by rendering the item/subitem numbers in the non-client area.
    
    Without going into too much detail (as this will subsequently be an article of its own), this is how I got it to work:
    
    -   Handle  `TVM_INSERTITEM`  and  `TVM_DELETEITEM`  to know exactly when items are added and removed.
    -   In these handlers recalculate the width of the gutter required to display the widest 'dotted' item/subitem number. (Note: this is not necessarily simply the deepest subitem.)
    -   If the required gutter width changes, call  `SetWindowPos(NULL, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER)`  to force Windows to recalculate the non-client area of the control.
    -   Handle  `WM_NCCALCSIZE`  when it does, and offset the left border by the required gutter width.
    -   Handle  `WM_NCPAINT`  for painting the numbers.
    
    This is necessarily an over-simplification, but it captures the essence of the solution, and all that essentially remains is lots of fiddling about to ensure the non-client area gets redrawn at the the right times to stay synchronized with the client area.
    
2.  **Embedding .RC control definition data directly in a .cpp file to break the dependency on binary resources (a.k.a. 'Runtime Dialogs')**.
    
    This is an idea that has been floating about for quite some time and which has only recently gelled into a workable solution.
    
    The problem, put simply, is that if you want to take advantage of the resource editor in Visual Studio (and who doesn't), then you very quickly find yourself stuck with having to load dialog templates from resources compiled into the binary file.
    
    This further means that if you want to make use of a dialog across multiple projects, then either you need to copy and paste the dialog template between project  _.RC_  files, or you need to build the dialog into a DLL from which it can be accessed.
    
    'Runtime Dialogs' (a snappy title I coined myself) is a solution that neatly sidesteps both the nuisance of copying dialog resources between resource files and the extra work (and maintenance) involved in packaging dialogs in DLLs.
    
    And it works like this:
    
    -   First, you design your dialog template in the resource editor, create a  `CDialog`  derived class using class wizard, and wire up all the controls just as you normally would.
    -   Next, you  `#include "runtimedlg.h"`  and change all instances of  `CDialog`  to  `CRuntimeDlg`.
    -   Then, you cut and paste the control definition section from the appropriate section in the  _.RC_  file and embed it directly in the dialog's  _.cpp_  file as a static string (with a bit of tweaking to handle double quotes and such like).
    -   Finally, in the constructor of your dialog, you simply call  `CRuntimeDlg::AddRCControls(...)`  passing the control definitions as a string.
    -   And  `CRuntimeDlg`  takes care of the rest including, if required, auto-sizing the dialog to suit the control layout.
    
    I'm certainly not suggesting that this is a 'win-win' solution for all situations but it certainly has merits in its closer coupling of dialog template to dialog code which makes sharing dialogs across multiple projects a breeze.
    
    P.S.: In case it's not clear here, I used  `CRuntimeDlg`  to create  `CToDoCtrl`  which encapsulates the ordered tree together with the priority, date and comments controls as a single simple-to-instantiate control.
    
    I'm also proposing to use them in the .NET port of my  ProjectZip add-in for VC6.
    
3.  **Embedding the XML file in a  [web page](http://www.abstractspoon.com/)**.
    
    This is possibly the most satisfying aspect of the whole project because it was completely unexpected.
    
    What I mean is that, until recently, my knowledge of DOM and XMLDOM was virtually non-existent, as it's only since I've become more interested in the presentation of  [**Abstract_Spoon_**](http://www.abstractspoon.com/)  that I've been forced to get to grips with the various implementations of DOM and XMLDOM out there.
    
    I'm pleased to say that the code on my site works under IE 6.0, Netscape 7.1, and Mozilla, although custom code was required to achieve this.
    

## Generic MFC Classes that may prove Useful to You

The following table lists a wide range of utility classes written for this project. They can all be included in any MFC project provided you include any class dependencies too. Feel free to ask any questions relating to these specific classes and how to use them.

**Class Name**

**Description**

**Class Dependencies**  
(apart from MFC)

`CAboutDlg`

Customizable "Aboutâ€¦' dialog not requiring a dialog resource. Supports html encoded text

`CRuntimeDlg, CRCCtrlParser`

`CAutoComboBox`

Adds only unique items to the drop list and shuffles the list so that the last added item is at the top

`CHoldRedraw`

`CAutoFlag`

Encapsulates the setting and unsetting of a boolean variable thru the lifetime of the class instance

`CColorButton`

Non-ownerdraw button that displays the selected colour on the button face and displays the colour dialog when clicked

`CEnColorDialog`

`CColorComboBox`

Owner-draw combobox for displaying and selecting user defined colours

`CDateHelp``er`

Encapsulation of various rountines for calculating date spans and for formatting

`CDeferWndMove`

Encapsulation of the Win32 API

`CDialogHelper`

Re-implementation of the  `CDialog`  DDX/DDV rountines to avoid the MFC error messages when the user clears a number edit (for instance)

`CDlgUnits`

Encapsulates the  `MapDialogRect` Win32 API

`CDockManager`

Class for managing the docking of one popup window to another.

*`CSubclassWnd, CHoldRedraw, CAutoFlag`

`CDriveInfo`

Encapsulates various rountines for querying about drives, files and disk space

`CEnBitmap`

Adds support to  `CBitmap` for loading non-bmp files and resources.

`CEnBitmapEx, CColorReplacer, CImageBlurrer, CImageColorizer, CImageContraster, CImageEmbosser, CImageFlipper, CImageGrayer, CImageLightener, CImageNegator, CImageResizer, CImageRotator, CImageSharpener, CImageShearer, CImageSysColorMapper, CImageTinter`

Adds image manipulation funationality to  `CEnBitmap`

`CEnBitmap`

`CEnColorDialog`

Adds saving and restoring of custom colours to  `CColorDialog`

`CEnCommandLineInfo`

Adds functions for extracting and querying commandline switches

`CEnEdit`

Adds user-defined button capabilities to  `CEdit`

`CMaskEdit, CThemed, CDlgUnits`

`CEnToolBar`

Adds support for using alternative resource or file images

`CFileEdit`

Adds buttons for browsing and displaying the file represented by the text in the edit control. Also shows the file's small icon.

`CEnEdit, CFolderDialog, CMaskEdit, CDlgUnits, CThemed, CSysImageList`

`CHoldRedraw`

Encapsulates  `WM_SETREDRAW`

`CHotKeyCtrlEx`

Fixes a number of behavioural problems including the handling of certain keypresses

`CHotTracker`

Tracks the cursor movement over user-defined windows and posts event messages as necessary

*`CSubclassWnd,`

`CLimitSingleInstance`

Provides simple method to detect if another instance of an app is running

`CMaskEdit`

Adds simple character masking to  `CEdit`

`CNcGutter`

Allows the UI of standard windows controls to be extended by supporting any number of columns to be added to the non-client area of the window. Favours tabular controls like lists, trees, etc

*`CSubclassWnd, CHoldRedraw, CThemed, CDlgUnits`

`COrderedTreeCtrl`

`CTreeCtrl` implementation of  `CNcGutter` displaying a single column showing the hierarchical position of each tree item in '1.2.3.4' notation.

`CHoldRedraw, CThemed`

`CPasswordDialog`

Very simple password dialog not requiring a dialog resource

`CRuntimeDlg, CRCCtrlParser`

`CPropertyPageHost`

Simpler replacement for  `CPropertySheet` allowing easier creation as a child window

`CRCCtrlParser`

Used by  `CRuntimeDlg` for parsing dialog resource-like text

`CRuntimeDlg`

Adds support to  `CDialog` for building dialogs at runtime ie. dialogs do not require a dialog resource

`CRCCtrlParser`

`CShortcutManager`

Class for handling application keyboard shortcuts.

*`CSubclassWnd, CWinClasses`

`CSpellCheckDlg`

Spellcheck dialog not requiring a dialog resource, which interfaces with  `ISpellCheck` (interface to Open Office dictionaries)

`CRuntimeDlg, CRCCtrlParser, ISpellCheck`

`CSysImageList`

Encapsulates the Windows system image list (file/folder images)

`CTabCtrlEx`

Adds post rendering callback for the tabs without using owner-draw

`CThemed`

Encapsulates themed (XP) and non-themed (the rest) drawing of windows controls

`CTimeEdit`

Adds a button for specifying time units and provided routines for converting time to and from different time units

`CEnEdit, CMaskEdit, CThemed, CDlgUnits`

`CToolbarHelper`

Adds support for dialog toolbar tooltips, multiline tooltips and dropbuttons with menus

*`CSubclassWnd, CEnBitmap, CEnBitmapEx`

`CTrayIcon`

Encapsulates the  `Shell_NotifyIcon` Win32 API. Also provides balloon tips and animation

*`CSubclassWnd`,

`CUrlRichEditCtrl`

Adds support for recognizing urls, clicking them and setting custom url callbacks

`CWinClasses`

Encapsulates the ::`GetClassName` Win32 functions

`CXmlFile, CXmlItem`

Non-Unicode class for reading and writing xml files

`CXmlFileEx`

Adds encryption capabilities to  `CXmlFile`

`CXmlFile, IEncryption`

*****  CSubclassWnd was originally written by Paul DiLascia for MSJ magazine. The version I use has been heavily extended to suit my specific needs. The classes that depend on it here need this extended version.

## Further Work

Whilst this tool was originally intended for my personal use only, it is now a 'community' project, so if you find it useful and want to make suggestions for enhancements or bug fixes, please post to our  [Google Group](https://groups.google.com/forum/#!categories/abstractspoon-todolist-support).

## History

-   **History now held at**  **our  [Google Group](https://groups.google.com/forum/#!searchin/abstractspoon-todolist-support/Info$3A$20ToDoList$20is$20available$20for$20download%7Csort:date)**
-   **1.1-7.1**  (_removed by .dan.g._)
-   **1.0**  (4 Nov 2003)

## License

This article, along with any associated source code and files, is licensed under  [The Eclipse Public License 1.0](http://www.opensource.org/licenses/eclipse-1.0.php)
