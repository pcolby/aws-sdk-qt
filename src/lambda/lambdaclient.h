// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDACLIENT_H
#define QTAWS_LAMBDACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslambdaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Lambda {

class LambdaClientPrivate;
class AddLayerVersionPermissionRequest;
class AddLayerVersionPermissionResponse;
class AddPermissionRequest;
class AddPermissionResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateCodeSigningConfigRequest;
class CreateCodeSigningConfigResponse;
class CreateEventSourceMappingRequest;
class CreateEventSourceMappingResponse;
class CreateFunctionRequest;
class CreateFunctionResponse;
class CreateFunctionUrlConfigRequest;
class CreateFunctionUrlConfigResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteCodeSigningConfigRequest;
class DeleteCodeSigningConfigResponse;
class DeleteEventSourceMappingRequest;
class DeleteEventSourceMappingResponse;
class DeleteFunctionRequest;
class DeleteFunctionResponse;
class DeleteFunctionCodeSigningConfigRequest;
class DeleteFunctionCodeSigningConfigResponse;
class DeleteFunctionConcurrencyRequest;
class DeleteFunctionConcurrencyResponse;
class DeleteFunctionEventInvokeConfigRequest;
class DeleteFunctionEventInvokeConfigResponse;
class DeleteFunctionUrlConfigRequest;
class DeleteFunctionUrlConfigResponse;
class DeleteLayerVersionRequest;
class DeleteLayerVersionResponse;
class DeleteProvisionedConcurrencyConfigRequest;
class DeleteProvisionedConcurrencyConfigResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetAliasRequest;
class GetAliasResponse;
class GetCodeSigningConfigRequest;
class GetCodeSigningConfigResponse;
class GetEventSourceMappingRequest;
class GetEventSourceMappingResponse;
class GetFunctionRequest;
class GetFunctionResponse;
class GetFunctionCodeSigningConfigRequest;
class GetFunctionCodeSigningConfigResponse;
class GetFunctionConcurrencyRequest;
class GetFunctionConcurrencyResponse;
class GetFunctionConfigurationRequest;
class GetFunctionConfigurationResponse;
class GetFunctionEventInvokeConfigRequest;
class GetFunctionEventInvokeConfigResponse;
class GetFunctionUrlConfigRequest;
class GetFunctionUrlConfigResponse;
class GetLayerVersionRequest;
class GetLayerVersionResponse;
class GetLayerVersionByArnRequest;
class GetLayerVersionByArnResponse;
class GetLayerVersionPolicyRequest;
class GetLayerVersionPolicyResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class GetProvisionedConcurrencyConfigRequest;
class GetProvisionedConcurrencyConfigResponse;
class InvokeRequest;
class InvokeResponse;
class InvokeAsyncRequest;
class InvokeAsyncResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListCodeSigningConfigsRequest;
class ListCodeSigningConfigsResponse;
class ListEventSourceMappingsRequest;
class ListEventSourceMappingsResponse;
class ListFunctionEventInvokeConfigsRequest;
class ListFunctionEventInvokeConfigsResponse;
class ListFunctionUrlConfigsRequest;
class ListFunctionUrlConfigsResponse;
class ListFunctionsRequest;
class ListFunctionsResponse;
class ListFunctionsByCodeSigningConfigRequest;
class ListFunctionsByCodeSigningConfigResponse;
class ListLayerVersionsRequest;
class ListLayerVersionsResponse;
class ListLayersRequest;
class ListLayersResponse;
class ListProvisionedConcurrencyConfigsRequest;
class ListProvisionedConcurrencyConfigsResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListVersionsByFunctionRequest;
class ListVersionsByFunctionResponse;
class PublishLayerVersionRequest;
class PublishLayerVersionResponse;
class PublishVersionRequest;
class PublishVersionResponse;
class PutFunctionCodeSigningConfigRequest;
class PutFunctionCodeSigningConfigResponse;
class PutFunctionConcurrencyRequest;
class PutFunctionConcurrencyResponse;
class PutFunctionEventInvokeConfigRequest;
class PutFunctionEventInvokeConfigResponse;
class PutProvisionedConcurrencyConfigRequest;
class PutProvisionedConcurrencyConfigResponse;
class RemoveLayerVersionPermissionRequest;
class RemoveLayerVersionPermissionResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAliasRequest;
class UpdateAliasResponse;
class UpdateCodeSigningConfigRequest;
class UpdateCodeSigningConfigResponse;
class UpdateEventSourceMappingRequest;
class UpdateEventSourceMappingResponse;
class UpdateFunctionCodeRequest;
class UpdateFunctionCodeResponse;
class UpdateFunctionConfigurationRequest;
class UpdateFunctionConfigurationResponse;
class UpdateFunctionEventInvokeConfigRequest;
class UpdateFunctionEventInvokeConfigResponse;
class UpdateFunctionUrlConfigRequest;
class UpdateFunctionUrlConfigResponse;

