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
namespace Kendra {

class KendraClientPrivate;
class AssociateEntitiesToExperienceRequest;
class AssociateEntitiesToExperienceResponse;
class AssociatePersonasToEntitiesRequest;
class AssociatePersonasToEntitiesResponse;
class BatchDeleteDocumentRequest;
class BatchDeleteDocumentResponse;
class BatchGetDocumentStatusRequest;
class BatchGetDocumentStatusResponse;
class BatchPutDocumentRequest;
class BatchPutDocumentResponse;
class ClearQuerySuggestionsRequest;
class ClearQuerySuggestionsResponse;
class CreateAccessControlConfigurationRequest;
class CreateAccessControlConfigurationResponse;
class CreateDataSourceRequest;
class CreateDataSourceResponse;
class CreateExperienceRequest;
class CreateExperienceResponse;
class CreateFaqRequest;
class CreateFaqResponse;
class CreateIndexRequest;
class CreateIndexResponse;
class CreateQuerySuggestionsBlockListRequest;
class CreateQuerySuggestionsBlockListResponse;
class CreateThesaurusRequest;
class CreateThesaurusResponse;
class DeleteAccessControlConfigurationRequest;
class DeleteAccessControlConfigurationResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteExperienceRequest;
class DeleteExperienceResponse;
class DeleteFaqRequest;
class DeleteFaqResponse;
class DeleteIndexRequest;
class DeleteIndexResponse;
class DeletePrincipalMappingRequest;
class DeletePrincipalMappingResponse;
class DeleteQuerySuggestionsBlockListRequest;
class DeleteQuerySuggestionsBlockListResponse;
class DeleteThesaurusRequest;
class DeleteThesaurusResponse;
class DescribeAccessControlConfigurationRequest;
class DescribeAccessControlConfigurationResponse;
class DescribeDataSourceRequest;
class DescribeDataSourceResponse;
class DescribeExperienceRequest;
class DescribeExperienceResponse;
class DescribeFaqRequest;
class DescribeFaqResponse;
class DescribeIndexRequest;
class DescribeIndexResponse;
class DescribePrincipalMappingRequest;
class DescribePrincipalMappingResponse;
class DescribeQuerySuggestionsBlockListRequest;
class DescribeQuerySuggestionsBlockListResponse;
class DescribeQuerySuggestionsConfigRequest;
class DescribeQuerySuggestionsConfigResponse;
class DescribeThesaurusRequest;
class DescribeThesaurusResponse;
class DisassociateEntitiesFromExperienceRequest;
class DisassociateEntitiesFromExperienceResponse;
class DisassociatePersonasFromEntitiesRequest;
class DisassociatePersonasFromEntitiesResponse;
class GetQuerySuggestionsRequest;
class GetQuerySuggestionsResponse;
class GetSnapshotsRequest;
class GetSnapshotsResponse;
class ListAccessControlConfigurationsRequest;
class ListAccessControlConfigurationsResponse;
class ListDataSourceSyncJobsRequest;
class ListDataSourceSyncJobsResponse;
class ListDataSourcesRequest;
class ListDataSourcesResponse;
class ListEntityPersonasRequest;
class ListEntityPersonasResponse;
class ListExperienceEntitiesRequest;
class ListExperienceEntitiesResponse;
class ListExperiencesRequest;
class ListExperiencesResponse;
class ListFaqsRequest;
class ListFaqsResponse;
class ListGroupsOlderThanOrderingIdRequest;
class ListGroupsOlderThanOrderingIdResponse;
class ListIndicesRequest;
class ListIndicesResponse;
class ListQuerySuggestionsBlockListsRequest;
class ListQuerySuggestionsBlockListsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListThesauriRequest;
class ListThesauriResponse;
class PutPrincipalMappingRequest;
class PutPrincipalMappingResponse;
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
class UpdateAccessControlConfigurationRequest;
class UpdateAccessControlConfigurationResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateExperienceRequest;
class UpdateExperienceResponse;
class UpdateIndexRequest;
class UpdateIndexResponse;
class UpdateQuerySuggestionsBlockListRequest;
class UpdateQuerySuggestionsBlockListResponse;
class UpdateQuerySuggestionsConfigRequest;
class UpdateQuerySuggestionsConfigResponse;
class UpdateThesaurusRequest;
class UpdateThesaurusResponse;

class QTAWSKENDRA_EXPORT KendraClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KendraClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KendraClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateEntitiesToExperienceResponse * associateEntitiesToExperience(const AssociateEntitiesToExperienceRequest &request);
    AssociatePersonasToEntitiesResponse * associatePersonasToEntities(const AssociatePersonasToEntitiesRequest &request);
    BatchDeleteDocumentResponse * batchDeleteDocument(const BatchDeleteDocumentRequest &request);
    BatchGetDocumentStatusResponse * batchGetDocumentStatus(const BatchGetDocumentStatusRequest &request);
    BatchPutDocumentResponse * batchPutDocument(const BatchPutDocumentRequest &request);
    ClearQuerySuggestionsResponse * clearQuerySuggestions(const ClearQuerySuggestionsRequest &request);
    CreateAccessControlConfigurationResponse * createAccessControlConfiguration(const CreateAccessControlConfigurationRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateExperienceResponse * createExperience(const CreateExperienceRequest &request);
    CreateFaqResponse * createFaq(const CreateFaqRequest &request);
    CreateIndexResponse * createIndex(const CreateIndexRequest &request);
    CreateQuerySuggestionsBlockListResponse * createQuerySuggestionsBlockList(const CreateQuerySuggestionsBlockListRequest &request);
    CreateThesaurusResponse * createThesaurus(const CreateThesaurusRequest &request);
    DeleteAccessControlConfigurationResponse * deleteAccessControlConfiguration(const DeleteAccessControlConfigurationRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteExperienceResponse * deleteExperience(const DeleteExperienceRequest &request);
    DeleteFaqResponse * deleteFaq(const DeleteFaqRequest &request);
    DeleteIndexResponse * deleteIndex(const DeleteIndexRequest &request);
    DeletePrincipalMappingResponse * deletePrincipalMapping(const DeletePrincipalMappingRequest &request);
    DeleteQuerySuggestionsBlockListResponse * deleteQuerySuggestionsBlockList(const DeleteQuerySuggestionsBlockListRequest &request);
    DeleteThesaurusResponse * deleteThesaurus(const DeleteThesaurusRequest &request);
    DescribeAccessControlConfigurationResponse * describeAccessControlConfiguration(const DescribeAccessControlConfigurationRequest &request);
    DescribeDataSourceResponse * describeDataSource(const DescribeDataSourceRequest &request);
    DescribeExperienceResponse * describeExperience(const DescribeExperienceRequest &request);
    DescribeFaqResponse * describeFaq(const DescribeFaqRequest &request);
    DescribeIndexResponse * describeIndex(const DescribeIndexRequest &request);
    DescribePrincipalMappingResponse * describePrincipalMapping(const DescribePrincipalMappingRequest &request);
    DescribeQuerySuggestionsBlockListResponse * describeQuerySuggestionsBlockList(const DescribeQuerySuggestionsBlockListRequest &request);
    DescribeQuerySuggestionsConfigResponse * describeQuerySuggestionsConfig(const DescribeQuerySuggestionsConfigRequest &request);
    DescribeThesaurusResponse * describeThesaurus(const DescribeThesaurusRequest &request);
    DisassociateEntitiesFromExperienceResponse * disassociateEntitiesFromExperience(const DisassociateEntitiesFromExperienceRequest &request);
    DisassociatePersonasFromEntitiesResponse * disassociatePersonasFromEntities(const DisassociatePersonasFromEntitiesRequest &request);
    GetQuerySuggestionsResponse * getQuerySuggestions(const GetQuerySuggestionsRequest &request);
    GetSnapshotsResponse * getSnapshots(const GetSnapshotsRequest &request);
    ListAccessControlConfigurationsResponse * listAccessControlConfigurations(const ListAccessControlConfigurationsRequest &request);
    ListDataSourceSyncJobsResponse * listDataSourceSyncJobs(const ListDataSourceSyncJobsRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListEntityPersonasResponse * listEntityPersonas(const ListEntityPersonasRequest &request);
    ListExperienceEntitiesResponse * listExperienceEntities(const ListExperienceEntitiesRequest &request);
    ListExperiencesResponse * listExperiences(const ListExperiencesRequest &request);
    ListFaqsResponse * listFaqs(const ListFaqsRequest &request);
    ListGroupsOlderThanOrderingIdResponse * listGroupsOlderThanOrderingId(const ListGroupsOlderThanOrderingIdRequest &request);
    ListIndicesResponse * listIndices(const ListIndicesRequest &request);
    ListQuerySuggestionsBlockListsResponse * listQuerySuggestionsBlockLists(const ListQuerySuggestionsBlockListsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListThesauriResponse * listThesauri(const ListThesauriRequest &request);
    PutPrincipalMappingResponse * putPrincipalMapping(const PutPrincipalMappingRequest &request);
    QueryResponse * query(const QueryRequest &request);
    StartDataSourceSyncJobResponse * startDataSourceSyncJob(const StartDataSourceSyncJobRequest &request);
    StopDataSourceSyncJobResponse * stopDataSourceSyncJob(const StopDataSourceSyncJobRequest &request);
    SubmitFeedbackResponse * submitFeedback(const SubmitFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccessControlConfigurationResponse * updateAccessControlConfiguration(const UpdateAccessControlConfigurationRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateExperienceResponse * updateExperience(const UpdateExperienceRequest &request);
    UpdateIndexResponse * updateIndex(const UpdateIndexRequest &request);
    UpdateQuerySuggestionsBlockListResponse * updateQuerySuggestionsBlockList(const UpdateQuerySuggestionsBlockListRequest &request);
    UpdateQuerySuggestionsConfigResponse * updateQuerySuggestionsConfig(const UpdateQuerySuggestionsConfigRequest &request);
    UpdateThesaurusResponse * updateThesaurus(const UpdateThesaurusRequest &request);

private:
    Q_DECLARE_PRIVATE(KendraClient)
    Q_DISABLE_COPY(KendraClient)

};

} // namespace Kendra
} // namespace QtAws

#endif
