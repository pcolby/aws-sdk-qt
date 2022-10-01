// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsCreateQueueResponse : public QObject {
    Q_OBJECT

private slots:
    void construct();

    void isValid_data();
    void isValid();

    void request();

    void queueUrl_data();
    void queueUrl();

    void parseSuccess_data();
    void parseSuccess();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void parseCreateQueueResponse_data();
    void parseCreateQueueResponse();

    void parseCreateQueueResult_data();
    void parseCreateQueueResult();
    #endif
};