class QTAWSLAMBDA_EXPORT LambdaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LambdaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LambdaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddLayerVersionPermissionResponse * addLayerVersionPermission(const AddLayerVersionPermissionRequest &request);
    AddPermissionResponse * addPermission(const AddPermissionRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateCodeSigningConfigResponse * createCodeSigningConfig(const CreateCodeSigningConfigRequest &request);
    CreateEventSourceMappingResponse * createEventSourceMapping(const CreateEventSourceMappingRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    CreateFunctionUrlConfigResponse * createFunctionUrlConfig(const CreateFunctionUrlConfigRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteCodeSigningConfigResponse * deleteCodeSigningConfig(const DeleteCodeSigningConfigRequest &request);
    DeleteEventSourceMappingResponse * deleteEventSourceMapping(const DeleteEventSourceMappingRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteFunctionCodeSigningConfigResponse * deleteFunctionCodeSigningConfig(const DeleteFunctionCodeSigningConfigRequest &request);
    DeleteFunctionConcurrencyResponse * deleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest &request);
    DeleteFunctionEventInvokeConfigResponse * deleteFunctionEventInvokeConfig(const DeleteFunctionEventInvokeConfigRequest &request);
    DeleteFunctionUrlConfigResponse * deleteFunctionUrlConfig(const DeleteFunctionUrlConfigRequest &request);
    DeleteLayerVersionResponse * deleteLayerVersion(const DeleteLayerVersionRequest &request);
    DeleteProvisionedConcurrencyConfigResponse * deleteProvisionedConcurrencyConfig(const DeleteProvisionedConcurrencyConfigRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetAliasResponse * getAlias(const GetAliasRequest &request);
    GetCodeSigningConfigResponse * getCodeSigningConfig(const GetCodeSigningConfigRequest &request);
    GetEventSourceMappingResponse * getEventSourceMapping(const GetEventSourceMappingRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetFunctionCodeSigningConfigResponse * getFunctionCodeSigningConfig(const GetFunctionCodeSigningConfigRequest &request);
    GetFunctionConcurrencyResponse * getFunctionConcurrency(const GetFunctionConcurrencyRequest &request);
    GetFunctionConfigurationResponse * getFunctionConfiguration(const GetFunctionConfigurationRequest &request);
    GetFunctionEventInvokeConfigResponse * getFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest &request);
    GetFunctionUrlConfigResponse * getFunctionUrlConfig(const GetFunctionUrlConfigRequest &request);
    GetLayerVersionResponse * getLayerVersion(const GetLayerVersionRequest &request);
    GetLayerVersionByArnResponse * getLayerVersionByArn(const GetLayerVersionByArnRequest &request);
    GetLayerVersionPolicyResponse * getLayerVersionPolicy(const GetLayerVersionPolicyRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetProvisionedConcurrencyConfigResponse * getProvisionedConcurrencyConfig(const GetProvisionedConcurrencyConfigRequest &request);
    InvokeResponse * invoke(const InvokeRequest &request);
    InvokeAsyncResponse * invokeAsync(const InvokeAsyncRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListCodeSigningConfigsResponse * listCodeSigningConfigs(const ListCodeSigningConfigsRequest &request);
    ListEventSourceMappingsResponse * listEventSourceMappings(const ListEventSourceMappingsRequest &request);
    ListFunctionEventInvokeConfigsResponse * listFunctionEventInvokeConfigs(const ListFunctionEventInvokeConfigsRequest &request);
    ListFunctionUrlConfigsResponse * listFunctionUrlConfigs(const ListFunctionUrlConfigsRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListFunctionsByCodeSigningConfigResponse * listFunctionsByCodeSigningConfig(const ListFunctionsByCodeSigningConfigRequest &request);
    ListLayerVersionsResponse * listLayerVersions(const ListLayerVersionsRequest &request);
    ListLayersResponse * listLayers(const ListLayersRequest &request);
    ListProvisionedConcurrencyConfigsResponse * listProvisionedConcurrencyConfigs(const ListProvisionedConcurrencyConfigsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListVersionsByFunctionResponse * listVersionsByFunction(const ListVersionsByFunctionRequest &request);
    PublishLayerVersionResponse * publishLayerVersion(const PublishLayerVersionRequest &request);
    PublishVersionResponse * publishVersion(const PublishVersionRequest &request);
    PutFunctionCodeSigningConfigResponse * putFunctionCodeSigningConfig(const PutFunctionCodeSigningConfigRequest &request);
    PutFunctionConcurrencyResponse * putFunctionConcurrency(const PutFunctionConcurrencyRequest &request);
    PutFunctionEventInvokeConfigResponse * putFunctionEventInvokeConfig(const PutFunctionEventInvokeConfigRequest &request);
    PutProvisionedConcurrencyConfigResponse * putProvisionedConcurrencyConfig(const PutProvisionedConcurrencyConfigRequest &request);
    RemoveLayerVersionPermissionResponse * removeLayerVersionPermission(const RemoveLayerVersionPermissionRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateCodeSigningConfigResponse * updateCodeSigningConfig(const UpdateCodeSigningConfigRequest &request);
    UpdateEventSourceMappingResponse * updateEventSourceMapping(const UpdateEventSourceMappingRequest &request);
    UpdateFunctionCodeResponse * updateFunctionCode(const UpdateFunctionCodeRequest &request);
    UpdateFunctionConfigurationResponse * updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request);
    UpdateFunctionEventInvokeConfigResponse * updateFunctionEventInvokeConfig(const UpdateFunctionEventInvokeConfigRequest &request);
    UpdateFunctionUrlConfigResponse * updateFunctionUrlConfig(const UpdateFunctionUrlConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(LambdaClient)
    Q_DISABLE_COPY(LambdaClient)

};

} // namespace Lambda
} // namespace QtAws

#endif
