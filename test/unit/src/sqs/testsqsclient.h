/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
