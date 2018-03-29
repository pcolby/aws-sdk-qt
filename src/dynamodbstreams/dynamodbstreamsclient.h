/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DYNAMODBSTREAMSCLIENT_H
#define QTAWS_DYNAMODBSTREAMSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace DynamoDBStreams {

class DynamoDBStreamsClientPrivate;
class DescribeStreamRequest;
class DescribeStreamResponse;
class GetRecordsRequest;
class GetRecordsResponse;
class GetShardIteratorRequest;
class GetShardIteratorResponse;
class ListStreamsRequest;
class ListStreamsResponse;

class QTAWS_EXPORT DynamoDBStreamsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDBStreamsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DynamoDBStreamsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    GetRecordsResponse * getRecords(const GetRecordsRequest &request);
    GetShardIteratorResponse * getShardIterator(const GetShardIteratorRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);

private:
    Q_DECLARE_PRIVATE(DynamoDBStreamsClient)
    Q_DISABLE_COPY(DynamoDBStreamsClient)

};

} // namespace DynamoDBStreams
} // namespace QtAws

#endif
