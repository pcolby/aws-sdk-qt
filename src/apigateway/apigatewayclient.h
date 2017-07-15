/*
    Copyright 2013-2016 Paul Colby

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
    CreateDomainNameResponse * createDomainName(const CreateDomainNameRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    CreateRestApiResponse * createRestApi(const CreateRestApiRequest &request);
    CreateStageResponse * createStage(const CreateStageRequest &request);
    CreateUsagePlanResponse * createUsagePlan(const CreateUsagePlanRequest &request);
    CreateUsagePlanKeyResponse * createUsagePlanKey(const CreateUsagePlanKeyRequest &request);
    DeleteApiKeyResponse * deleteApiKey(const DeleteApiKeyRequest &request);
    DeleteAuthorizerResponse * deleteAuthorizer(const DeleteAuthorizerRequest &request);
    DeleteBasePathMappingResponse * deleteBasePathMapping(const DeleteBasePathMappingRequest &request);
    DeleteClientCertificateResponse * deleteClientCertificate(const DeleteClientCertificateRequest &request);
    DeleteDeploymentResponse * deleteDeployment(const DeleteDeploymentRequest &request);
    DeleteDomainNameResponse * deleteDomainName(const DeleteDomainNameRequest &request);
    DeleteIntegrationResponse * deleteIntegration(const DeleteIntegrationRequest &request);
    DeleteIntegrationResponseResponse * deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request);
    DeleteMethodResponse * deleteMethod(const DeleteMethodRequest &request);
    DeleteMethodResponseResponse * deleteMethodResponse(const DeleteMethodResponseRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteRestApiResponse * deleteRestApi(const DeleteRestApiRequest &request);
    DeleteStageResponse * deleteStage(const DeleteStageRequest &request);
    DeleteUsagePlanResponse * deleteUsagePlan(const DeleteUsagePlanRequest &request);
    DeleteUsagePlanKeyResponse * deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request);
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
    GetDomainNameResponse * getDomainName(const GetDomainNameRequest &request);
    GetDomainNamesResponse * getDomainNames(const GetDomainNamesRequest &request);
    GetExportResponse * getExport(const GetExportRequest &request);
    GetIntegrationResponse * getIntegration(const GetIntegrationRequest &request);
    GetIntegrationResponseResponse * getIntegrationResponse(const GetIntegrationResponseRequest &request);
    GetMethodResponse * getMethod(const GetMethodRequest &request);
    GetMethodResponseResponse * getMethodResponse(const GetMethodResponseRequest &request);
    GetModelResponse * getModel(const GetModelRequest &request);
    GetModelTemplateResponse * getModelTemplate(const GetModelTemplateRequest &request);
    GetModelsResponse * getModels(const GetModelsRequest &request);
    GetResourceResponse * getResource(const GetResourceRequest &request);
    GetResourcesResponse * getResources(const GetResourcesRequest &request);
    GetRestApiResponse * getRestApi(const GetRestApiRequest &request);
    GetRestApisResponse * getRestApis(const GetRestApisRequest &request);
    GetSdkResponse * getSdk(const GetSdkRequest &request);
    GetStageResponse * getStage(const GetStageRequest &request);
    GetStagesResponse * getStages(const GetStagesRequest &request);
    GetUsageResponse * getUsage(const GetUsageRequest &request);
    GetUsagePlanResponse * getUsagePlan(const GetUsagePlanRequest &request);
    GetUsagePlanKeyResponse * getUsagePlanKey(const GetUsagePlanKeyRequest &request);
    GetUsagePlanKeysResponse * getUsagePlanKeys(const GetUsagePlanKeysRequest &request);
    GetUsagePlansResponse * getUsagePlans(const GetUsagePlansRequest &request);
    ImportApiKeysResponse * importApiKeys(const ImportApiKeysRequest &request);
    ImportRestApiResponse * importRestApi(const ImportRestApiRequest &request);
    PutIntegrationResponse * putIntegration(const PutIntegrationRequest &request);
    PutIntegrationResponseResponse * putIntegrationResponse(const PutIntegrationResponseRequest &request);
    PutMethodResponse * putMethod(const PutMethodRequest &request);
    PutMethodResponseResponse * putMethodResponse(const PutMethodResponseRequest &request);
    PutRestApiResponse * putRestApi(const PutRestApiRequest &request);
    TestInvokeAuthorizerResponse * testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request);
    TestInvokeMethodResponse * testInvokeMethod(const TestInvokeMethodRequest &request);
    UpdateAccountResponse * updateAccount(const UpdateAccountRequest &request);
    UpdateApiKeyResponse * updateApiKey(const UpdateApiKeyRequest &request);
    UpdateAuthorizerResponse * updateAuthorizer(const UpdateAuthorizerRequest &request);
    UpdateBasePathMappingResponse * updateBasePathMapping(const UpdateBasePathMappingRequest &request);
    UpdateClientCertificateResponse * updateClientCertificate(const UpdateClientCertificateRequest &request);
    UpdateDeploymentResponse * updateDeployment(const UpdateDeploymentRequest &request);
    UpdateDomainNameResponse * updateDomainName(const UpdateDomainNameRequest &request);
    UpdateIntegrationResponse * updateIntegration(const UpdateIntegrationRequest &request);
    UpdateIntegrationResponseResponse * updateIntegrationResponse(const UpdateIntegrationResponseRequest &request);
    UpdateMethodResponse * updateMethod(const UpdateMethodRequest &request);
    UpdateMethodResponseResponse * updateMethodResponse(const UpdateMethodResponseRequest &request);
    UpdateModelResponse * updateModel(const UpdateModelRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);
    UpdateRestApiResponse * updateRestApi(const UpdateRestApiRequest &request);
    UpdateStageResponse * updateStage(const UpdateStageRequest &request);
    UpdateUsageResponse * updateUsage(const UpdateUsageRequest &request);
    UpdateUsagePlanResponse * updateUsagePlan(const UpdateUsagePlanRequest &request);

private:
    Q_DECLARE_PRIVATE(APIGatewayClient)
    Q_DISABLE_COPY(APIGatewayClient)

};

} // namespace APIGateway
} // namespace AWS

#endif
