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

#include "apigatewayclient.h"
#include "apigatewayclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace APIGateway {

/**
 * @class  APIGatewayClient
 *
 * @brief  Client for Amazon API Gateway
 *
 * <fullname>Amazon API Gateway</fullname>
 *
 * Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 * Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 * other publicly addressable web services that are hosted outside of
 */

/**
 * @brief  Constructs a new APIGatewayClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
APIGatewayClient::APIGatewayClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
{
    Q_D(APIGatewayClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new APIGatewayClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
APIGatewayClient::APIGatewayClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
{
    Q_D(APIGatewayClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Create an <a>ApiKey</a> resource.
 *
 * </p <div class="seeAlso"><a href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
 */
CreateApiKeyResponse * APIGatewayClient::createApiKey(const CreateApiKeyRequest &request)
{

}

/**
 * Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
 *
 * resource> <div class="seeAlso"><a
 */
CreateAuthorizerResponse * APIGatewayClient::createAuthorizer(const CreateAuthorizerRequest &request)
{

}

/**
 * Creates a new <a>BasePathMapping</a>
 */
CreateBasePathMappingResponse * APIGatewayClient::createBasePathMapping(const CreateBasePathMappingRequest &request)
{

}

/**
 * Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a> callable over the
 */
CreateDeploymentResponse * APIGatewayClient::createDeployment(const CreateDeploymentRequest &request)
{

}

/**
 */
CreateDocumentationPartResponse * APIGatewayClient::createDocumentationPart(const CreateDocumentationPartRequest &request)
{

}

/**
 */
CreateDocumentationVersionResponse * APIGatewayClient::createDocumentationVersion(const CreateDocumentationVersionRequest &request)
{

}

/**
 * Creates a new domain
 */
CreateDomainNameResponse * APIGatewayClient::createDomainName(const CreateDomainNameRequest &request)
{

}

/**
 * Adds a new <a>Model</a> resource to an existing <a>RestApi</a>
 */
CreateModelResponse * APIGatewayClient::createModel(const CreateModelRequest &request)
{

}

/**
 * Creates a <a>ReqeustValidator</a> of a given
 */
CreateRequestValidatorResponse * APIGatewayClient::createRequestValidator(const CreateRequestValidatorRequest &request)
{

}

/**
 * Creates a <a>Resource</a>
 */
CreateResourceResponse * APIGatewayClient::createResource(const CreateResourceRequest &request)
{

}

/**
 * Creates a new <a>RestApi</a>
 */
CreateRestApiResponse * APIGatewayClient::createRestApi(const CreateRestApiRequest &request)
{

}

/**
 * Creates a new <a>Stage</a> resource that references a pre-existing <a>Deployment</a> for the API.
 */
CreateStageResponse * APIGatewayClient::createStage(const CreateStageRequest &request)
{

}

/**
 * Creates a usage plan with the throttle and quota limits, as well as the associated API stages, specified in the payload.
 */
CreateUsagePlanResponse * APIGatewayClient::createUsagePlan(const CreateUsagePlanRequest &request)
{

}

/**
 * Creates a usage plan key for adding an existing API key to a usage
 */
CreateUsagePlanKeyResponse * APIGatewayClient::createUsagePlanKey(const CreateUsagePlanKeyRequest &request)
{

}

/**
 * Creates a VPC link, under the caller's account in a selected region, in an asynchronous operation that typically takes
 * 2-4 minutes to complete and become operational. The caller must have permissions to create and update VPC Endpoint
 */
CreateVpcLinkResponse * APIGatewayClient::createVpcLink(const CreateVpcLinkRequest &request)
{

}

/**
 * Deletes the <a>ApiKey</a>
 */
DeleteApiKeyResponse * APIGatewayClient::deleteApiKey(const DeleteApiKeyRequest &request)
{

}

/**
 * Deletes an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
DeleteAuthorizerResponse * APIGatewayClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{

}

/**
 * Deletes the <a>BasePathMapping</a>
 */
DeleteBasePathMappingResponse * APIGatewayClient::deleteBasePathMapping(const DeleteBasePathMappingRequest &request)
{

}

/**
 * Deletes the <a>ClientCertificate</a>
 */
DeleteClientCertificateResponse * APIGatewayClient::deleteClientCertificate(const DeleteClientCertificateRequest &request)
{

}

/**
 * Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed if there are no <a>Stage</a> resources
 * associated with
 */
DeleteDeploymentResponse * APIGatewayClient::deleteDeployment(const DeleteDeploymentRequest &request)
{

}

/**
 */
