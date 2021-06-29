/*
    Copyright 2013-2021 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DYNAMODBSTREAMSCLIENT_H
#define QTAWS_DYNAMODBSTREAMSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdynamodbstreamsglobal.h"

class QNetworkReply;

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

class QTAWSDYNAMODBSTREAMS_EXPORT DynamoDBStreamsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDBStreamsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
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

protected:
    /// @cond internal
    DynamoDBStreamsClientPrivate * const d_ptr; ///< Internal d-pointer.
    DynamoDBStreamsClient(DynamoDBStreamsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DynamoDBStreamsClient)
    Q_DISABLE_COPY(DynamoDBStreamsClient)

};

} // namespace DynamoDBStreams
} // namespace QtAws

#endif
