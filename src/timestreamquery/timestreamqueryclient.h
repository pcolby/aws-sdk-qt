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

#ifndef QTAWS_TIMESTREAMQUERYCLIENT_H
#define QTAWS_TIMESTREAMQUERYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstimestreamqueryglobal.h"

class QNetworkReply;

namespace QtAws {
namespace TimestreamQuery {

class TimestreamQueryClientPrivate;
class CancelQueryRequest;
class CancelQueryResponse;
class CreateScheduledQueryRequest;
class CreateScheduledQueryResponse;
class DeleteScheduledQueryRequest;
class DeleteScheduledQueryResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class DescribeScheduledQueryRequest;
class DescribeScheduledQueryResponse;
class ExecuteScheduledQueryRequest;
class ExecuteScheduledQueryResponse;
class ListScheduledQueriesRequest;
class ListScheduledQueriesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PrepareQueryRequest;
class PrepareQueryResponse;
class QueryRequest;
class QueryResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateScheduledQueryRequest;
class UpdateScheduledQueryResponse;

class QTAWSTIMESTREAMQUERY_EXPORT TimestreamQueryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TimestreamQueryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TimestreamQueryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelQueryResponse * cancelQuery(const CancelQueryRequest &request);
    CreateScheduledQueryResponse * createScheduledQuery(const CreateScheduledQueryRequest &request);
    DeleteScheduledQueryResponse * deleteScheduledQuery(const DeleteScheduledQueryRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeScheduledQueryResponse * describeScheduledQuery(const DescribeScheduledQueryRequest &request);
    ExecuteScheduledQueryResponse * executeScheduledQuery(const ExecuteScheduledQueryRequest &request);
    ListScheduledQueriesResponse * listScheduledQueries(const ListScheduledQueriesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PrepareQueryResponse * prepareQuery(const PrepareQueryRequest &request);
    QueryResponse * query(const QueryRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateScheduledQueryResponse * updateScheduledQuery(const UpdateScheduledQueryRequest &request);

private:
    Q_DECLARE_PRIVATE(TimestreamQueryClient)
    Q_DISABLE_COPY(TimestreamQueryClient)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