DeleteDocumentationPartResponse * APIGatewayClient::deleteDocumentationPart(const DeleteDocumentationPartRequest &request)
{

}

/**
 */
DeleteDocumentationVersionResponse * APIGatewayClient::deleteDocumentationVersion(const DeleteDocumentationVersionRequest &request)
{

}

/**
 * Deletes the <a>DomainName</a>
 */
DeleteDomainNameResponse * APIGatewayClient::deleteDomainName(const DeleteDomainNameRequest &request)
{

}

/**
 * Clears any customization of a <a>GatewayResponse</a> of a specified response type on the given <a>RestApi</a> and resets
 * it with the default
 */
DeleteGatewayResponseResponse * APIGatewayClient::deleteGatewayResponse(const DeleteGatewayResponseRequest &request)
{

}

/**
 * Represents a delete
 */
DeleteIntegrationResponse * APIGatewayClient::deleteIntegration(const DeleteIntegrationRequest &request)
{

}

/**
 * Represents a delete integration
 */
DeleteIntegrationResponseResponse * APIGatewayClient::deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request)
{

}

/**
 * Deletes an existing <a>Method</a>
 */
DeleteMethodResponse * APIGatewayClient::deleteMethod(const DeleteMethodRequest &request)
{

}

/**
 * Deletes an existing <a>MethodResponse</a>
 */
DeleteMethodResponseResponse * APIGatewayClient::deleteMethodResponse(const DeleteMethodResponseRequest &request)
{

}

/**
 * Deletes a
 */
DeleteModelResponse * APIGatewayClient::deleteModel(const DeleteModelRequest &request)
{

}

/**
 * Deletes a <a>RequestValidator</a> of a given
 */
DeleteRequestValidatorResponse * APIGatewayClient::deleteRequestValidator(const DeleteRequestValidatorRequest &request)
{

}

/**
 * Deletes a <a>Resource</a>
 */
DeleteResourceResponse * APIGatewayClient::deleteResource(const DeleteResourceRequest &request)
{

}

/**
 * Deletes the specified
 */
DeleteRestApiResponse * APIGatewayClient::deleteRestApi(const DeleteRestApiRequest &request)
{

}

/**
 * Deletes a <a>Stage</a>
 */
DeleteStageResponse * APIGatewayClient::deleteStage(const DeleteStageRequest &request)
{

}

/**
 * Deletes a usage plan of a given plan
 */
DeleteUsagePlanResponse * APIGatewayClient::deleteUsagePlan(const DeleteUsagePlanRequest &request)
{

}

/**
 * Deletes a usage plan key and remove the underlying API key from the associated usage
 */
DeleteUsagePlanKeyResponse * APIGatewayClient::deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request)
{

}

/**
 * Deletes an existing <a>VpcLink</a> of a specified
 */
DeleteVpcLinkResponse * APIGatewayClient::deleteVpcLink(const DeleteVpcLinkRequest &request)
{

}

/**
 * Flushes all authorizer cache entries on a
 */
FlushStageAuthorizersCacheResponse * APIGatewayClient::flushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest &request)
{

}

/**
 * Flushes a stage's
 */
FlushStageCacheResponse * APIGatewayClient::flushStageCache(const FlushStageCacheRequest &request)
{

}

/**
 * Generates a <a>ClientCertificate</a>
 */
GenerateClientCertificateResponse * APIGatewayClient::generateClientCertificate(const GenerateClientCertificateRequest &request)
{

}

/**
 * Gets information about the current <a>Account</a>
 */
GetAccountResponse * APIGatewayClient::getAccount(const GetAccountRequest &request)
{

}

/**
 * Gets information about the current <a>ApiKey</a>
 */
GetApiKeyResponse * APIGatewayClient::getApiKey(const GetApiKeyRequest &request)
{

}

/**
 * Gets information about the current <a>ApiKeys</a>
 */
GetApiKeysResponse * APIGatewayClient::getApiKeys(const GetApiKeysRequest &request)
{

}

/**
 * Describe an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
GetAuthorizerResponse * APIGatewayClient::getAuthorizer(const GetAuthorizerRequest &request)
{

}

/**
 * Describe an existing <a>Authorizers</a>
 *
 * resource> <div class="seeAlso"><a
 */
GetAuthorizersResponse * APIGatewayClient::getAuthorizers(const GetAuthorizersRequest &request)
{

}

/**
 * Describe a <a>BasePathMapping</a>
 */
GetBasePathMappingResponse * APIGatewayClient::getBasePathMapping(const GetBasePathMappingRequest &request)
{

}

/**
 * Represents a collection of <a>BasePathMapping</a>
 */
