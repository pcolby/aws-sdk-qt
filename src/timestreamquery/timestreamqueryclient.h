// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
