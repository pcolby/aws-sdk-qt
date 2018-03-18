/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APIGATEWAYCLIENT_H
#define QTAWS_APIGATEWAYCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace APIGateway {

class APIGatewayClientPrivate;

class QTAWS_EXPORT APIGatewayClient : public AwsAbstractClient {
    Q_OBJECT

public:
    APIGatewayClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    APIGatewayClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    Q_DECLARE_PRIVATE(APIGatewayClient)
    Q_DISABLE_COPY(APIGatewayClient)

};

} // namespace APIGateway
} // namespace AWS

#endif
