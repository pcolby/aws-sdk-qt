// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsCreateQueueRequest : public QObject {
    Q_OBJECT

private:
    void numeric_data();

private slots:
    void construct_queueName_data();
    void construct_queueName();

    void construct_copy_data();
    void construct_copy();

    void construct_default();

    void isValid_data();
    void isValid();

    void attribute_data();
    void attribute();

    void attributes_data();
    void attributes();

    void delaySeconds_data();
    void delaySeconds();

    void maximumMessageSize_data();
    void maximumMessageSize();

    void messageRetentionPeriod_data();
    void messageRetentionPeriod();

    void policy_data();
    void policy();

    void queueName_data();
    void queueName();

    void receiveMessageWaitTimeSeconds_data();
    void receiveMessageWaitTimeSeconds();

    void visibilityTimeout_data();
    void visibilityTimeout();

    void response();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif
};
