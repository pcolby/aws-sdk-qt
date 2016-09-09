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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    APIGatewayCreateApiKeyResponse * createApiKey(const APIGatewayCreateApiKeyRequest &request);
    APIGatewayCreateAuthorizerResponse * createAuthorizer(const APIGatewayCreateAuthorizerRequest &request);
    APIGatewayCreateBasePathMappingResponse * createBasePathMapping(const APIGatewayCreateBasePathMappingRequest &request);
    APIGatewayCreateDeploymentResponse * createDeployment(const APIGatewayCreateDeploymentRequest &request);
    APIGatewayCreateDomainNameResponse * createDomainName(const APIGatewayCreateDomainNameRequest &request);
    APIGatewayCreateModelResponse * createModel(const APIGatewayCreateModelRequest &request);
    APIGatewayCreateResourceResponse * createResource(const APIGatewayCreateResourceRequest &request);
    APIGatewayCreateRestApiResponse * createRestApi(const APIGatewayCreateRestApiRequest &request);
    APIGatewayCreateStageResponse * createStage(const APIGatewayCreateStageRequest &request);
    APIGatewayCreateUsagePlanResponse * createUsagePlan(const APIGatewayCreateUsagePlanRequest &request);
    APIGatewayCreateUsagePlanKeyResponse * createUsagePlanKey(const APIGatewayCreateUsagePlanKeyRequest &request);
    APIGatewayDeleteApiKeyResponse * deleteApiKey(const APIGatewayDeleteApiKeyRequest &request);
    APIGatewayDeleteAuthorizerResponse * deleteAuthorizer(const APIGatewayDeleteAuthorizerRequest &request);
    APIGatewayDeleteBasePathMappingResponse * deleteBasePathMapping(const APIGatewayDeleteBasePathMappingRequest &request);
    APIGatewayDeleteClientCertificateResponse * deleteClientCertificate(const APIGatewayDeleteClientCertificateRequest &request);
    APIGatewayDeleteDeploymentResponse * deleteDeployment(const APIGatewayDeleteDeploymentRequest &request);
    APIGatewayDeleteDomainNameResponse * deleteDomainName(const APIGatewayDeleteDomainNameRequest &request);
    APIGatewayDeleteIntegrationResponse * deleteIntegration(const APIGatewayDeleteIntegrationRequest &request);
    APIGatewayDeleteIntegrationResponseResponse * deleteIntegrationResponse(const APIGatewayDeleteIntegrationResponseRequest &request);
    APIGatewayDeleteMethodResponse * deleteMethod(const APIGatewayDeleteMethodRequest &request);
    APIGatewayDeleteMethodResponseResponse * deleteMethodResponse(const APIGatewayDeleteMethodResponseRequest &request);
    APIGatewayDeleteModelResponse * deleteModel(const APIGatewayDeleteModelRequest &request);
    APIGatewayDeleteResourceResponse * deleteResource(const APIGatewayDeleteResourceRequest &request);
    APIGatewayDeleteRestApiResponse * deleteRestApi(const APIGatewayDeleteRestApiRequest &request);
    APIGatewayDeleteStageResponse * deleteStage(const APIGatewayDeleteStageRequest &request);
    APIGatewayDeleteUsagePlanResponse * deleteUsagePlan(const APIGatewayDeleteUsagePlanRequest &request);
    APIGatewayDeleteUsagePlanKeyResponse * deleteUsagePlanKey(const APIGatewayDeleteUsagePlanKeyRequest &request);
    APIGatewayFlushStageAuthorizersCacheResponse * flushStageAuthorizersCache(const APIGatewayFlushStageAuthorizersCacheRequest &request);
    APIGatewayFlushStageCacheResponse * flushStageCache(const APIGatewayFlushStageCacheRequest &request);
    APIGatewayGenerateClientCertificateResponse * generateClientCertificate(const APIGatewayGenerateClientCertificateRequest &request);
    APIGatewayGetAccountResponse * getAccount(const APIGatewayGetAccountRequest &request);
    APIGatewayGetApiKeyResponse * getApiKey(const APIGatewayGetApiKeyRequest &request);
    APIGatewayGetApiKeysResponse * getApiKeys(const APIGatewayGetApiKeysRequest &request);
    APIGatewayGetAuthorizerResponse * getAuthorizer(const APIGatewayGetAuthorizerRequest &request);
    APIGatewayGetAuthorizersResponse * getAuthorizers(const APIGatewayGetAuthorizersRequest &request);
    APIGatewayGetBasePathMappingResponse * getBasePathMapping(const APIGatewayGetBasePathMappingRequest &request);
    APIGatewayGetBasePathMappingsResponse * getBasePathMappings(const APIGatewayGetBasePathMappingsRequest &request);
    APIGatewayGetClientCertificateResponse * getClientCertificate(const APIGatewayGetClientCertificateRequest &request);
    APIGatewayGetClientCertificatesResponse * getClientCertificates(const APIGatewayGetClientCertificatesRequest &request);
    APIGatewayGetDeploymentResponse * getDeployment(const APIGatewayGetDeploymentRequest &request);
    APIGatewayGetDeploymentsResponse * getDeployments(const APIGatewayGetDeploymentsRequest &request);
    APIGatewayGetDomainNameResponse * getDomainName(const APIGatewayGetDomainNameRequest &request);
    APIGatewayGetDomainNamesResponse * getDomainNames(const APIGatewayGetDomainNamesRequest &request);
    APIGatewayGetExportResponse * getExport(const APIGatewayGetExportRequest &request);
    APIGatewayGetIntegrationResponse * getIntegration(const APIGatewayGetIntegrationRequest &request);
    APIGatewayGetIntegrationResponseResponse * getIntegrationResponse(const APIGatewayGetIntegrationResponseRequest &request);
    APIGatewayGetMethodResponse * getMethod(const APIGatewayGetMethodRequest &request);
    APIGatewayGetMethodResponseResponse * getMethodResponse(const APIGatewayGetMethodResponseRequest &request);
    APIGatewayGetModelResponse * getModel(const APIGatewayGetModelRequest &request);
    APIGatewayGetModelTemplateResponse * getModelTemplate(const APIGatewayGetModelTemplateRequest &request);
    APIGatewayGetModelsResponse * getModels(const APIGatewayGetModelsRequest &request);
    APIGatewayGetResourceResponse * getResource(const APIGatewayGetResourceRequest &request);
    APIGatewayGetResourcesResponse * getResources(const APIGatewayGetResourcesRequest &request);
    APIGatewayGetRestApiResponse * getRestApi(const APIGatewayGetRestApiRequest &request);
    APIGatewayGetRestApisResponse * getRestApis(const APIGatewayGetRestApisRequest &request);
    APIGatewayGetSdkResponse * getSdk(const APIGatewayGetSdkRequest &request);
    APIGatewayGetStageResponse * getStage(const APIGatewayGetStageRequest &request);
    APIGatewayGetStagesResponse * getStages(const APIGatewayGetStagesRequest &request);
    APIGatewayGetUsageResponse * getUsage(const APIGatewayGetUsageRequest &request);
    APIGatewayGetUsagePlanResponse * getUsagePlan(const APIGatewayGetUsagePlanRequest &request);
    APIGatewayGetUsagePlanKeyResponse * getUsagePlanKey(const APIGatewayGetUsagePlanKeyRequest &request);
    APIGatewayGetUsagePlanKeysResponse * getUsagePlanKeys(const APIGatewayGetUsagePlanKeysRequest &request);
    APIGatewayGetUsagePlansResponse * getUsagePlans(const APIGatewayGetUsagePlansRequest &request);
    APIGatewayImportApiKeysResponse * importApiKeys(const APIGatewayImportApiKeysRequest &request);
    APIGatewayImportRestApiResponse * importRestApi(const APIGatewayImportRestApiRequest &request);
    APIGatewayPutIntegrationResponse * putIntegration(const APIGatewayPutIntegrationRequest &request);
    APIGatewayPutIntegrationResponseResponse * putIntegrationResponse(const APIGatewayPutIntegrationResponseRequest &request);
    APIGatewayPutMethodResponse * putMethod(const APIGatewayPutMethodRequest &request);
    APIGatewayPutMethodResponseResponse * putMethodResponse(const APIGatewayPutMethodResponseRequest &request);
    APIGatewayPutRestApiResponse * putRestApi(const APIGatewayPutRestApiRequest &request);
    APIGatewayTestInvokeAuthorizerResponse * testInvokeAuthorizer(const APIGatewayTestInvokeAuthorizerRequest &request);
    APIGatewayTestInvokeMethodResponse * testInvokeMethod(const APIGatewayTestInvokeMethodRequest &request);
    APIGatewayUpdateAccountResponse * updateAccount(const APIGatewayUpdateAccountRequest &request);
    APIGatewayUpdateApiKeyResponse * updateApiKey(const APIGatewayUpdateApiKeyRequest &request);
    APIGatewayUpdateAuthorizerResponse * updateAuthorizer(const APIGatewayUpdateAuthorizerRequest &request);
    APIGatewayUpdateBasePathMappingResponse * updateBasePathMapping(const APIGatewayUpdateBasePathMappingRequest &request);
    APIGatewayUpdateClientCertificateResponse * updateClientCertificate(const APIGatewayUpdateClientCertificateRequest &request);
    APIGatewayUpdateDeploymentResponse * updateDeployment(const APIGatewayUpdateDeploymentRequest &request);
    APIGatewayUpdateDomainNameResponse * updateDomainName(const APIGatewayUpdateDomainNameRequest &request);
    APIGatewayUpdateIntegrationResponse * updateIntegration(const APIGatewayUpdateIntegrationRequest &request);
    APIGatewayUpdateIntegrationResponseResponse * updateIntegrationResponse(const APIGatewayUpdateIntegrationResponseRequest &request);
    APIGatewayUpdateMethodResponse * updateMethod(const APIGatewayUpdateMethodRequest &request);
    APIGatewayUpdateMethodResponseResponse * updateMethodResponse(const APIGatewayUpdateMethodResponseRequest &request);
    APIGatewayUpdateModelResponse * updateModel(const APIGatewayUpdateModelRequest &request);
    APIGatewayUpdateResourceResponse * updateResource(const APIGatewayUpdateResourceRequest &request);
    APIGatewayUpdateRestApiResponse * updateRestApi(const APIGatewayUpdateRestApiRequest &request);
    APIGatewayUpdateStageResponse * updateStage(const APIGatewayUpdateStageRequest &request);
    APIGatewayUpdateUsageResponse * updateUsage(const APIGatewayUpdateUsageRequest &request);
    APIGatewayUpdateUsagePlanResponse * updateUsagePlan(const APIGatewayUpdateUsagePlanRequest &request);

private:
    Q_DECLARE_PRIVATE(APIGatewayClient)
    Q_DISABLE_COPY(APIGatewayClient)

};

QTAWS_END_NAMESPACE

#endif
