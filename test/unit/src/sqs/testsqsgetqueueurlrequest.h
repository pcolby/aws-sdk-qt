// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsGetQueueUrlRequest : public QObject {
    Q_OBJECT

private slots:
    void construct_params_data();
    void construct_params();

    void construct_copy_data();
    void construct_copy();

    void construct_default();

    void isValid_data();
    void isValid();

    void queueName_data();
    void queueName();

    void queueOwnerAWSAccountId_data();
    void queueOwnerAWSAccountId();

    void response();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif
};
