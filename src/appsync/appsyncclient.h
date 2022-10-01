// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSYNCCLIENT_H
#define QTAWS_APPSYNCCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappsyncglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppSync {

class AppSyncClientPrivate;
class AssociateApiRequest;
class AssociateApiResponse;
class CreateApiCacheRequest;
class CreateApiCacheResponse;
class CreateApiKeyRequest;
class CreateApiKeyResponse;
class CreateDataSourceRequest;
class CreateDataSourceResponse;
class CreateDomainNameRequest;
class CreateDomainNameResponse;
class CreateFunctionRequest;
class CreateFunctionResponse;
class CreateGraphqlApiRequest;
class CreateGraphqlApiResponse;
class CreateResolverRequest;
class CreateResolverResponse;
class CreateTypeRequest;
class CreateTypeResponse;
class DeleteApiCacheRequest;
class DeleteApiCacheResponse;
class DeleteApiKeyRequest;
class DeleteApiKeyResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteDomainNameRequest;
class DeleteDomainNameResponse;
class DeleteFunctionRequest;
class DeleteFunctionResponse;
class DeleteGraphqlApiRequest;
class DeleteGraphqlApiResponse;
class DeleteResolverRequest;
class DeleteResolverResponse;
class DeleteTypeRequest;
class DeleteTypeResponse;
class DisassociateApiRequest;
class DisassociateApiResponse;
class EvaluateMappingTemplateRequest;
class EvaluateMappingTemplateResponse;
class FlushApiCacheRequest;
class FlushApiCacheResponse;
class GetApiAssociationRequest;
class GetApiAssociationResponse;
class GetApiCacheRequest;
class GetApiCacheResponse;
class GetDataSourceRequest;
class GetDataSourceResponse;
class GetDomainNameRequest;
class GetDomainNameResponse;
class GetFunctionRequest;
class GetFunctionResponse;
class GetGraphqlApiRequest;
class GetGraphqlApiResponse;
class GetIntrospectionSchemaRequest;
class GetIntrospectionSchemaResponse;
class GetResolverRequest;
class GetResolverResponse;
class GetSchemaCreationStatusRequest;
class GetSchemaCreationStatusResponse;
class GetTypeRequest;
class GetTypeResponse;
class ListApiKeysRequest;
class ListApiKeysResponse;
class ListDataSourcesRequest;
class ListDataSourcesResponse;
class ListDomainNamesRequest;
class ListDomainNamesResponse;
class ListFunctionsRequest;
class ListFunctionsResponse;
class ListGraphqlApisRequest;
class ListGraphqlApisResponse;
class ListResolversRequest;
class ListResolversResponse;
class ListResolversByFunctionRequest;
class ListResolversByFunctionResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTypesRequest;
class ListTypesResponse;
class StartSchemaCreationRequest;
class StartSchemaCreationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApiCacheRequest;
class UpdateApiCacheResponse;
class UpdateApiKeyRequest;
class UpdateApiKeyResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateDomainNameRequest;
class UpdateDomainNameResponse;
class UpdateFunctionRequest;
class UpdateFunctionResponse;
class UpdateGraphqlApiRequest;
class UpdateGraphqlApiResponse;
class UpdateResolverRequest;
class UpdateResolverResponse;
class UpdateTypeRequest;
class UpdateTypeResponse;

class QTAWSAPPSYNC_EXPORT AppSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppSyncClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateApiResponse * associateApi(const AssociateApiRequest &request);
    CreateApiCacheResponse * createApiCache(const CreateApiCacheRequest &request);
    CreateApiKeyResponse * createApiKey(const CreateApiKeyRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateDomainNameResponse * createDomainName(const CreateDomainNameRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    CreateGraphqlApiResponse * createGraphqlApi(const CreateGraphqlApiRequest &request);
    CreateResolverResponse * createResolver(const CreateResolverRequest &request);
    CreateTypeResponse * createType(const CreateTypeRequest &request);
    DeleteApiCacheResponse * deleteApiCache(const DeleteApiCacheRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteDomainNameResponse * deleteDomainName(const DeleteDomainNameRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteGraphqlApiResponse * deleteGraphqlApi(const DeleteGraphqlApiRequest &request);
    DeleteResolverResponse * deleteResolver(const DeleteResolverRequest &request);
    DeleteTypeResponse * deleteType(const DeleteTypeRequest &request);
    DisassociateApiResponse * disassociateApi(const DisassociateApiRequest &request);
    EvaluateMappingTemplateResponse * evaluateMappingTemplate(const EvaluateMappingTemplateRequest &request);
    FlushApiCacheResponse * flushApiCache(const FlushApiCacheRequest &request);
    GetApiAssociationResponse * getApiAssociation(const GetApiAssociationRequest &request);
    GetApiCacheResponse * getApiCache(const GetApiCacheRequest &request);
    GetDataSourceResponse * getDataSource(const GetDataSourceRequest &request);
    GetDomainNameResponse * getDomainName(const GetDomainNameRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetGraphqlApiResponse * getGraphqlApi(const GetGraphqlApiRequest &request);
    GetIntrospectionSchemaResponse * getIntrospectionSchema(const GetIntrospectionSchemaRequest &request);
    GetResolverResponse * getResolver(const GetResolverRequest &request);
    GetSchemaCreationStatusResponse * getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request);
    GetTypeResponse * getType(const GetTypeRequest &request);
    ListApiKeysResponse * listApiKeys(const ListApiKeysRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListDomainNamesResponse * listDomainNames(const ListDomainNamesRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListGraphqlApisResponse * listGraphqlApis(const ListGraphqlApisRequest &request);
    ListResolversResponse * listResolvers(const ListResolversRequest &request);
    ListResolversByFunctionResponse * listResolversByFunction(const ListResolversByFunctionRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTypesResponse * listTypes(const ListTypesRequest &request);
    StartSchemaCreationResponse * startSchemaCreation(const StartSchemaCreationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApiCacheResponse * updateApiCache(const UpdateApiCacheRequest &request);
    UpdateApiKeyResponse * updateApiKey(const UpdateApiKeyRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateDomainNameResponse * updateDomainName(const UpdateDomainNameRequest &request);
    UpdateFunctionResponse * updateFunction(const UpdateFunctionRequest &request);
    UpdateGraphqlApiResponse * updateGraphqlApi(const UpdateGraphqlApiRequest &request);
    UpdateResolverResponse * updateResolver(const UpdateResolverRequest &request);
    UpdateTypeResponse * updateType(const UpdateTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(AppSyncClient)
    Q_DISABLE_COPY(AppSyncClient)

};

} // namespace AppSync
} // namespace QtAws

#endif
