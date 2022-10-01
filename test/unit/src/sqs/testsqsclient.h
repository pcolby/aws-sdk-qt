// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>

class TestSqsClient : public QObject {
    Q_OBJECT

private slots:
    void construct_endpoint_data();
    void construct_endpoint();

    void construct_region_data();
    void construct_region();

    void addPermission_data();
    void addPermission();

    void changeMessageVisbility_data();
    void changeMessageVisbility();

    //void changeMessageVisbilityBatch_data();
    //void changeMessageVisbilityBatch();

    void createQueue_data();
    void createQueue();

    void deleteMessage_data();
    void deleteMessage();

    //void deleteMessageBatch_batch();
    //void deleteMessageBatch();

    void deleteQueue_data();
    void deleteQueue();

    void getQueueUrl_data();
    void getQueueUrl();

    void listDeadLetterSourceQueues_data();
    void listDeadLetterSourceQueues();

    void listQueues_data();
    void listQueues();

    void purgeQueue_data();
    void purgeQueue();

    //void receiveMessage_data();
    //void receiveMessage();

    void removePermission_data();
    void removePermission();

    //void sendMessage();
    //void sendMessage();

    //void sendMessageBatch();
    //void sendMessageBatch();

    //void setQueueAttributes();
    //void setQueueAttributes();

    // AwsAbstractResponsePrivate functions.
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    // Nothing to see here.
    #endif
};
