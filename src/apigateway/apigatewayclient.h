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

#ifndef QTAWS_APIGATEWAYCLIENT_H
#define QTAWS_APIGATEWAYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapigatewayglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ApiGateway {

class ApiGatewayClientPrivate;
class CreateApiKeyRequest;
class CreateApiKeyResponse;
class CreateAuthorizerRequest;
class CreateAuthorizerResponse;
class CreateBasePathMappingRequest;
class CreateBasePathMappingResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDocumentationPartRequest;
class CreateDocumentationPartResponse;
class CreateDocumentationVersionRequest;
class CreateDocumentationVersionResponse;
class CreateDomainNameRequest;
class CreateDomainNameResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateRequestValidatorRequest;
class CreateRequestValidatorResponse;
class CreateResourceRequest;
class CreateResourceResponse;
class CreateRestApiRequest;
class CreateRestApiResponse;
class CreateStageRequest;
class CreateStageResponse;
class CreateUsagePlanRequest;
class CreateUsagePlanResponse;
class CreateUsagePlanKeyRequest;
class CreateUsagePlanKeyResponse;
class CreateVpcLinkRequest;
class CreateVpcLinkResponse;
class DeleteApiKeyRequest;
class DeleteApiKeyResponse;
class DeleteAuthorizerRequest;
class DeleteAuthorizerResponse;
class DeleteBasePathMappingRequest;
class DeleteBasePathMappingResponse;
class DeleteClientCertificateRequest;
class DeleteClientCertificateResponse;
class DeleteDeploymentRequest;
class DeleteDeploymentResponse;
class DeleteDocumentationPartRequest;
class DeleteDocumentationPartResponse;
class DeleteDocumentationVersionRequest;
class DeleteDocumentationVersionResponse;
class DeleteDomainNameRequest;
class DeleteDomainNameResponse;
class DeleteGatewayResponseRequest;
class DeleteGatewayResponseResponse;
class DeleteIntegrationRequest;
class DeleteIntegrationResponse;
class DeleteIntegrationResponseRequest;
class DeleteIntegrationResponseResponse;
class DeleteMethodRequest;
class DeleteMethodResponse;
class DeleteMethodResponseRequest;
class DeleteMethodResponseResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteRequestValidatorRequest;
class DeleteRequestValidatorResponse;
class DeleteResourceRequest;
class DeleteResourceResponse;
class DeleteRestApiRequest;
class DeleteRestApiResponse;
class DeleteStageRequest;
class DeleteStageResponse;
class DeleteUsagePlanRequest;
class DeleteUsagePlanResponse;
class DeleteUsagePlanKeyRequest;
class DeleteUsagePlanKeyResponse;
class DeleteVpcLinkRequest;
class DeleteVpcLinkResponse;
class FlushStageAuthorizersCacheRequest;
class FlushStageAuthorizersCacheResponse;
class FlushStageCacheRequest;
class FlushStageCacheResponse;
class GenerateClientCertificateRequest;
class GenerateClientCertificateResponse;
class GetAccountRequest;
class GetAccountResponse;
class GetApiKeyRequest;
class GetApiKeyResponse;
class GetApiKeysRequest;
class GetApiKeysResponse;
class GetAuthorizerRequest;
class GetAuthorizerResponse;
class GetAuthorizersRequest;
class GetAuthorizersResponse;
class GetBasePathMappingRequest;
class GetBasePathMappingResponse;
class GetBasePathMappingsRequest;
class GetBasePathMappingsResponse;
class GetClientCertificateRequest;
class GetClientCertificateResponse;
class GetClientCertificatesRequest;
class GetClientCertificatesResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetDeploymentsRequest;
class GetDeploymentsResponse;
class GetDocumentationPartRequest;
class GetDocumentationPartResponse;
class GetDocumentationPartsRequest;
class GetDocumentationPartsResponse;
class GetDocumentationVersionRequest;
class GetDocumentationVersionResponse;
class GetDocumentationVersionsRequest;
class GetDocumentationVersionsResponse;
class GetDomainNameRequest;
class GetDomainNameResponse;
class GetDomainNamesRequest;
class GetDomainNamesResponse;
class GetExportRequest;
class GetExportResponse;
class GetGatewayResponseRequest;
class GetGatewayResponseResponse;
class GetGatewayResponsesRequest;
class GetGatewayResponsesResponse;
class GetIntegrationRequest;
class GetIntegrationResponse;
class GetIntegrationResponseRequest;
class GetIntegrationResponseResponse;
class GetMethodRequest;
class GetMethodResponse;
class GetMethodResponseRequest;
class GetMethodResponseResponse;
class GetModelRequest;
class GetModelResponse;
class GetModelTemplateRequest;
class GetModelTemplateResponse;
class GetModelsRequest;
class GetModelsResponse;
class GetRequestValidatorRequest;
class GetRequestValidatorResponse;
class GetRequestValidatorsRequest;
class GetRequestValidatorsResponse;
class GetResourceRequest;
class GetResourceResponse;
class GetResourcesRequest;
class GetResourcesResponse;
class GetRestApiRequest;
class GetRestApiResponse;
class GetRestApisRequest;
class GetRestApisResponse;
class GetSdkRequest;
class GetSdkResponse;
class GetSdkTypeRequest;
class GetSdkTypeResponse;
class GetSdkTypesRequest;
class GetSdkTypesResponse;
class GetStageRequest;
class GetStageResponse;
class GetStagesRequest;
class GetStagesResponse;
class GetTagsRequest;
class GetTagsResponse;
class GetUsageRequest;
class GetUsageResponse;
class GetUsagePlanRequest;
class GetUsagePlanResponse;
class GetUsagePlanKeyRequest;
class GetUsagePlanKeyResponse;
class GetUsagePlanKeysRequest;
class GetUsagePlanKeysResponse;
class GetUsagePlansRequest;
class GetUsagePlansResponse;
class GetVpcLinkRequest;
class GetVpcLinkResponse;
class GetVpcLinksRequest;
class GetVpcLinksResponse;
class ImportApiKeysRequest;
class ImportApiKeysResponse;
class ImportDocumentationPartsRequest;
class ImportDocumentationPartsResponse;
class ImportRestApiRequest;
class ImportRestApiResponse;
class PutGatewayResponseRequest;
class PutGatewayResponseResponse;
class PutIntegrationRequest;
class PutIntegrationResponse;
class PutIntegrationResponseRequest;
class PutIntegrationResponseResponse;
class PutMethodRequest;
class PutMethodResponse;
class PutMethodResponseRequest;
class PutMethodResponseResponse;
class PutRestApiRequest;
class PutRestApiResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestInvokeAuthorizerRequest;
class TestInvokeAuthorizerResponse;
class TestInvokeMethodRequest;
class TestInvokeMethodResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccountRequest;
class UpdateAccountResponse;
class UpdateApiKeyRequest;
class UpdateApiKeyResponse;
class UpdateAuthorizerRequest;
class UpdateAuthorizerResponse;
class UpdateBasePathMappingRequest;
class UpdateBasePathMappingResponse;
class UpdateClientCertificateRequest;
class UpdateClientCertificateResponse;
class UpdateDeploymentRequest;
class UpdateDeploymentResponse;
class UpdateDocumentationPartRequest;
class UpdateDocumentationPartResponse;
class UpdateDocumentationVersionRequest;
class UpdateDocumentationVersionResponse;
class UpdateDomainNameRequest;
class UpdateDomainNameResponse;
class UpdateGatewayResponseRequest;
class UpdateGatewayResponseResponse;
class UpdateIntegrationRequest;
class UpdateIntegrationResponse;
class UpdateIntegrationResponseRequest;
class UpdateIntegrationResponseResponse;
class UpdateMethodRequest;
class UpdateMethodResponse;
class UpdateMethodResponseRequest;
class UpdateMethodResponseResponse;
class UpdateModelRequest;
class UpdateModelResponse;
class UpdateRequestValidatorRequest;
class UpdateRequestValidatorResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;
class UpdateRestApiRequest;
class UpdateRestApiResponse;
class UpdateStageRequest;
class UpdateStageResponse;
class UpdateUsageRequest;
class UpdateUsageResponse;
class UpdateUsagePlanRequest;
class UpdateUsagePlanResponse;
class UpdateVpcLinkRequest;
class UpdateVpcLinkResponse;

