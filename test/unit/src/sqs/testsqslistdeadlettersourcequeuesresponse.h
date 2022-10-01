// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsListDeadLetterSourceQueuesResponse : public QObject {
    Q_OBJECT

private slots:
    void construct_data();
    void construct();

    void isValid_data();
    void isValid();

    void request();

    /// @todo

    void parseSuccess_data();
    void parseSuccess();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void parseListDeadLetterSourceQueuesResponse_data();
    void parseListDeadLetterSourceQueuesResponse();

    /// @todo
    #endif
};