GetBasePathMappingsResponse * APIGatewayClient::getBasePathMappings(const GetBasePathMappingsRequest &request)
{

}

/**
 * Gets information about the current <a>ClientCertificate</a>
 */
GetClientCertificateResponse * APIGatewayClient::getClientCertificate(const GetClientCertificateRequest &request)
{

}

/**
 * Gets a collection of <a>ClientCertificate</a>
 */
GetClientCertificatesResponse * APIGatewayClient::getClientCertificates(const GetClientCertificatesRequest &request)
{

}

/**
 * Gets information about a <a>Deployment</a>
 */
GetDeploymentResponse * APIGatewayClient::getDeployment(const GetDeploymentRequest &request)
{

}

/**
 * Gets information about a <a>Deployments</a>
 */
GetDeploymentsResponse * APIGatewayClient::getDeployments(const GetDeploymentsRequest &request)
{

}

/**
 */
GetDocumentationPartResponse * APIGatewayClient::getDocumentationPart(const GetDocumentationPartRequest &request)
{

}

/**
 */
GetDocumentationPartsResponse * APIGatewayClient::getDocumentationParts(const GetDocumentationPartsRequest &request)
{

}

/**
 */
GetDocumentationVersionResponse * APIGatewayClient::getDocumentationVersion(const GetDocumentationVersionRequest &request)
{

}

/**
 */
GetDocumentationVersionsResponse * APIGatewayClient::getDocumentationVersions(const GetDocumentationVersionsRequest &request)
{

}

/**
 * Represents a domain name that is contained in a simpler, more intuitive URL that can be
 */
GetDomainNameResponse * APIGatewayClient::getDomainName(const GetDomainNameRequest &request)
{

}

/**
 * Represents a collection of <a>DomainName</a>
 */
GetDomainNamesResponse * APIGatewayClient::getDomainNames(const GetDomainNamesRequest &request)
{

}

/**
 * Exports a deployed version of a <a>RestApi</a> in a specified
 */
GetExportResponse * APIGatewayClient::getExport(const GetExportRequest &request)
{

}

/**
 * Gets a <a>GatewayResponse</a> of a specified response type on the given
 */
GetGatewayResponseResponse * APIGatewayClient::getGatewayResponse(const GetGatewayResponseRequest &request)
{

}

/**
 * Gets the <a>GatewayResponses</a> collection on the given <a>RestApi</a>. If an API developer has not added any
 * definitions for gateway responses, the result will be the API Gateway-generated default <a>GatewayResponses</a>
 * collection for the supported response
 */
GetGatewayResponsesResponse * APIGatewayClient::getGatewayResponses(const GetGatewayResponsesRequest &request)
{

}

/**
 * Get the integration
 */
GetIntegrationResponse * APIGatewayClient::getIntegration(const GetIntegrationRequest &request)
{

}

/**
 * Represents a get integration
 */
GetIntegrationResponseResponse * APIGatewayClient::getIntegrationResponse(const GetIntegrationResponseRequest &request)
{

}

/**
 * Describe an existing <a>Method</a>
 */
GetMethodResponse * APIGatewayClient::getMethod(const GetMethodRequest &request)
{

}

/**
 * Describes a <a>MethodResponse</a>
 */
GetMethodResponseResponse * APIGatewayClient::getMethodResponse(const GetMethodResponseRequest &request)
{

}

/**
 * Describes an existing model defined for a <a>RestApi</a>
 */
GetModelResponse * APIGatewayClient::getModel(const GetModelRequest &request)
{

}

/**
 * Generates a sample mapping template that can be used to transform a payload into the structure of a
 */
GetModelTemplateResponse * APIGatewayClient::getModelTemplate(const GetModelTemplateRequest &request)
{

}

/**
 * Describes existing <a>Models</a> defined for a <a>RestApi</a>
 */
GetModelsResponse * APIGatewayClient::getModels(const GetModelsRequest &request)
{

}

/**
 * Gets a <a>RequestValidator</a> of a given
 */
GetRequestValidatorResponse * APIGatewayClient::getRequestValidator(const GetRequestValidatorRequest &request)
{

}

/**
 * Gets the <a>RequestValidators</a> collection of a given
 */
GetRequestValidatorsResponse * APIGatewayClient::getRequestValidators(const GetRequestValidatorsRequest &request)
{

}

/**
 * Lists information about a
 */
GetResourceResponse * APIGatewayClient::getResource(const GetResourceRequest &request)
{

}

/**
 * Lists information about a collection of <a>Resource</a>
 */
GetResourcesResponse * APIGatewayClient::getResources(const GetResourcesRequest &request)
{

}

/**
 * Lists the <a>RestApi</a> resource in the
 */
