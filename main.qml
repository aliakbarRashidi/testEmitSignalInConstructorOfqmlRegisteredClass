import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2

import My.Company.Core 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Test Emiting Signal in Constructor of QObject Derived Class Registered in qml")

    MyResource {
        onOpenResourceFailed: {
            msgDialog.title = "Open Resource Failed!"
            msgDialog.text = error
            msgDialog.open()
        }
    }

    MessageDialog {
        id: msgDialog
    }

    Rectangle {
        width: parent.width * 1 / 2
        height: parent.height * 1 / 2
        color: "red"
        anchors.centerIn: parent

        Text {
            text: "Test MessageDialog"
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                msgDialog.title = "Click Works"
                msgDialog.text = "There's no Error on Dialog"
                msgDialog.open()
            }
        }
    }
}
