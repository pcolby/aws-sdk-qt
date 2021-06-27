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

#include "kendraclient.h"
#include "kendraclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeletedocumentrequest.h"
#include "batchdeletedocumentresponse.h"
#include "batchgetdocumentstatusrequest.h"
#include "batchgetdocumentstatusresponse.h"
#include "batchputdocumentrequest.h"
#include "batchputdocumentresponse.h"
#include "clearquerysuggestionsrequest.h"
#include "clearquerysuggestionsresponse.h"
#include "createdatasourcerequest.h"
#include "createdatasourceresponse.h"
#include "createfaqrequest.h"
#include "createfaqresponse.h"
#include "createindexrequest.h"
#include "createindexresponse.h"
#include "createquerysuggestionsblocklistrequest.h"
#include "createquerysuggestionsblocklistresponse.h"
#include "createthesaurusrequest.h"
#include "createthesaurusresponse.h"
#include "deletedatasourcerequest.h"
#include "deletedatasourceresponse.h"
#include "deletefaqrequest.h"
#include "deletefaqresponse.h"
#include "deleteindexrequest.h"
#include "deleteindexresponse.h"
#include "deletequerysuggestionsblocklistrequest.h"
#include "deletequerysuggestionsblocklistresponse.h"
#include "deletethesaurusrequest.h"
#include "deletethesaurusresponse.h"
#include "describedatasourcerequest.h"
#include "describedatasourceresponse.h"
#include "describefaqrequest.h"
#include "describefaqresponse.h"
#include "describeindexrequest.h"
#include "describeindexresponse.h"
#include "describequerysuggestionsblocklistrequest.h"
#include "describequerysuggestionsblocklistresponse.h"
#include "describequerysuggestionsconfigrequest.h"
#include "describequerysuggestionsconfigresponse.h"
#include "describethesaurusrequest.h"
#include "describethesaurusresponse.h"
#include "getquerysuggestionsrequest.h"
#include "getquerysuggestionsresponse.h"
#include "listdatasourcesyncjobsrequest.h"
#include "listdatasourcesyncjobsresponse.h"
#include "listdatasourcesrequest.h"
#include "listdatasourcesresponse.h"
#include "listfaqsrequest.h"
#include "listfaqsresponse.h"
#include "listindicesrequest.h"
#include "listindicesresponse.h"
#include "listquerysuggestionsblocklistsrequest.h"
#include "listquerysuggestionsblocklistsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listthesaurirequest.h"
#include "listthesauriresponse.h"
#include "queryrequest.h"
#include "queryresponse.h"
#include "startdatasourcesyncjobrequest.h"
#include "startdatasourcesyncjobresponse.h"
#include "stopdatasourcesyncjobrequest.h"
#include "stopdatasourcesyncjobresponse.h"
#include "submitfeedbackrequest.h"
#include "submitfeedbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatasourcerequest.h"
#include "updatedatasourceresponse.h"
#include "updateindexrequest.h"
#include "updateindexresponse.h"
#include "updatequerysuggestionsblocklistrequest.h"
#include "updatequerysuggestionsblocklistresponse.h"
#include "updatequerysuggestionsconfigrequest.h"
#include "updatequerysuggestionsconfigresponse.h"
#include "updatethesaurusrequest.h"
#include "updatethesaurusresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::kendra
 * \brief Contains classess for accessing AWSKendraFrontendService (kendra).
 *
 * \inmodule QtAwskendra
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::kendraClient
 * \brief The kendraClient class provides access to the AWSKendraFrontendService (kendra) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 */

/*!
 * \brief Constructs a kendraClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
kendraClient::kendraClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-02-03"),
    QStringLiteral("kendra"),
    QStringLiteral("AWSKendraFrontendService"),
    QStringLiteral("kendra"),
    parent), d_ptr(new kendraClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload kendraClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
kendraClient::kendraClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-02-03"),
    QStringLiteral("kendra"),
    QStringLiteral("AWSKendraFrontendService"),
    QStringLiteral("kendra"),
    parent), d_ptr(new kendraClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * BatchDeleteDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more documents from an index. The documents must have been added with the <code>BatchPutDocument</code>
 *
 * operation>
 *
 * The documents are deleted asynchronously. You can see the progress of the deletion by using AWS CloudWatch. Any error
 * messages related to the processing of the batch are sent to you CloudWatch
 */
