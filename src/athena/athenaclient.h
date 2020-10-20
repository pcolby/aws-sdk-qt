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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ATHENACLIENT_H
#define QTAWS_ATHENACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Athena {

class AthenaClientPrivate;
class BatchGetNamedQueryRequest;
class BatchGetNamedQueryResponse;
class BatchGetQueryExecutionRequest;
class BatchGetQueryExecutionResponse;
class CreateNamedQueryRequest;
class CreateNamedQueryResponse;
class CreateWorkGroupRequest;
class CreateWorkGroupResponse;
class DeleteNamedQueryRequest;
class DeleteNamedQueryResponse;
class DeleteWorkGroupRequest;
class DeleteWorkGroupResponse;
class GetNamedQueryRequest;
class GetNamedQueryResponse;
class GetQueryExecutionRequest;
class GetQueryExecutionResponse;
class GetQueryResultsRequest;
class GetQueryResultsResponse;
class GetWorkGroupRequest;
class GetWorkGroupResponse;
class ListNamedQueriesRequest;
class ListNamedQueriesResponse;
class ListQueryExecutionsRequest;
class ListQueryExecutionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkGroupsRequest;
class ListWorkGroupsResponse;
class StartQueryExecutionRequest;
class StartQueryExecutionResponse;
class StopQueryExecutionRequest;
class StopQueryExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateWorkGroupRequest;
class UpdateWorkGroupResponse;

class QTAWS_EXPORT AthenaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AthenaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AthenaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetNamedQueryResponse * batchGetNamedQuery(const BatchGetNamedQueryRequest &request);
    BatchGetQueryExecutionResponse * batchGetQueryExecution(const BatchGetQueryExecutionRequest &request);
    CreateNamedQueryResponse * createNamedQuery(const CreateNamedQueryRequest &request);
    CreateWorkGroupResponse * createWorkGroup(const CreateWorkGroupRequest &request);
    DeleteNamedQueryResponse * deleteNamedQuery(const DeleteNamedQueryRequest &request);
    DeleteWorkGroupResponse * deleteWorkGroup(const DeleteWorkGroupRequest &request);
    GetNamedQueryResponse * getNamedQuery(const GetNamedQueryRequest &request);
    GetQueryExecutionResponse * getQueryExecution(const GetQueryExecutionRequest &request);
    GetQueryResultsResponse * getQueryResults(const GetQueryResultsRequest &request);
    GetWorkGroupResponse * getWorkGroup(const GetWorkGroupRequest &request);
    ListNamedQueriesResponse * listNamedQueries(const ListNamedQueriesRequest &request);
    ListQueryExecutionsResponse * listQueryExecutions(const ListQueryExecutionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkGroupsResponse * listWorkGroups(const ListWorkGroupsRequest &request);
    StartQueryExecutionResponse * startQueryExecution(const StartQueryExecutionRequest &request);
    StopQueryExecutionResponse * stopQueryExecution(const StopQueryExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateWorkGroupResponse * updateWorkGroup(const UpdateWorkGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AthenaClient)
    Q_DISABLE_COPY(AthenaClient)

};

} // namespace Athena
} // namespace QtAws

#endif