GetRestApiResponse * APIGatewayClient::getRestApi(const GetRestApiRequest &request)
{

}

/**
 * Lists the <a>RestApis</a> resources for your
 */
GetRestApisResponse * APIGatewayClient::getRestApis(const GetRestApisRequest &request)
{

}

/**
 * Generates a client SDK for a <a>RestApi</a> and
 */
GetSdkResponse * APIGatewayClient::getSdk(const GetSdkRequest &request)
{

}

/**
 */
GetSdkTypeResponse * APIGatewayClient::getSdkType(const GetSdkTypeRequest &request)
{

}

/**
 */
GetSdkTypesResponse * APIGatewayClient::getSdkTypes(const GetSdkTypesRequest &request)
{

}

/**
 * Gets information about a <a>Stage</a>
 */
GetStageResponse * APIGatewayClient::getStage(const GetStageRequest &request)
{

}

/**
 * Gets information about one or more <a>Stage</a>
 */
GetStagesResponse * APIGatewayClient::getStages(const GetStagesRequest &request)
{

}

/**
 * Gets the Tags collection for a given
 */
GetTagsResponse * APIGatewayClient::getTags(const GetTagsRequest &request)
{

}

/**
 * Gets the usage data of a usage plan in a specified time
 */
GetUsageResponse * APIGatewayClient::getUsage(const GetUsageRequest &request)
{

}

/**
 * Gets a usage plan of a given plan
 */
GetUsagePlanResponse * APIGatewayClient::getUsagePlan(const GetUsagePlanRequest &request)
{

}

/**
 * Gets a usage plan key of a given key
 */
GetUsagePlanKeyResponse * APIGatewayClient::getUsagePlanKey(const GetUsagePlanKeyRequest &request)
{

}

/**
 * Gets all the usage plan keys representing the API keys added to a specified usage
 */
GetUsagePlanKeysResponse * APIGatewayClient::getUsagePlanKeys(const GetUsagePlanKeysRequest &request)
{

}

/**
 * Gets all the usage plans of the caller's
 */
GetUsagePlansResponse * APIGatewayClient::getUsagePlans(const GetUsagePlansRequest &request)
{

}

/**
 * Gets a specified VPC link under the caller's account in a
 */
GetVpcLinkResponse * APIGatewayClient::getVpcLink(const GetVpcLinkRequest &request)
{

}

/**
 * Gets the <a>VpcLinks</a> collection under the caller's account in a selected
 */
GetVpcLinksResponse * APIGatewayClient::getVpcLinks(const GetVpcLinksRequest &request)
{

}

/**
 * Import API keys from an external source, such as a CSV-formatted
 */
ImportApiKeysResponse * APIGatewayClient::importApiKeys(const ImportApiKeysRequest &request)
{

}

/**
 */
ImportDocumentationPartsResponse * APIGatewayClient::importDocumentationParts(const ImportDocumentationPartsRequest &request)
{

}

/**
 * A feature of the API Gateway control service for creating a new API from an external API definition
 */
ImportRestApiResponse * APIGatewayClient::importRestApi(const ImportRestApiRequest &request)
{

}

/**
 * Creates a customization of a <a>GatewayResponse</a> of a specified response type and status code on the given
 */
PutGatewayResponseResponse * APIGatewayClient::putGatewayResponse(const PutGatewayResponseRequest &request)
{

}

/**
 * Sets up a method's
 */
PutIntegrationResponse * APIGatewayClient::putIntegration(const PutIntegrationRequest &request)
{

}

/**
 * Represents a put
 */
PutIntegrationResponseResponse * APIGatewayClient::putIntegrationResponse(const PutIntegrationResponseRequest &request)
{

}

/**
 * Add a method to an existing <a>Resource</a>
 */
PutMethodResponse * APIGatewayClient::putMethod(const PutMethodRequest &request)
{

}

/**
 * Adds a <a>MethodResponse</a> to an existing <a>Method</a>
 */
PutMethodResponseResponse * APIGatewayClient::putMethodResponse(const PutMethodResponseRequest &request)
{

}

/**
 * A feature of the API Gateway control service for updating an existing API with an input of external API definitions. The
 * update can take the form of merging the supplied definition into the existing API or overwriting the existing
 */
PutRestApiResponse * APIGatewayClient::putRestApi(const PutRestApiRequest &request)
{

}

/**
 * Adds or updates Tags on a gievn
 */
TagResourceResponse * APIGatewayClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 *
 * body> <div class="seeAlso"> <a
 * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable custom
 */
TestInvokeAuthorizerResponse * APIGatewayClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{

}

/**
 * Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 */
