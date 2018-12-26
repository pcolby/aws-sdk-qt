/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_LAMBDACLIENT_H
#define QTAWS_LAMBDACLIENT_H

#include "core/awsabstractclient.h"

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
class CreateEventSourceMappingRequest;
class CreateEventSourceMappingResponse;
class CreateFunctionRequest;
class CreateFunctionResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteEventSourceMappingRequest;
class DeleteEventSourceMappingResponse;
class DeleteFunctionRequest;
class DeleteFunctionResponse;
class DeleteFunctionConcurrencyRequest;
class DeleteFunctionConcurrencyResponse;
class DeleteLayerVersionRequest;
class DeleteLayerVersionResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetAliasRequest;
class GetAliasResponse;
class GetEventSourceMappingRequest;
class GetEventSourceMappingResponse;
class GetFunctionRequest;
class GetFunctionResponse;
class GetFunctionConfigurationRequest;
class GetFunctionConfigurationResponse;
class GetLayerVersionRequest;
class GetLayerVersionResponse;
class GetLayerVersionPolicyRequest;
class GetLayerVersionPolicyResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class InvokeRequest;
class InvokeResponse;
class InvokeAsyncRequest;
class InvokeAsyncResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListEventSourceMappingsRequest;
class ListEventSourceMappingsResponse;
class ListFunctionsRequest;
class ListFunctionsResponse;
class ListLayerVersionsRequest;
class ListLayerVersionsResponse;
class ListLayersRequest;
class ListLayersResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListVersionsByFunctionRequest;
class ListVersionsByFunctionResponse;
class PublishLayerVersionRequest;
class PublishLayerVersionResponse;
class PublishVersionRequest;
class PublishVersionResponse;
class PutFunctionConcurrencyRequest;
class PutFunctionConcurrencyResponse;
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
class UpdateEventSourceMappingRequest;
class UpdateEventSourceMappingResponse;
class UpdateFunctionCodeRequest;
class UpdateFunctionCodeResponse;
class UpdateFunctionConfigurationRequest;
class UpdateFunctionConfigurationResponse;

class QTAWS_EXPORT LambdaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LambdaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LambdaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddLayerVersionPermissionResponse * addLayerVersionPermission(const AddLayerVersionPermissionRequest &request);
    AddPermissionResponse * addPermission(const AddPermissionRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateEventSourceMappingResponse * createEventSourceMapping(const CreateEventSourceMappingRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteEventSourceMappingResponse * deleteEventSourceMapping(const DeleteEventSourceMappingRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteFunctionConcurrencyResponse * deleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest &request);
    DeleteLayerVersionResponse * deleteLayerVersion(const DeleteLayerVersionRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetAliasResponse * getAlias(const GetAliasRequest &request);
    GetEventSourceMappingResponse * getEventSourceMapping(const GetEventSourceMappingRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetFunctionConfigurationResponse * getFunctionConfiguration(const GetFunctionConfigurationRequest &request);
    GetLayerVersionResponse * getLayerVersion(const GetLayerVersionRequest &request);
    GetLayerVersionPolicyResponse * getLayerVersionPolicy(const GetLayerVersionPolicyRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    InvokeResponse * invoke(const InvokeRequest &request);
    InvokeAsyncResponse * invokeAsync(const InvokeAsyncRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListEventSourceMappingsResponse * listEventSourceMappings(const ListEventSourceMappingsRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListLayerVersionsResponse * listLayerVersions(const ListLayerVersionsRequest &request);
    ListLayersResponse * listLayers(const ListLayersRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListVersionsByFunctionResponse * listVersionsByFunction(const ListVersionsByFunctionRequest &request);
    PublishLayerVersionResponse * publishLayerVersion(const PublishLayerVersionRequest &request);
    PublishVersionResponse * publishVersion(const PublishVersionRequest &request);
    PutFunctionConcurrencyResponse * putFunctionConcurrency(const PutFunctionConcurrencyRequest &request);
    RemoveLayerVersionPermissionResponse * removeLayerVersionPermission(const RemoveLayerVersionPermissionRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateEventSourceMappingResponse * updateEventSourceMapping(const UpdateEventSourceMappingRequest &request);
    UpdateFunctionCodeResponse * updateFunctionCode(const UpdateFunctionCodeRequest &request);
    UpdateFunctionConfigurationResponse * updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(LambdaClient)
    Q_DISABLE_COPY(LambdaClient)

};

} // namespace Lambda
} // namespace QtAws

#endif
