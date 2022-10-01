// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYV2CLIENT_H
#define QTAWS_APIGATEWAYV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapigatewayv2global.h"

class QNetworkReply;

namespace QtAws {
namespace ApiGatewayV2 {

class ApiGatewayV2ClientPrivate;
class CreateApiRequest;
class CreateApiResponse;
class CreateApiMappingRequest;
class CreateApiMappingResponse;
class CreateAuthorizerRequest;
class CreateAuthorizerResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDomainNameRequest;
class CreateDomainNameResponse;
class CreateIntegrationRequest;
class CreateIntegrationResponse;
class CreateIntegrationResponseRequest;
class CreateIntegrationResponseResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateRouteRequest;
class CreateRouteResponse;
class CreateRouteResponseRequest;
class CreateRouteResponseResponse;
class CreateStageRequest;
class CreateStageResponse;
class CreateVpcLinkRequest;
class CreateVpcLinkResponse;
class DeleteAccessLogSettingsRequest;
class DeleteAccessLogSettingsResponse;
class DeleteApiRequest;
class DeleteApiResponse;
class DeleteApiMappingRequest;
class DeleteApiMappingResponse;
class DeleteAuthorizerRequest;
class DeleteAuthorizerResponse;
class DeleteCorsConfigurationRequest;
class DeleteCorsConfigurationResponse;
class DeleteDeploymentRequest;
class DeleteDeploymentResponse;
class DeleteDomainNameRequest;
class DeleteDomainNameResponse;
class DeleteIntegrationRequest;
class DeleteIntegrationResponse;
class DeleteIntegrationResponseRequest;
class DeleteIntegrationResponseResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteRouteRequest;
class DeleteRouteResponse;
class DeleteRouteRequestParameterRequest;
class DeleteRouteRequestParameterResponse;
class DeleteRouteResponseRequest;
class DeleteRouteResponseResponse;
class DeleteRouteSettingsRequest;
class DeleteRouteSettingsResponse;
class DeleteStageRequest;
class DeleteStageResponse;
class DeleteVpcLinkRequest;
class DeleteVpcLinkResponse;
class ExportApiRequest;
class ExportApiResponse;
class GetApiRequest;
class GetApiResponse;
class GetApiMappingRequest;
class GetApiMappingResponse;
class GetApiMappingsRequest;
class GetApiMappingsResponse;
class GetApisRequest;
class GetApisResponse;
class GetAuthorizerRequest;
class GetAuthorizerResponse;
class GetAuthorizersRequest;
class GetAuthorizersResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetDeploymentsRequest;
class GetDeploymentsResponse;
class GetDomainNameRequest;
class GetDomainNameResponse;
class GetDomainNamesRequest;
class GetDomainNamesResponse;
class GetIntegrationRequest;
class GetIntegrationResponse;
class GetIntegrationResponseRequest;
class GetIntegrationResponseResponse;
class GetIntegrationResponsesRequest;
class GetIntegrationResponsesResponse;
class GetIntegrationsRequest;
class GetIntegrationsResponse;
class GetModelRequest;
class GetModelResponse;
class GetModelTemplateRequest;
class GetModelTemplateResponse;
class GetModelsRequest;
class GetModelsResponse;
class GetRouteRequest;
class GetRouteResponse;
class GetRouteResponseRequest;
class GetRouteResponseResponse;
class GetRouteResponsesRequest;
class GetRouteResponsesResponse;
class GetRoutesRequest;
class GetRoutesResponse;
class GetStageRequest;
class GetStageResponse;
class GetStagesRequest;
class GetStagesResponse;
class GetTagsRequest;
class GetTagsResponse;
class GetVpcLinkRequest;
class GetVpcLinkResponse;
class GetVpcLinksRequest;
class GetVpcLinksResponse;
class ImportApiRequest;
class ImportApiResponse;
class ReimportApiRequest;
class ReimportApiResponse;
class ResetAuthorizersCacheRequest;
class ResetAuthorizersCacheResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApiRequest;
class UpdateApiResponse;
class UpdateApiMappingRequest;
class UpdateApiMappingResponse;
class UpdateAuthorizerRequest;
class UpdateAuthorizerResponse;
class UpdateDeploymentRequest;
class UpdateDeploymentResponse;
class UpdateDomainNameRequest;
class UpdateDomainNameResponse;
class UpdateIntegrationRequest;
class UpdateIntegrationResponse;
class UpdateIntegrationResponseRequest;
class UpdateIntegrationResponseResponse;
class UpdateModelRequest;
class UpdateModelResponse;
class UpdateRouteRequest;
class UpdateRouteResponse;
class UpdateRouteResponseRequest;
class UpdateRouteResponseResponse;
class UpdateStageRequest;
class UpdateStageResponse;
class UpdateVpcLinkRequest;
class UpdateVpcLinkResponse;

class QTAWSAPIGATEWAYV2_EXPORT ApiGatewayV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApiGatewayV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApiGatewayV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApiResponse * createApi(const CreateApiRequest &request);
    CreateApiMappingResponse * createApiMapping(const CreateApiMappingRequest &request);
    CreateAuthorizerResponse * createAuthorizer(const CreateAuthorizerRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDomainNameResponse * createDomainName(const CreateDomainNameRequest &request);
    CreateIntegrationResponse * createIntegration(const CreateIntegrationRequest &request);
    CreateIntegrationResponseResponse * createIntegrationResponse(const CreateIntegrationResponseRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateRouteResponse * createRoute(const CreateRouteRequest &request);
    CreateRouteResponseResponse * createRouteResponse(const CreateRouteResponseRequest &request);
    CreateStageResponse * createStage(const CreateStageRequest &request);
    CreateVpcLinkResponse * createVpcLink(const CreateVpcLinkRequest &request);
    DeleteAccessLogSettingsResponse * deleteAccessLogSettings(const DeleteAccessLogSettingsRequest &request);
    DeleteApiResponse * deleteApi(const DeleteApiRequest &request);
    DeleteApiMappingResponse * deleteApiMapping(const DeleteApiMappingRequest &request);
    DeleteAuthorizerResponse * deleteAuthorizer(const DeleteAuthorizerRequest &request);
    DeleteCorsConfigurationResponse * deleteCorsConfiguration(const DeleteCorsConfigurationRequest &request);
    DeleteDeploymentResponse * deleteDeployment(const DeleteDeploymentRequest &request);
    DeleteDomainNameResponse * deleteDomainName(const DeleteDomainNameRequest &request);
    DeleteIntegrationResponse * deleteIntegration(const DeleteIntegrationRequest &request);
    DeleteIntegrationResponseResponse * deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteRouteResponse * deleteRoute(const DeleteRouteRequest &request);
    DeleteRouteRequestParameterResponse * deleteRouteRequestParameter(const DeleteRouteRequestParameterRequest &request);
    DeleteRouteResponseResponse * deleteRouteResponse(const DeleteRouteResponseRequest &request);
    DeleteRouteSettingsResponse * deleteRouteSettings(const DeleteRouteSettingsRequest &request);
    DeleteStageResponse * deleteStage(const DeleteStageRequest &request);
    DeleteVpcLinkResponse * deleteVpcLink(const DeleteVpcLinkRequest &request);
    ExportApiResponse * exportApi(const ExportApiRequest &request);
    GetApiResponse * getApi(const GetApiRequest &request);
    GetApiMappingResponse * getApiMapping(const GetApiMappingRequest &request);
    GetApiMappingsResponse * getApiMappings(const GetApiMappingsRequest &request);
    GetApisResponse * getApis(const GetApisRequest &request);
    GetAuthorizerResponse * getAuthorizer(const GetAuthorizerRequest &request);
    GetAuthorizersResponse * getAuthorizers(const GetAuthorizersRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentsResponse * getDeployments(const GetDeploymentsRequest &request);
    GetDomainNameResponse * getDomainName(const GetDomainNameRequest &request);
    GetDomainNamesResponse * getDomainNames(const GetDomainNamesRequest &request);
    GetIntegrationResponse * getIntegration(const GetIntegrationRequest &request);
    GetIntegrationResponseResponse * getIntegrationResponse(const GetIntegrationResponseRequest &request);
    GetIntegrationResponsesResponse * getIntegrationResponses(const GetIntegrationResponsesRequest &request);
    GetIntegrationsResponse * getIntegrations(const GetIntegrationsRequest &request);
    GetModelResponse * getModel(const GetModelRequest &request);
    GetModelTemplateResponse * getModelTemplate(const GetModelTemplateRequest &request);
    GetModelsResponse * getModels(const GetModelsRequest &request);
    GetRouteResponse * getRoute(const GetRouteRequest &request);
    GetRouteResponseResponse * getRouteResponse(const GetRouteResponseRequest &request);
    GetRouteResponsesResponse * getRouteResponses(const GetRouteResponsesRequest &request);
    GetRoutesResponse * getRoutes(const GetRoutesRequest &request);
    GetStageResponse * getStage(const GetStageRequest &request);
    GetStagesResponse * getStages(const GetStagesRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    GetVpcLinkResponse * getVpcLink(const GetVpcLinkRequest &request);
    GetVpcLinksResponse * getVpcLinks(const GetVpcLinksRequest &request);
    ImportApiResponse * importApi(const ImportApiRequest &request);
    ReimportApiResponse * reimportApi(const ReimportApiRequest &request);
    ResetAuthorizersCacheResponse * resetAuthorizersCache(const ResetAuthorizersCacheRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApiResponse * updateApi(const UpdateApiRequest &request);
    UpdateApiMappingResponse * updateApiMapping(const UpdateApiMappingRequest &request);
    UpdateAuthorizerResponse * updateAuthorizer(const UpdateAuthorizerRequest &request);
    UpdateDeploymentResponse * updateDeployment(const UpdateDeploymentRequest &request);
    UpdateDomainNameResponse * updateDomainName(const UpdateDomainNameRequest &request);
    UpdateIntegrationResponse * updateIntegration(const UpdateIntegrationRequest &request);
    UpdateIntegrationResponseResponse * updateIntegrationResponse(const UpdateIntegrationResponseRequest &request);
    UpdateModelResponse * updateModel(const UpdateModelRequest &request);
    UpdateRouteResponse * updateRoute(const UpdateRouteRequest &request);
    UpdateRouteResponseResponse * updateRouteResponse(const UpdateRouteResponseRequest &request);
    UpdateStageResponse * updateStage(const UpdateStageRequest &request);
    UpdateVpcLinkResponse * updateVpcLink(const UpdateVpcLinkRequest &request);

private:
    Q_DECLARE_PRIVATE(ApiGatewayV2Client)
    Q_DISABLE_COPY(ApiGatewayV2Client)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