TestInvokeMethodResponse * APIGatewayClient::testInvokeMethod(const TestInvokeMethodRequest &request)
{

}

/**
 * Removes Tags from a given
 */
UntagResourceResponse * APIGatewayClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Changes information about the current <a>Account</a>
 */
UpdateAccountResponse * APIGatewayClient::updateAccount(const UpdateAccountRequest &request)
{

}

/**
 * Changes information about an <a>ApiKey</a>
 */
UpdateApiKeyResponse * APIGatewayClient::updateApiKey(const UpdateApiKeyRequest &request)
{

}

/**
 * Updates an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 */
UpdateAuthorizerResponse * APIGatewayClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{

}

/**
 * Changes information about the <a>BasePathMapping</a>
 */
UpdateBasePathMappingResponse * APIGatewayClient::updateBasePathMapping(const UpdateBasePathMappingRequest &request)
{

}

/**
 * Changes information about an <a>ClientCertificate</a>
 */
UpdateClientCertificateResponse * APIGatewayClient::updateClientCertificate(const UpdateClientCertificateRequest &request)
{

}

/**
 * Changes information about a <a>Deployment</a>
 */
UpdateDeploymentResponse * APIGatewayClient::updateDeployment(const UpdateDeploymentRequest &request)
{

}

/**
 */
UpdateDocumentationPartResponse * APIGatewayClient::updateDocumentationPart(const UpdateDocumentationPartRequest &request)
{

}

/**
 */
UpdateDocumentationVersionResponse * APIGatewayClient::updateDocumentationVersion(const UpdateDocumentationVersionRequest &request)
{

}

/**
 * Changes information about the <a>DomainName</a>
 */
UpdateDomainNameResponse * APIGatewayClient::updateDomainName(const UpdateDomainNameRequest &request)
{

}

/**
 * Updates a <a>GatewayResponse</a> of a specified response type on the given
 */
UpdateGatewayResponseResponse * APIGatewayClient::updateGatewayResponse(const UpdateGatewayResponseRequest &request)
{

}

/**
 * Represents an update
 */
UpdateIntegrationResponse * APIGatewayClient::updateIntegration(const UpdateIntegrationRequest &request)
{

}

/**
 * Represents an update integration
 */
UpdateIntegrationResponseResponse * APIGatewayClient::updateIntegrationResponse(const UpdateIntegrationResponseRequest &request)
{

}

/**
 * Updates an existing <a>Method</a>
 */
UpdateMethodResponse * APIGatewayClient::updateMethod(const UpdateMethodRequest &request)
{

}

/**
 * Updates an existing <a>MethodResponse</a>
 */
UpdateMethodResponseResponse * APIGatewayClient::updateMethodResponse(const UpdateMethodResponseRequest &request)
{

}

/**
 * Changes information about a
 */
UpdateModelResponse * APIGatewayClient::updateModel(const UpdateModelRequest &request)
{

}

/**
 * Updates a <a>RequestValidator</a> of a given
 */
UpdateRequestValidatorResponse * APIGatewayClient::updateRequestValidator(const UpdateRequestValidatorRequest &request)
{

}

/**
 * Changes information about a <a>Resource</a>
 */
UpdateResourceResponse * APIGatewayClient::updateResource(const UpdateResourceRequest &request)
{

}

/**
 * Changes information about the specified
 */
UpdateRestApiResponse * APIGatewayClient::updateRestApi(const UpdateRestApiRequest &request)
{

}

/**
 * Changes information about a <a>Stage</a>
 */
UpdateStageResponse * APIGatewayClient::updateStage(const UpdateStageRequest &request)
{

}

/**
 * Grants a temporary extension to the remaining quota of a usage plan associated with a specified API
 */
UpdateUsageResponse * APIGatewayClient::updateUsage(const UpdateUsageRequest &request)
{

}

/**
 * Updates a usage plan of a given plan
 */
UpdateUsagePlanResponse * APIGatewayClient::updateUsagePlan(const UpdateUsagePlanRequest &request)
{

}

/**
 * Updates an existing <a>VpcLink</a> of a specified
 */
UpdateVpcLinkResponse * APIGatewayClient::updateVpcLink(const UpdateVpcLinkRequest &request)
{

}

/**
 * @internal
 *
 * @class  APIGatewayClientPrivate
 *
 * @brief  Private implementation for APIGatewayClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new APIGatewayClientPrivate object.
 *
 * @param  q  Pointer to this object's public APIGatewayClient instance.
 */
APIGatewayClientPrivate::APIGatewayClientPrivate(APIGatewayClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace APIGateway
} // namespace AWS
