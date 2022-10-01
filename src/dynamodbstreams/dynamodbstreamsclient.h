// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBSTREAMSCLIENT_H
#define QTAWS_DYNAMODBSTREAMSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdynamodbstreamsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DynamoDbStreams {

class DynamoDbStreamsClientPrivate;
class DescribeStreamRequest;
class DescribeStreamResponse;
class GetRecordsRequest;
class GetRecordsResponse;
class GetShardIteratorRequest;
class GetShardIteratorResponse;
class ListStreamsRequest;
class ListStreamsResponse;

class QTAWSDYNAMODBSTREAMS_EXPORT DynamoDbStreamsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDbStreamsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DynamoDbStreamsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    GetRecordsResponse * getRecords(const GetRecordsRequest &request);
    GetShardIteratorResponse * getShardIterator(const GetShardIteratorRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);

private:
    Q_DECLARE_PRIVATE(DynamoDbStreamsClient)
    Q_DISABLE_COPY(DynamoDbStreamsClient)

};

} // namespace DynamoDbStreams
} // namespace QtAws

#endif
