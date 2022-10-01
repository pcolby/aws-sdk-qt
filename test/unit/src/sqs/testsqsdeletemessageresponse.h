// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsDeleteMessageResponse : public QObject {
    Q_OBJECT

private slots:
    void construct();

    void request();

    void parseSuccess_data();
    void parseSuccess();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void parseDeleteMessageResponse_data();
    void parseDeleteMessageResponse();
    #endif
};
