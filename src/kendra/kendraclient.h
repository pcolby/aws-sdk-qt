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

#ifndef QTAWS_KENDRACLIENT_H
#define QTAWS_KENDRACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskendraglobal.h"

class QNetworkReply;

namespace QtAws {
namespace kendra {

class kendraClientPrivate;
class BatchDeleteDocumentRequest;
class BatchDeleteDocumentResponse;
class BatchGetDocumentStatusRequest;
class BatchGetDocumentStatusResponse;
class BatchPutDocumentRequest;
class BatchPutDocumentResponse;
class ClearQuerySuggestionsRequest;
class ClearQuerySuggestionsResponse;
class CreateDataSourceRequest;
class CreateDataSourceResponse;
class CreateFaqRequest;
class CreateFaqResponse;
class CreateIndexRequest;
class CreateIndexResponse;
class CreateQuerySuggestionsBlockListRequest;
class CreateQuerySuggestionsBlockListResponse;
class CreateThesaurusRequest;
class CreateThesaurusResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteFaqRequest;
class DeleteFaqResponse;
class DeleteIndexRequest;
class DeleteIndexResponse;
class DeleteQuerySuggestionsBlockListRequest;
class DeleteQuerySuggestionsBlockListResponse;
class DeleteThesaurusRequest;
class DeleteThesaurusResponse;
class DescribeDataSourceRequest;
class DescribeDataSourceResponse;
class DescribeFaqRequest;
class DescribeFaqResponse;
class DescribeIndexRequest;
class DescribeIndexResponse;
class DescribeQuerySuggestionsBlockListRequest;
class DescribeQuerySuggestionsBlockListResponse;
class DescribeQuerySuggestionsConfigRequest;
class DescribeQuerySuggestionsConfigResponse;
class DescribeThesaurusRequest;
class DescribeThesaurusResponse;
class GetQuerySuggestionsRequest;
class GetQuerySuggestionsResponse;
class ListDataSourceSyncJobsRequest;
class ListDataSourceSyncJobsResponse;
class ListDataSourcesRequest;
class ListDataSourcesResponse;
class ListFaqsRequest;
class ListFaqsResponse;
class ListIndicesRequest;
class ListIndicesResponse;
class ListQuerySuggestionsBlockListsRequest;
class ListQuerySuggestionsBlockListsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListThesauriRequest;
class ListThesauriResponse;
class QueryRequest;
class QueryResponse;
class StartDataSourceSyncJobRequest;
class StartDataSourceSyncJobResponse;
class StopDataSourceSyncJobRequest;
class StopDataSourceSyncJobResponse;
class SubmitFeedbackRequest;
class SubmitFeedbackResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateIndexRequest;
class UpdateIndexResponse;
class UpdateQuerySuggestionsBlockListRequest;
class UpdateQuerySuggestionsBlockListResponse;
class UpdateQuerySuggestionsConfigRequest;
class UpdateQuerySuggestionsConfigResponse;
class UpdateThesaurusRequest;
class UpdateThesaurusResponse;

class QTAWSKENDRA_EXPORT kendraClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    kendraClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    kendraClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteDocumentResponse * batchDeleteDocument(const BatchDeleteDocumentRequest &request);
    BatchGetDocumentStatusResponse * batchGetDocumentStatus(const BatchGetDocumentStatusRequest &request);
    BatchPutDocumentResponse * batchPutDocument(const BatchPutDocumentRequest &request);
    ClearQuerySuggestionsResponse * clearQuerySuggestions(const ClearQuerySuggestionsRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateFaqResponse * createFaq(const CreateFaqRequest &request);
    CreateIndexResponse * createIndex(const CreateIndexRequest &request);
    CreateQuerySuggestionsBlockListResponse * createQuerySuggestionsBlockList(const CreateQuerySuggestionsBlockListRequest &request);
    CreateThesaurusResponse * createThesaurus(const CreateThesaurusRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteFaqResponse * deleteFaq(const DeleteFaqRequest &request);
    DeleteIndexResponse * deleteIndex(const DeleteIndexRequest &request);
    DeleteQuerySuggestionsBlockListResponse * deleteQuerySuggestionsBlockList(const DeleteQuerySuggestionsBlockListRequest &request);
    DeleteThesaurusResponse * deleteThesaurus(const DeleteThesaurusRequest &request);
    DescribeDataSourceResponse * describeDataSource(const DescribeDataSourceRequest &request);
    DescribeFaqResponse * describeFaq(const DescribeFaqRequest &request);
    DescribeIndexResponse * describeIndex(const DescribeIndexRequest &request);
    DescribeQuerySuggestionsBlockListResponse * describeQuerySuggestionsBlockList(const DescribeQuerySuggestionsBlockListRequest &request);
    DescribeQuerySuggestionsConfigResponse * describeQuerySuggestionsConfig(const DescribeQuerySuggestionsConfigRequest &request);
    DescribeThesaurusResponse * describeThesaurus(const DescribeThesaurusRequest &request);
    GetQuerySuggestionsResponse * getQuerySuggestions(const GetQuerySuggestionsRequest &request);
    ListDataSourceSyncJobsResponse * listDataSourceSyncJobs(const ListDataSourceSyncJobsRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListFaqsResponse * listFaqs(const ListFaqsRequest &request);
    ListIndicesResponse * listIndices(const ListIndicesRequest &request);
    ListQuerySuggestionsBlockListsResponse * listQuerySuggestionsBlockLists(const ListQuerySuggestionsBlockListsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListThesauriResponse * listThesauri(const ListThesauriRequest &request);
    QueryResponse * query(const QueryRequest &request);
    StartDataSourceSyncJobResponse * startDataSourceSyncJob(const StartDataSourceSyncJobRequest &request);
    StopDataSourceSyncJobResponse * stopDataSourceSyncJob(const StopDataSourceSyncJobRequest &request);
    SubmitFeedbackResponse * submitFeedback(const SubmitFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateIndexResponse * updateIndex(const UpdateIndexRequest &request);
    UpdateQuerySuggestionsBlockListResponse * updateQuerySuggestionsBlockList(const UpdateQuerySuggestionsBlockListRequest &request);
    UpdateQuerySuggestionsConfigResponse * updateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest &request);
    UpdateThesaurusResponse * updateThesaurus(const UpdateThesaurusRequest &request);

protected:
    /// @cond internal
    kendraClientPrivate * const d_ptr; ///< Internal d-pointer.
    kendraClient(kendraClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(kendraClient)
    Q_DISABLE_COPY(kendraClient)

};

} // namespace kendra
} // namespace QtAws

#endif
