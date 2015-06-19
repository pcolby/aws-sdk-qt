/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSCLIENT_H
#define SQSCLIENT_H

#include "core/awsabstractclient.h"

#include <QObject>
#include <QNetworkReply>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class SqsClientPrivate;
class SqsCreateQueueRequest;

class QTAWS_EXPORT SqsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SqsClient(const AwsRegion::Region region = AwsRegion::InvalidRegion,
              AwsAbstractCredentials * credentials = NULL,
              QObject * const parent = 0);

    SqsClient(const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
              QObject * const parent = 0);

    virtual ~SqsClient();

public slots:
    void createQueue(const QString &queueName, const QVariantMap &attributes = QVariantMap());

/*
    void addPermission(const QStringList &awsAccountIds, const QStringList actionNames, const QString &label, const QString &queueUrl);
    void changeMessageVisibility(const QString &queueUrl, const QString &receiptHandle, const int visbilityTimeout);
    void changeMessageVisibilityBatch(const QString &queueUrl, const QStringList &receiptHandles, const int visbilityTimeout);
    void createQueue(const QString &queueName, const QStringMap &attributes = QStringMap());
    void createQueue(const SqsCreateQueueRequest &request);
    void deleteMessage(const QString &queueUrl, const QString &receiptHandle);
    void deleteMessageBatch(const QString &queueUrl, const QStringList &receiptHandles);
    void deleteQueue(const QString &queueUrl);
    void getQueueUrl(const QString &queueName, const QString &queueOwnerAWSAccountId = QString());
    void listDeadLetterSourceQueues(const QString &queueUrl);
    void listQueues(const QString &queueNamePrefix = QString());
    void purgeQueue(const QString &queueUrl);
    void receiveMessage(const QString &queueName, ...);
    void receiveMessage(const SqsReceiveMessageRequest &request);
    void removePermission(const QString &lablel, const QString &queueUrl);
    void sendMessage(const QString &queueUrl, const QByteArray &message, ...);
    void sendMessage(const SqsSendMessageRequest &request);
    void sendMessageBatch(const QString &queueUrl, const QByteArrayList &messages, ...);
    void sendMessageBatch(const SqsSendMessageRequestList &requests);
    void setQueueAttributes(const QString &queueUrl, const QStringMap &attributes = QStringMap());
    void setQueueAttributes(const SqsSetQueueAttributesRequest &request);
*/

protected:
    virtual void onRequestFinished(AwsAbstractRequest * const request);

private:
    Q_DECLARE_PRIVATE(SqsClient)
    SqsClientPrivate * const d_ptr; ///< Internal d-pointer.

signals:
    void queueCreated(SqsCreateQueueRequest * request); /// @todo
};

QTAWS_END_NAMESPACE

#endif
