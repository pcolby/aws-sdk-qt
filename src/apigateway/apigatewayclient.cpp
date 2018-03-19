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
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
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
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
}

/**
 * Create an <a>ApiKey</a> resource.
 *
 * </p <div class="seeAlso"><a href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/create-api-key.html">AWS
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApiKeyResponse * APIGatewayClient::createApiKey(const CreateApiKeyRequest &request)
{

}

/**
 * Adds a new <a>Authorizer</a> resource to an existing <a>RestApi</a>
 *
 * resource> <div class="seeAlso"><a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAuthorizerResponse * APIGatewayClient::createAuthorizer(const CreateAuthorizerRequest &request)
{

}

/**
 * Creates a new <a>BasePathMapping</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBasePathMappingResponse * APIGatewayClient::createBasePathMapping(const CreateBasePathMappingRequest &request)
{

}

/**
 * Creates a <a>Deployment</a> resource, which makes a specified <a>RestApi</a> callable over the
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentResponse * APIGatewayClient::createDeployment(const CreateDeploymentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDocumentationPartResponse * APIGatewayClient::createDocumentationPart(const CreateDocumentationPartRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDocumentationVersionResponse * APIGatewayClient::createDocumentationVersion(const CreateDocumentationVersionRequest &request)
{

}

/**
 * Creates a new domain
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDomainNameResponse * APIGatewayClient::createDomainName(const CreateDomainNameRequest &request)
{

}

/**
 * Adds a new <a>Model</a> resource to an existing <a>RestApi</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateModelResponse * APIGatewayClient::createModel(const CreateModelRequest &request)
{

}

/**
 * Creates a <a>ReqeustValidator</a> of a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRequestValidatorResponse * APIGatewayClient::createRequestValidator(const CreateRequestValidatorRequest &request)
{

}

/**
 * Creates a <a>Resource</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceResponse * APIGatewayClient::createResource(const CreateResourceRequest &request)
{

}

/**
 * Creates a new <a>RestApi</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRestApiResponse * APIGatewayClient::createRestApi(const CreateRestApiRequest &request)
{

}

/**
 * Creates a new <a>Stage</a> resource that references a pre-existing <a>Deployment</a> for the API.
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStageResponse * APIGatewayClient::createStage(const CreateStageRequest &request)
{

}

/**
 * Creates a usage plan with the throttle and quota limits, as well as the associated API stages, specified in the payload.
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUsagePlanResponse * APIGatewayClient::createUsagePlan(const CreateUsagePlanRequest &request)
{

}

/**
 * Creates a usage plan key for adding an existing API key to a usage
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUsagePlanKeyResponse * APIGatewayClient::createUsagePlanKey(const CreateUsagePlanKeyRequest &request)
{

}

/**
 * Creates a VPC link, under the caller's account in a selected region, in an asynchronous operation that typically takes
 * 2-4 minutes to complete and become operational. The caller must have permissions to create and update VPC Endpoint
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateVpcLinkResponse * APIGatewayClient::createVpcLink(const CreateVpcLinkRequest &request)
{

}

/**
 * Deletes the <a>ApiKey</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApiKeyResponse * APIGatewayClient::deleteApiKey(const DeleteApiKeyRequest &request)
{

}

/**
 * Deletes an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAuthorizerResponse * APIGatewayClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{

}

/**
 * Deletes the <a>BasePathMapping</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBasePathMappingResponse * APIGatewayClient::deleteBasePathMapping(const DeleteBasePathMappingRequest &request)
{

}

/**
 * Deletes the <a>ClientCertificate</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClientCertificateResponse * APIGatewayClient::deleteClientCertificate(const DeleteClientCertificateRequest &request)
{

}

/**
 * Deletes a <a>Deployment</a> resource. Deleting a deployment will only succeed if there are no <a>Stage</a> resources
 * associated with
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeploymentResponse * APIGatewayClient::deleteDeployment(const DeleteDeploymentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDocumentationPartResponse * APIGatewayClient::deleteDocumentationPart(const DeleteDocumentationPartRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDocumentationVersionResponse * APIGatewayClient::deleteDocumentationVersion(const DeleteDocumentationVersionRequest &request)
{

}

/**
 * Deletes the <a>DomainName</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDomainNameResponse * APIGatewayClient::deleteDomainName(const DeleteDomainNameRequest &request)
{

}

/**
 * Clears any customization of a <a>GatewayResponse</a> of a specified response type on the given <a>RestApi</a> and resets
 * it with the default
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGatewayResponseResponse * APIGatewayClient::deleteGatewayResponse(const DeleteGatewayResponseRequest &request)
{

}

/**
 * Represents a delete
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIntegrationResponse * APIGatewayClient::deleteIntegration(const DeleteIntegrationRequest &request)
{

}

/**
 * Represents a delete integration
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIntegrationResponseResponse * APIGatewayClient::deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request)
{

}

/**
 * Deletes an existing <a>Method</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMethodResponse * APIGatewayClient::deleteMethod(const DeleteMethodRequest &request)
{

}

/**
 * Deletes an existing <a>MethodResponse</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMethodResponseResponse * APIGatewayClient::deleteMethodResponse(const DeleteMethodResponseRequest &request)
{

}

/**
 * Deletes a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteModelResponse * APIGatewayClient::deleteModel(const DeleteModelRequest &request)
{

}

/**
 * Deletes a <a>RequestValidator</a> of a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRequestValidatorResponse * APIGatewayClient::deleteRequestValidator(const DeleteRequestValidatorRequest &request)
{

}

/**
 * Deletes a <a>Resource</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourceResponse * APIGatewayClient::deleteResource(const DeleteResourceRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRestApiResponse * APIGatewayClient::deleteRestApi(const DeleteRestApiRequest &request)
{

}

/**
 * Deletes a <a>Stage</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStageResponse * APIGatewayClient::deleteStage(const DeleteStageRequest &request)
{

}

/**
 * Deletes a usage plan of a given plan
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUsagePlanResponse * APIGatewayClient::deleteUsagePlan(const DeleteUsagePlanRequest &request)
{

}

/**
 * Deletes a usage plan key and remove the underlying API key from the associated usage
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUsagePlanKeyResponse * APIGatewayClient::deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request)
{

}

/**
 * Deletes an existing <a>VpcLink</a> of a specified
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVpcLinkResponse * APIGatewayClient::deleteVpcLink(const DeleteVpcLinkRequest &request)
{

}

/**
 * Flushes all authorizer cache entries on a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
FlushStageAuthorizersCacheResponse * APIGatewayClient::flushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest &request)
{

}

/**
 * Flushes a stage's
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
FlushStageCacheResponse * APIGatewayClient::flushStageCache(const FlushStageCacheRequest &request)
{

}

/**
 * Generates a <a>ClientCertificate</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GenerateClientCertificateResponse * APIGatewayClient::generateClientCertificate(const GenerateClientCertificateRequest &request)
{

}

/**
 * Gets information about the current <a>Account</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountResponse * APIGatewayClient::getAccount(const GetAccountRequest &request)
{

}

/**
 * Gets information about the current <a>ApiKey</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApiKeyResponse * APIGatewayClient::getApiKey(const GetApiKeyRequest &request)
{

}

/**
 * Gets information about the current <a>ApiKeys</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApiKeysResponse * APIGatewayClient::getApiKeys(const GetApiKeysRequest &request)
{

}

/**
 * Describe an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAuthorizerResponse * APIGatewayClient::getAuthorizer(const GetAuthorizerRequest &request)
{

}

/**
 * Describe an existing <a>Authorizers</a>
 *
 * resource> <div class="seeAlso"><a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAuthorizersResponse * APIGatewayClient::getAuthorizers(const GetAuthorizersRequest &request)
{

}

/**
 * Describe a <a>BasePathMapping</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBasePathMappingResponse * APIGatewayClient::getBasePathMapping(const GetBasePathMappingRequest &request)
{

}

/**
 * Represents a collection of <a>BasePathMapping</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBasePathMappingsResponse * APIGatewayClient::getBasePathMappings(const GetBasePathMappingsRequest &request)
{

}

/**
 * Gets information about the current <a>ClientCertificate</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetClientCertificateResponse * APIGatewayClient::getClientCertificate(const GetClientCertificateRequest &request)
{

}

/**
 * Gets a collection of <a>ClientCertificate</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetClientCertificatesResponse * APIGatewayClient::getClientCertificates(const GetClientCertificatesRequest &request)
{

}

/**
 * Gets information about a <a>Deployment</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentResponse * APIGatewayClient::getDeployment(const GetDeploymentRequest &request)
{

}

/**
 * Gets information about a <a>Deployments</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentsResponse * APIGatewayClient::getDeployments(const GetDeploymentsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDocumentationPartResponse * APIGatewayClient::getDocumentationPart(const GetDocumentationPartRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDocumentationPartsResponse * APIGatewayClient::getDocumentationParts(const GetDocumentationPartsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDocumentationVersionResponse * APIGatewayClient::getDocumentationVersion(const GetDocumentationVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDocumentationVersionsResponse * APIGatewayClient::getDocumentationVersions(const GetDocumentationVersionsRequest &request)
{

}

/**
 * Represents a domain name that is contained in a simpler, more intuitive URL that can be
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDomainNameResponse * APIGatewayClient::getDomainName(const GetDomainNameRequest &request)
{

}

/**
 * Represents a collection of <a>DomainName</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDomainNamesResponse * APIGatewayClient::getDomainNames(const GetDomainNamesRequest &request)
{

}

/**
 * Exports a deployed version of a <a>RestApi</a> in a specified
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportResponse * APIGatewayClient::getExport(const GetExportRequest &request)
{

}

/**
 * Gets a <a>GatewayResponse</a> of a specified response type on the given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGatewayResponseResponse * APIGatewayClient::getGatewayResponse(const GetGatewayResponseRequest &request)
{

}

/**
 * Gets the <a>GatewayResponses</a> collection on the given <a>RestApi</a>. If an API developer has not added any
 * definitions for gateway responses, the result will be the API Gateway-generated default <a>GatewayResponses</a>
 * collection for the supported response
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGatewayResponsesResponse * APIGatewayClient::getGatewayResponses(const GetGatewayResponsesRequest &request)
{

}

/**
 * Get the integration
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntegrationResponse * APIGatewayClient::getIntegration(const GetIntegrationRequest &request)
{

}

/**
 * Represents a get integration
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntegrationResponseResponse * APIGatewayClient::getIntegrationResponse(const GetIntegrationResponseRequest &request)
{

}

/**
 * Describe an existing <a>Method</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMethodResponse * APIGatewayClient::getMethod(const GetMethodRequest &request)
{

}

/**
 * Describes a <a>MethodResponse</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMethodResponseResponse * APIGatewayClient::getMethodResponse(const GetMethodResponseRequest &request)
{

}

/**
 * Describes an existing model defined for a <a>RestApi</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetModelResponse * APIGatewayClient::getModel(const GetModelRequest &request)
{

}

/**
 * Generates a sample mapping template that can be used to transform a payload into the structure of a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetModelTemplateResponse * APIGatewayClient::getModelTemplate(const GetModelTemplateRequest &request)
{

}

/**
 * Describes existing <a>Models</a> defined for a <a>RestApi</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetModelsResponse * APIGatewayClient::getModels(const GetModelsRequest &request)
{

}

/**
 * Gets a <a>RequestValidator</a> of a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRequestValidatorResponse * APIGatewayClient::getRequestValidator(const GetRequestValidatorRequest &request)
{

}

/**
 * Gets the <a>RequestValidators</a> collection of a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRequestValidatorsResponse * APIGatewayClient::getRequestValidators(const GetRequestValidatorsRequest &request)
{

}

/**
 * Lists information about a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceResponse * APIGatewayClient::getResource(const GetResourceRequest &request)
{

}

/**
 * Lists information about a collection of <a>Resource</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourcesResponse * APIGatewayClient::getResources(const GetResourcesRequest &request)
{

}

/**
 * Lists the <a>RestApi</a> resource in the
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRestApiResponse * APIGatewayClient::getRestApi(const GetRestApiRequest &request)
{

}

/**
 * Lists the <a>RestApis</a> resources for your
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRestApisResponse * APIGatewayClient::getRestApis(const GetRestApisRequest &request)
{

}

/**
 * Generates a client SDK for a <a>RestApi</a> and
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSdkResponse * APIGatewayClient::getSdk(const GetSdkRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSdkTypeResponse * APIGatewayClient::getSdkType(const GetSdkTypeRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSdkTypesResponse * APIGatewayClient::getSdkTypes(const GetSdkTypesRequest &request)
{

}

/**
 * Gets information about a <a>Stage</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStageResponse * APIGatewayClient::getStage(const GetStageRequest &request)
{

}

/**
 * Gets information about one or more <a>Stage</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStagesResponse * APIGatewayClient::getStages(const GetStagesRequest &request)
{

}

/**
 * Gets the Tags collection for a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagsResponse * APIGatewayClient::getTags(const GetTagsRequest &request)
{

}

/**
 * Gets the usage data of a usage plan in a specified time
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUsageResponse * APIGatewayClient::getUsage(const GetUsageRequest &request)
{

}

/**
 * Gets a usage plan of a given plan
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUsagePlanResponse * APIGatewayClient::getUsagePlan(const GetUsagePlanRequest &request)
{

}

/**
 * Gets a usage plan key of a given key
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUsagePlanKeyResponse * APIGatewayClient::getUsagePlanKey(const GetUsagePlanKeyRequest &request)
{

}

/**
 * Gets all the usage plan keys representing the API keys added to a specified usage
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUsagePlanKeysResponse * APIGatewayClient::getUsagePlanKeys(const GetUsagePlanKeysRequest &request)
{

}

/**
 * Gets all the usage plans of the caller's
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUsagePlansResponse * APIGatewayClient::getUsagePlans(const GetUsagePlansRequest &request)
{

}

/**
 * Gets a specified VPC link under the caller's account in a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetVpcLinkResponse * APIGatewayClient::getVpcLink(const GetVpcLinkRequest &request)
{

}

/**
 * Gets the <a>VpcLinks</a> collection under the caller's account in a selected
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetVpcLinksResponse * APIGatewayClient::getVpcLinks(const GetVpcLinksRequest &request)
{

}

/**
 * Import API keys from an external source, such as a CSV-formatted
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportApiKeysResponse * APIGatewayClient::importApiKeys(const ImportApiKeysRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportDocumentationPartsResponse * APIGatewayClient::importDocumentationParts(const ImportDocumentationPartsRequest &request)
{

}

/**
 * A feature of the API Gateway control service for creating a new API from an external API definition
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportRestApiResponse * APIGatewayClient::importRestApi(const ImportRestApiRequest &request)
{

}

/**
 * Creates a customization of a <a>GatewayResponse</a> of a specified response type and status code on the given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutGatewayResponseResponse * APIGatewayClient::putGatewayResponse(const PutGatewayResponseRequest &request)
{

}

/**
 * Sets up a method's
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutIntegrationResponse * APIGatewayClient::putIntegration(const PutIntegrationRequest &request)
{

}

/**
 * Represents a put
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutIntegrationResponseResponse * APIGatewayClient::putIntegrationResponse(const PutIntegrationResponseRequest &request)
{

}

/**
 * Add a method to an existing <a>Resource</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutMethodResponse * APIGatewayClient::putMethod(const PutMethodRequest &request)
{

}

/**
 * Adds a <a>MethodResponse</a> to an existing <a>Method</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutMethodResponseResponse * APIGatewayClient::putMethodResponse(const PutMethodResponseRequest &request)
{

}

/**
 * A feature of the API Gateway control service for updating an existing API with an input of external API definitions. The
 * update can take the form of merging the supplied definition into the existing API or overwriting the existing
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRestApiResponse * APIGatewayClient::putRestApi(const PutRestApiRequest &request)
{

}

/**
 * Adds or updates Tags on a gievn
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * APIGatewayClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Simulate the execution of an <a>Authorizer</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 *
 * body> <div class="seeAlso"> <a
 * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable custom
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestInvokeAuthorizerResponse * APIGatewayClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{

}

/**
 * Simulate the execution of a <a>Method</a> in your <a>RestApi</a> with headers, parameters, and an incoming request
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestInvokeMethodResponse * APIGatewayClient::testInvokeMethod(const TestInvokeMethodRequest &request)
{

}

/**
 * Removes Tags from a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * APIGatewayClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Changes information about the current <a>Account</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAccountResponse * APIGatewayClient::updateAccount(const UpdateAccountRequest &request)
{

}

/**
 * Changes information about an <a>ApiKey</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApiKeyResponse * APIGatewayClient::updateApiKey(const UpdateApiKeyRequest &request)
{

}

/**
 * Updates an existing <a>Authorizer</a>
 *
 * resource> <div class="seeAlso"><a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAuthorizerResponse * APIGatewayClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{

}

/**
 * Changes information about the <a>BasePathMapping</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateBasePathMappingResponse * APIGatewayClient::updateBasePathMapping(const UpdateBasePathMappingRequest &request)
{

}

/**
 * Changes information about an <a>ClientCertificate</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateClientCertificateResponse * APIGatewayClient::updateClientCertificate(const UpdateClientCertificateRequest &request)
{

}

/**
 * Changes information about a <a>Deployment</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeploymentResponse * APIGatewayClient::updateDeployment(const UpdateDeploymentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDocumentationPartResponse * APIGatewayClient::updateDocumentationPart(const UpdateDocumentationPartRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDocumentationVersionResponse * APIGatewayClient::updateDocumentationVersion(const UpdateDocumentationVersionRequest &request)
{

}

/**
 * Changes information about the <a>DomainName</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDomainNameResponse * APIGatewayClient::updateDomainName(const UpdateDomainNameRequest &request)
{

}

/**
 * Updates a <a>GatewayResponse</a> of a specified response type on the given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGatewayResponseResponse * APIGatewayClient::updateGatewayResponse(const UpdateGatewayResponseRequest &request)
{

}

/**
 * Represents an update
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIntegrationResponse * APIGatewayClient::updateIntegration(const UpdateIntegrationRequest &request)
{

}

/**
 * Represents an update integration
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIntegrationResponseResponse * APIGatewayClient::updateIntegrationResponse(const UpdateIntegrationResponseRequest &request)
{

}

/**
 * Updates an existing <a>Method</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateMethodResponse * APIGatewayClient::updateMethod(const UpdateMethodRequest &request)
{

}

/**
 * Updates an existing <a>MethodResponse</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateMethodResponseResponse * APIGatewayClient::updateMethodResponse(const UpdateMethodResponseRequest &request)
{

}

/**
 * Changes information about a
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateModelResponse * APIGatewayClient::updateModel(const UpdateModelRequest &request)
{

}

/**
 * Updates a <a>RequestValidator</a> of a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRequestValidatorResponse * APIGatewayClient::updateRequestValidator(const UpdateRequestValidatorRequest &request)
{

}

/**
 * Changes information about a <a>Resource</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResourceResponse * APIGatewayClient::updateResource(const UpdateResourceRequest &request)
{

}

/**
 * Changes information about the specified
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRestApiResponse * APIGatewayClient::updateRestApi(const UpdateRestApiRequest &request)
{

}

/**
 * Changes information about a <a>Stage</a>
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStageResponse * APIGatewayClient::updateStage(const UpdateStageRequest &request)
{

}

/**
 * Grants a temporary extension to the remaining quota of a usage plan associated with a specified API
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUsageResponse * APIGatewayClient::updateUsage(const UpdateUsageRequest &request)
{

}

/**
 * Updates a usage plan of a given plan
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUsagePlanResponse * APIGatewayClient::updateUsagePlan(const UpdateUsagePlanRequest &request)
{

}

/**
 * Updates an existing <a>VpcLink</a> of a specified
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
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