class QTAWSAPIGATEWAY_EXPORT ApiGatewayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApiGatewayClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApiGatewayClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApiKeyResponse * createApiKey(const CreateApiKeyRequest &request);
    CreateAuthorizerResponse * createAuthorizer(const CreateAuthorizerRequest &request);
    CreateBasePathMappingResponse * createBasePathMapping(const CreateBasePathMappingRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDocumentationPartResponse * createDocumentationPart(const CreateDocumentationPartRequest &request);
    CreateDocumentationVersionResponse * createDocumentationVersion(const CreateDocumentationVersionRequest &request);
    CreateDomainNameResponse * createDomainName(const CreateDomainNameRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateRequestValidatorResponse * createRequestValidator(const CreateRequestValidatorRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    CreateRestApiResponse * createRestApi(const CreateRestApiRequest &request);
    CreateStageResponse * createStage(const CreateStageRequest &request);
    CreateUsagePlanResponse * createUsagePlan(const CreateUsagePlanRequest &request);
    CreateUsagePlanKeyResponse * createUsagePlanKey(const CreateUsagePlanKeyRequest &request);
    CreateVpcLinkResponse * createVpcLink(const CreateVpcLinkRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteAuthorizerResponse * deleteAuthorizer(const DeleteAuthorizerRequest &request);
    DeleteBasePathMappingResponse * deleteBasePathMapping(const DeleteBasePathMappingRequest &request);
    DeleteClientCertificateResponse * deleteClientCertificate(const DeleteClientCertificateRequest &request);
    DeleteDeploymentResponse * deleteDeployment(const DeleteDeploymentRequest &request);
    DeleteDocumentationPartResponse * deleteDocumentationPart(const DeleteDocumentationPartRequest &request);
    DeleteDocumentationVersionResponse * deleteDocumentationVersion(const DeleteDocumentationVersionRequest &request);
    DeleteDomainNameResponse * deleteDomainName(const DeleteDomainNameRequest &request);
    DeleteGatewayResponseResponse * deleteGatewayResponse(const DeleteGatewayResponseRequest &request);
    DeleteIntegrationResponse * deleteIntegration(const DeleteIntegrationRequest &request);
    DeleteIntegrationResponseResponse * deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request);
    DeleteMethodResponse * deleteMethod(const DeleteMethodRequest &request);
    DeleteMethodResponseResponse * deleteMethodResponse(const DeleteMethodResponseRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteRequestValidatorResponse * deleteRequestValidator(const DeleteRequestValidatorRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteRestApiResponse * deleteRestApi(const DeleteRestApiRequest &request);
    DeleteStageResponse * deleteStage(const DeleteStageRequest &request);
    DeleteUsagePlanResponse * deleteUsagePlan(const DeleteUsagePlanRequest &request);
    DeleteUsagePlanKeyResponse * deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request);
    DeleteVpcLinkResponse * deleteVpcLink(const DeleteVpcLinkRequest &request);
    FlushStageAuthorizersCacheResponse * flushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest &request);
    FlushStageCacheResponse * flushStageCache(const FlushStageCacheRequest &request);
    GenerateClientCertificateResponse * generateClientCertificate(const GenerateClientCertificateRequest &request);
    GetAccountResponse * getAccount(const GetAccountRequest &request);
    GetApiKeyResponse * getApiKey(const GetApiKeyRequest &request);
    GetApiKeysResponse * getApiKeys(const GetApiKeysRequest &request);
    GetAuthorizerResponse * getAuthorizer(const GetAuthorizerRequest &request);
    GetAuthorizersResponse * getAuthorizers(const GetAuthorizersRequest &request);
    GetBasePathMappingResponse * getBasePathMapping(const GetBasePathMappingRequest &request);
    GetBasePathMappingsResponse * getBasePathMappings(const GetBasePathMappingsRequest &request);
    GetClientCertificateResponse * getClientCertificate(const GetClientCertificateRequest &request);
    GetClientCertificatesResponse * getClientCertificates(const GetClientCertificatesRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentsResponse * getDeployments(const GetDeploymentsRequest &request);
    GetDocumentationPartResponse * getDocumentationPart(const GetDocumentationPartRequest &request);
    GetDocumentationPartsResponse * getDocumentationParts(const GetDocumentationPartsRequest &request);
    GetDocumentationVersionResponse * getDocumentationVersion(const GetDocumentationVersionRequest &request);
    GetDocumentationVersionsResponse * getDocumentationVersions(const GetDocumentationVersionsRequest &request);
    GetDomainNameResponse * getDomainName(const GetDomainNameRequest &request);
    GetDomainNamesResponse * getDomainNames(const GetDomainNamesRequest &request);
    GetExportResponse * getExport(const GetExportRequest &request);
    GetGatewayResponseResponse * getGatewayResponse(const GetGatewayResponseRequest &request);
    GetGatewayResponsesResponse * getGatewayResponses(const GetGatewayResponsesRequest &request);
    GetIntegrationResponse * getIntegration(const GetIntegrationRequest &request);
    GetIntegrationResponseResponse * getIntegrationResponse(const GetIntegrationResponseRequest &request);
    GetMethodResponse * getMethod(const GetMethodRequest &request);
    GetMethodResponseResponse * getMethodResponse(const GetMethodResponseRequest &request);
    GetModelResponse * getModel(const GetModelRequest &request);
    GetModelTemplateResponse * getModelTemplate(const GetModelTemplateRequest &request);
    GetModelsResponse * getModels(const GetModelsRequest &request);
    GetRequestValidatorResponse * getRequestValidator(const GetRequestValidatorRequest &request);
    GetRequestValidatorsResponse * getRequestValidators(const GetRequestValidatorsRequest &request);
    GetResourceResponse * getResource(const GetResourceRequest &request);
    GetResourcesResponse * getResources(const GetResourcesRequest &request);
    GetRestApiResponse * getRestApi(const GetRestApiRequest &request);
    GetRestApisResponse * getRestApis(const GetRestApisRequest &request);
    GetSdkResponse * getSdk(const GetSdkRequest &request);
    GetSdkTypeResponse * getSdkType(const GetSdkTypeRequest &request);
    GetSdkTypesResponse * getSdkTypes(const GetSdkTypesRequest &request);
    GetStageResponse * getStage(const GetStageRequest &request);
    GetStagesResponse * getStages(const GetStagesRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    GetUsageResponse * getUsage(const GetUsageRequest &request);
    GetUsagePlanResponse * getUsagePlan(const GetUsagePlanRequest &request);
    GetUsagePlanKeyResponse * getUsagePlanKey(const GetUsagePlanKeyRequest &request);
    GetUsagePlanKeysResponse * getUsagePlanKeys(const GetUsagePlanKeysRequest &request);
    GetUsagePlansResponse * getUsagePlans(const GetUsagePlansRequest &request);
    GetVpcLinkResponse * getVpcLink(const GetVpcLinkRequest &request);
    GetVpcLinksResponse * getVpcLinks(const GetVpcLinksRequest &request);
    ImportApiKeysResponse * importApiKeys(const ImportApiKeysRequest &request);
    ImportDocumentationPartsResponse * importDocumentationParts(const ImportDocumentationPartsRequest &request);
    ImportRestApiResponse * importRestApi(const ImportRestApiRequest &request);
    PutGatewayResponseResponse * putGatewayResponse(const PutGatewayResponseRequest &request);
    PutIntegrationResponse * putIntegration(const PutIntegrationRequest &request);
    PutIntegrationResponseResponse * putIntegrationResponse(const PutIntegrationResponseRequest &request);
    PutMethodResponse * putMethod(const PutMethodRequest &request);
    PutMethodResponseResponse * putMethodResponse(const PutMethodResponseRequest &request);
    PutRestApiResponse * putRestApi(const PutRestApiRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestInvokeAuthorizerResponse * testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request);
    TestInvokeMethodResponse * testInvokeMethod(const TestInvokeMethodRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccountResponse * updateAccount(const UpdateAccountRequest &request);
    UpdateApiKeyResponse * updateApiKey(const UpdateApiKeyRequest &request);
    UpdateAuthorizerResponse * updateAuthorizer(const UpdateAuthorizerRequest &request);
    UpdateBasePathMappingResponse * updateBasePathMapping(const UpdateBasePathMappingRequest &request);
    UpdateClientCertificateResponse * updateClientCertificate(const UpdateClientCertificateRequest &request);
    UpdateDeploymentResponse * updateDeployment(const UpdateDeploymentRequest &request);
    UpdateDocumentationPartResponse * updateDocumentationPart(const UpdateDocumentationPartRequest &request);
    UpdateDocumentationVersionResponse * updateDocumentationVersion(const UpdateDocumentationVersionRequest &request);
    UpdateDomainNameResponse * updateDomainName(const UpdateDomainNameRequest &request);
    UpdateGatewayResponseResponse * updateGatewayResponse(const UpdateGatewayResponseRequest &request);
    UpdateIntegrationResponse * updateIntegration(const UpdateIntegrationRequest &request);
    UpdateIntegrationResponseResponse * updateIntegrationResponse(const UpdateIntegrationResponseRequest &request);
    UpdateMethodResponse * updateMethod(const UpdateMethodRequest &request);
    UpdateMethodResponseResponse * updateMethodResponse(const UpdateMethodResponseRequest &request);
    UpdateModelResponse * updateModel(const UpdateModelRequest &request);
    UpdateRequestValidatorResponse * updateRequestValidator(const UpdateRequestValidatorRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);
    UpdateRestApiResponse * updateRestApi(const UpdateRestApiRequest &request);
    UpdateStageResponse * updateStage(const UpdateStageRequest &request);
    UpdateUsageResponse * updateUsage(const UpdateUsageRequest &request);
    UpdateUsagePlanResponse * updateUsagePlan(const UpdateUsagePlanRequest &request);
    UpdateVpcLinkResponse * updateVpcLink(const UpdateVpcLinkRequest &request);

private:
    Q_DECLARE_PRIVATE(ApiGatewayClient)
    Q_DISABLE_COPY(ApiGatewayClient)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