BatchDeleteDocumentResponse * kendraClient::batchDeleteDocument(const BatchDeleteDocumentRequest &request)
{
    return qobject_cast<BatchDeleteDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * BatchGetDocumentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the indexing status for one or more documents submitted with the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchPutDocument.html"> BatchPutDocument</a>
 *
 * operation>
 *
 * When you use the <code>BatchPutDocument</code> operation, documents are indexed asynchronously. You can use the
 * <code>BatchGetDocumentStatus</code> operation to get the current status of a list of documents so that you can determine
 * if they have been successfully
 *
 * indexed>
 *
 * You can also use the <code>BatchGetDocumentStatus</code> operation to check the status of the <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/API_BatchDeleteDocument.html"> BatchDeleteDocument</a> operation.
 * When a document is deleted from the index, Amazon Kendra returns <code>NOT_FOUND</code> as the
 */
BatchGetDocumentStatusResponse * kendraClient::batchGetDocumentStatus(const BatchGetDocumentStatusRequest &request)
{
    return qobject_cast<BatchGetDocumentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * BatchPutDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more documents to an
 *
 * index>
 *
 * The <code>BatchPutDocument</code> operation enables you to ingest inline documents or a set of documents stored in an
 * Amazon S3 bucket. Use this operation to ingest your text and unstructured text into an index, add custom attributes to
 * the documents, and to attach an access control list to the documents added to the
 *
 * index>
 *
 * The documents are indexed asynchronously. You can see the progress of the batch using AWS CloudWatch. Any error messages
 * related to processing the batch are sent to your AWS CloudWatch
 */
BatchPutDocumentResponse * kendraClient::batchPutDocument(const BatchPutDocumentRequest &request)
{
    return qobject_cast<BatchPutDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ClearQuerySuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears existing query suggestions from an
 *
 * index>
 *
 * This deletes existing suggestions only, not the queries in the query log. After you clear suggestions, Amazon Kendra
 * learns new suggestions based on new queries added to the query log from the time you cleared suggestions. If you do not
 * see any new suggestions, then please allow Amazon Kendra to collect enough queries to learn new
 */
ClearQuerySuggestionsResponse * kendraClient::clearQuerySuggestions(const ClearQuerySuggestionsRequest &request)
{
    return qobject_cast<ClearQuerySuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * CreateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data source that you use to with an Amazon Kendra index.
 *
 * </p
 *
 * You specify a name, data source connector type and description for your data source. You also specify configuration
 * information such as document metadata (author, source URI, and so on) and user context
 *
 * information>
 *
 * <code>CreateDataSource</code> is a synchronous operation. The operation returns 200 if the data source was successfully
 * created. Otherwise, an exception is
 */
CreateDataSourceResponse * kendraClient::createDataSource(const CreateDataSourceRequest &request)
{
    return qobject_cast<CreateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * CreateFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an new set of frequently asked question (FAQ) questions and
 */
CreateFaqResponse * kendraClient::createFaq(const CreateFaqRequest &request)
{
    return qobject_cast<CreateFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * CreateIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Kendra index. Index creation is an asynchronous operation. To determine if index creation has
 * completed, check the <code>Status</code> field returned from a call to <code>DescribeIndex</code>. The
 * <code>Status</code> field is set to <code>ACTIVE</code> when the index is ready to
 *
 * use>
 *
 * Once the index is active you can index your documents using the <code>BatchPutDocument</code> operation or using one of
 * the supported data sources.
 */
CreateIndexResponse * kendraClient::createIndex(const CreateIndexRequest &request)
{
    return qobject_cast<CreateIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * CreateQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a block list to exlcude certain queries from
 *
 * suggestions>
 *
 * Any query that contains words or phrases specified in the block list is blocked or filtered out from being shown as a
 *
 * suggestion>
 *
 * You need to provide the file location of your block list text file in your S3 bucket. In your text file, enter each
 * block word or phrase on a separate
 *
 * line>
 *
 * For information on the current quota limits for block lists, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for Amazon
 */
CreateQuerySuggestionsBlockListResponse * kendraClient::createQuerySuggestionsBlockList(const CreateQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<CreateQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * CreateThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a thesaurus for an index. The thesaurus contains a list of synonyms in Solr
 */
CreateThesaurusResponse * kendraClient::createThesaurus(const CreateThesaurusRequest &request)
{
    return qobject_cast<CreateThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DeleteDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Kendra data source. An exception is not thrown if the data source is already being deleted. While the
 * data source is being deleted, the <code>Status</code> field returned by a call to the <code>DescribeDataSource</code>
 * operation is set to <code>DELETING</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/delete-data-source.html">Deleting Data
 */
DeleteDataSourceResponse * kendraClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DeleteFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an FAQ from an
 */
DeleteFaqResponse * kendraClient::deleteFaq(const DeleteFaqRequest &request)
{
    return qobject_cast<DeleteFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DeleteIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Kendra index. An exception is not thrown if the index is already being deleted. While the
 * index is being deleted, the <code>Status</code> field returned by a call to the <code>DescribeIndex</code> operation is
 * set to
 */
DeleteIndexResponse * kendraClient::deleteIndex(const DeleteIndexRequest &request)
{
    return qobject_cast<DeleteIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DeleteQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a block list used for query suggestions for an
 *
 * index>
 *
 * A deleted block list might not take effect right away. Amazon Kendra needs to refresh the entire suggestions list to add
 * back the queries that were previously
 */
DeleteQuerySuggestionsBlockListResponse * kendraClient::deleteQuerySuggestionsBlockList(const DeleteQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<DeleteQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DeleteThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Kendra thesaurus.
 */
DeleteThesaurusResponse * kendraClient::deleteThesaurus(const DeleteThesaurusRequest &request)
{
    return qobject_cast<DeleteThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Amazon Kendra data
 */
DescribeDataSourceResponse * kendraClient::describeDataSource(const DescribeDataSourceRequest &request)
{
    return qobject_cast<DescribeDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeFaqResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an FAQ
 */
DescribeFaqResponse * kendraClient::describeFaq(const DescribeFaqRequest &request)
{
    return qobject_cast<DescribeFaqResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing Amazon Kendra
 */
DescribeIndexResponse * kendraClient::describeIndex(const DescribeIndexRequest &request)
{
    return qobject_cast<DescribeIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a block list used for query suggestions for an
 *
 * index>
 *
 * This is used to check the current settings that are applied to a block
 */
DescribeQuerySuggestionsBlockListResponse * kendraClient::describeQuerySuggestionsBlockList(const DescribeQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<DescribeQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeQuerySuggestionsConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings of query suggestions for an
 *
 * index>
 *
 * This is used to check the current settings applied to query
 */
DescribeQuerySuggestionsConfigResponse * kendraClient::describeQuerySuggestionsConfig(const DescribeQuerySuggestionsConfigRequest &request)
{
    return qobject_cast<DescribeQuerySuggestionsConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * DescribeThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing Amazon Kendra
 */
DescribeThesaurusResponse * kendraClient::describeThesaurus(const DescribeThesaurusRequest &request)
{
    return qobject_cast<DescribeThesaurusResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * GetQuerySuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the queries that are suggested to your
 */
GetQuerySuggestionsResponse * kendraClient::getQuerySuggestions(const GetQuerySuggestionsRequest &request)
{
    return qobject_cast<GetQuerySuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListDataSourceSyncJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets statistics about synchronizing Amazon Kendra with a data
 */
ListDataSourceSyncJobsResponse * kendraClient::listDataSourceSyncJobs(const ListDataSourceSyncJobsRequest &request)
{
    return qobject_cast<ListDataSourceSyncJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListDataSourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data sources that you have
 */
ListDataSourcesResponse * kendraClient::listDataSources(const ListDataSourcesRequest &request)
{
    return qobject_cast<ListDataSourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListFaqsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of FAQ lists associated with an
 */
ListFaqsResponse * kendraClient::listFaqs(const ListFaqsRequest &request)
{
    return qobject_cast<ListFaqsResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListIndicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Kendra indexes that you have
 */
ListIndicesResponse * kendraClient::listIndices(const ListIndicesRequest &request)
{
    return qobject_cast<ListIndicesResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListQuerySuggestionsBlockListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the block lists used for query suggestions for an
 *
 * index>
 *
 * For information on the current quota limits for block lists, see <a
 * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for Amazon
 */
ListQuerySuggestionsBlockListsResponse * kendraClient::listQuerySuggestionsBlockLists(const ListQuerySuggestionsBlockListsRequest &request)
{
    return qobject_cast<ListQuerySuggestionsBlockListsResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of tags associated with a specified resource. Indexes, FAQs, and data sources can have tags associated with
 */
ListTagsForResourceResponse * kendraClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * ListThesauriResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Kendra thesauri associated with an
 */
ListThesauriResponse * kendraClient::listThesauri(const ListThesauriRequest &request)
{
    return qobject_cast<ListThesauriResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * QueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches an active index. Use this API to search your documents using query. The <code>Query</code> operation enables to
 * do faceted search and to filter results based on document
 *
 * attributes>
 *
 * It also enables you to provide user context that Amazon Kendra uses to enforce document access control in the search
 * results.
 *
 * </p
 *
 * Amazon Kendra searches your index for text content and question and answer (FAQ) content. By default the response
 * contains three types of
 *
 * results> <ul> <li>
 *
 * Relevant
 *
 * passage> </li> <li>
 *
 * Matching
 *
 * FAQ> </li> <li>
 *
 * Relevant
 *
 * document> </li> </ul>
 *
 * You can specify that the query return only one type of result using the <code>QueryResultTypeConfig</code>
 *
 * parameter>
 *
 * Each query returns the 100 most relevant results.
 */
QueryResponse * kendraClient::query(const QueryRequest &request)
{
    return qobject_cast<QueryResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * StartDataSourceSyncJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a synchronization job for a data source. If a synchronization job is already in progress, Amazon Kendra returns a
 * <code>ResourceInUseException</code>
 */
StartDataSourceSyncJobResponse * kendraClient::startDataSourceSyncJob(const StartDataSourceSyncJobRequest &request)
{
    return qobject_cast<StartDataSourceSyncJobResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * StopDataSourceSyncJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running synchronization job. You can't stop a scheduled synchronization
 */
StopDataSourceSyncJobResponse * kendraClient::stopDataSourceSyncJob(const StopDataSourceSyncJobRequest &request)
{
    return qobject_cast<StopDataSourceSyncJobResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * SubmitFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables you to provide feedback to Amazon Kendra to improve the performance of the service.
 */
SubmitFeedbackResponse * kendraClient::submitFeedback(const SubmitFeedbackRequest &request)
{
    return qobject_cast<SubmitFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tag to the specified index, FAQ, or data source resource. If the tag already exists, the existing
 * value is replaced with the new
 */
TagResourceResponse * kendraClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an index, FAQ, or a data
 */
UntagResourceResponse * kendraClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UpdateDataSourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Kendra data
 */
UpdateDataSourceResponse * kendraClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UpdateIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amazon Kendra
 */
UpdateIndexResponse * kendraClient::updateIndex(const UpdateIndexRequest &request)
{
    return qobject_cast<UpdateIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UpdateQuerySuggestionsBlockListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a block list used for query suggestions for an
 *
 * index>
 *
 * Updates to a block list might not take effect right away. Amazon Kendra needs to refresh the entire suggestions list to
 * apply any updates to the block list. Other changes not related to the block list apply
 *
 * immediately>
 *
 * If a block list is updating, then you need to wait for the first update to finish before submitting another
 *
 * update>
 *
 * Amazon Kendra supports partial updates, so you only need to provide the fields you want to
 */
UpdateQuerySuggestionsBlockListResponse * kendraClient::updateQuerySuggestionsBlockList(const UpdateQuerySuggestionsBlockListRequest &request)
{
    return qobject_cast<UpdateQuerySuggestionsBlockListResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UpdateQuerySuggestionsConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings of query suggestions for an
 *
 * index>
 *
 * Amazon Kendra supports partial updates, so you only need to provide the fields you want to
 *
 * update>
 *
 * If an update is currently processing (i.e. 'happening'), you need to wait for the update to finish before making another
 *
 * update>
 *
 * Updates to query suggestions settings might not take effect right away. The time for your updated settings to take
 * effect depends on the updates made and the number of search queries in your
 *
 * index>
 *
 * You can still enable/disable query suggestions at any
 */
UpdateQuerySuggestionsConfigResponse * kendraClient::updateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest &request)
{
    return qobject_cast<UpdateQuerySuggestionsConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the kendraClient service, and returns a pointer to an
 * UpdateThesaurusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a thesaurus file associated with an
 */
UpdateThesaurusResponse * kendraClient::updateThesaurus(const UpdateThesaurusRequest &request)
{
    return qobject_cast<UpdateThesaurusResponse *>(send(request));
}

/*!
 * \class QtAws::kendra::kendraClientPrivate
 * \brief The kendraClientPrivate class provides private implementation for kendraClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a kendraClientPrivate object with public implementation \a q.
 */
kendraClientPrivate::kendraClientPrivate(kendraClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace kendra
} // namespace QtAws
