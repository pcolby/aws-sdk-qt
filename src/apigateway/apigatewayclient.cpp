/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "apigatewayclient.h"
#include "apigatewayclient_p.h"

#include "core/awssignaturev4.h"
#include "createapikeyrequest.h"
#include "createapikeyresponse.h"
#include "createauthorizerrequest.h"
#include "createauthorizerresponse.h"
#include "createbasepathmappingrequest.h"
#include "createbasepathmappingresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdocumentationpartrequest.h"
#include "createdocumentationpartresponse.h"
#include "createdocumentationversionrequest.h"
#include "createdocumentationversionresponse.h"
#include "createdomainnamerequest.h"
#include "createdomainnameresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createrequestvalidatorrequest.h"
#include "createrequestvalidatorresponse.h"
#include "createresourcerequest.h"
#include "createresourceresponse.h"
#include "createrestapirequest.h"
#include "createrestapiresponse.h"
#include "createstagerequest.h"
#include "createstageresponse.h"
#include "createusageplanrequest.h"
#include "createusageplanresponse.h"
#include "createusageplankeyrequest.h"
#include "createusageplankeyresponse.h"
#include "createvpclinkrequest.h"
#include "createvpclinkresponse.h"
#include "deleteapikeyrequest.h"
#include "deleteapikeyresponse.h"
#include "deleteauthorizerrequest.h"
#include "deleteauthorizerresponse.h"
#include "deletebasepathmappingrequest.h"
#include "deletebasepathmappingresponse.h"
#include "deleteclientcertificaterequest.h"
#include "deleteclientcertificateresponse.h"
#include "deletedeploymentrequest.h"
#include "deletedeploymentresponse.h"
#include "deletedocumentationpartrequest.h"
#include "deletedocumentationpartresponse.h"
#include "deletedocumentationversionrequest.h"
#include "deletedocumentationversionresponse.h"
#include "deletedomainnamerequest.h"
#include "deletedomainnameresponse.h"
#include "deletegatewayresponserequest.h"
#include "deletegatewayresponseresponse.h"
#include "deleteintegrationrequest.h"
#include "deleteintegrationresponse.h"
#include "deleteintegrationresponserequest.h"
#include "deleteintegrationresponseresponse.h"
#include "deletemethodrequest.h"
#include "deletemethodresponse.h"
#include "deletemethodresponserequest.h"
#include "deletemethodresponseresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deleterequestvalidatorrequest.h"
#include "deleterequestvalidatorresponse.h"
#include "deleteresourcerequest.h"
#include "deleteresourceresponse.h"
#include "deleterestapirequest.h"
#include "deleterestapiresponse.h"
#include "deletestagerequest.h"
#include "deletestageresponse.h"
#include "deleteusageplanrequest.h"
#include "deleteusageplanresponse.h"
#include "deleteusageplankeyrequest.h"
#include "deleteusageplankeyresponse.h"
#include "deletevpclinkrequest.h"
#include "deletevpclinkresponse.h"
#include "flushstageauthorizerscacherequest.h"
#include "flushstageauthorizerscacheresponse.h"
#include "flushstagecacherequest.h"
#include "flushstagecacheresponse.h"
#include "generateclientcertificaterequest.h"
#include "generateclientcertificateresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getapikeyrequest.h"
#include "getapikeyresponse.h"
#include "getapikeysrequest.h"
#include "getapikeysresponse.h"
#include "getauthorizerrequest.h"
#include "getauthorizerresponse.h"
#include "getauthorizersrequest.h"
#include "getauthorizersresponse.h"
#include "getbasepathmappingrequest.h"
#include "getbasepathmappingresponse.h"
#include "getbasepathmappingsrequest.h"
#include "getbasepathmappingsresponse.h"
#include "getclientcertificaterequest.h"
#include "getclientcertificateresponse.h"
#include "getclientcertificatesrequest.h"
#include "getclientcertificatesresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getdeploymentsrequest.h"
#include "getdeploymentsresponse.h"
#include "getdocumentationpartrequest.h"
#include "getdocumentationpartresponse.h"
#include "getdocumentationpartsrequest.h"
#include "getdocumentationpartsresponse.h"
#include "getdocumentationversionrequest.h"
#include "getdocumentationversionresponse.h"
#include "getdocumentationversionsrequest.h"
#include "getdocumentationversionsresponse.h"
#include "getdomainnamerequest.h"
#include "getdomainnameresponse.h"
#include "getdomainnamesrequest.h"
#include "getdomainnamesresponse.h"
#include "getexportrequest.h"
#include "getexportresponse.h"
#include "getgatewayresponserequest.h"
#include "getgatewayresponseresponse.h"
#include "getgatewayresponsesrequest.h"
#include "getgatewayresponsesresponse.h"
#include "getintegrationrequest.h"
#include "getintegrationresponse.h"
#include "getintegrationresponserequest.h"
#include "getintegrationresponseresponse.h"
#include "getmethodrequest.h"
#include "getmethodresponse.h"
#include "getmethodresponserequest.h"
#include "getmethodresponseresponse.h"
#include "getmodelrequest.h"
#include "getmodelresponse.h"
#include "getmodeltemplaterequest.h"
#include "getmodeltemplateresponse.h"
#include "getmodelsrequest.h"
#include "getmodelsresponse.h"
#include "getrequestvalidatorrequest.h"
#include "getrequestvalidatorresponse.h"
#include "getrequestvalidatorsrequest.h"
#include "getrequestvalidatorsresponse.h"
#include "getresourcerequest.h"
#include "getresourceresponse.h"
#include "getresourcesrequest.h"
#include "getresourcesresponse.h"
#include "getrestapirequest.h"
#include "getrestapiresponse.h"
#include "getrestapisrequest.h"
#include "getrestapisresponse.h"
#include "getsdkrequest.h"
#include "getsdkresponse.h"
#include "getsdktyperequest.h"
#include "getsdktyperesponse.h"
#include "getsdktypesrequest.h"
#include "getsdktypesresponse.h"
#include "getstagerequest.h"
#include "getstageresponse.h"
#include "getstagesrequest.h"
#include "getstagesresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "getusagerequest.h"
#include "getusageresponse.h"
#include "getusageplanrequest.h"
#include "getusageplanresponse.h"
#include "getusageplankeyrequest.h"
#include "getusageplankeyresponse.h"
#include "getusageplankeysrequest.h"
#include "getusageplankeysresponse.h"
#include "getusageplansrequest.h"
#include "getusageplansresponse.h"
#include "getvpclinkrequest.h"
#include "getvpclinkresponse.h"
#include "getvpclinksrequest.h"
#include "getvpclinksresponse.h"
#include "importapikeysrequest.h"
#include "importapikeysresponse.h"
#include "importdocumentationpartsrequest.h"
#include "importdocumentationpartsresponse.h"
#include "importrestapirequest.h"
#include "importrestapiresponse.h"
#include "putgatewayresponserequest.h"
#include "putgatewayresponseresponse.h"
#include "putintegrationrequest.h"
#include "putintegrationresponse.h"
#include "putintegrationresponserequest.h"
#include "putintegrationresponseresponse.h"
#include "putmethodrequest.h"
#include "putmethodresponse.h"
#include "putmethodresponserequest.h"
#include "putmethodresponseresponse.h"
#include "putrestapirequest.h"
#include "putrestapiresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerresponse.h"
#include "testinvokemethodrequest.h"
#include "testinvokemethodresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountrequest.h"
#include "updateaccountresponse.h"
#include "updateapikeyrequest.h"
#include "updateapikeyresponse.h"
#include "updateauthorizerrequest.h"
#include "updateauthorizerresponse.h"
#include "updatebasepathmappingrequest.h"
#include "updatebasepathmappingresponse.h"
#include "updateclientcertificaterequest.h"
#include "updateclientcertificateresponse.h"
#include "updatedeploymentrequest.h"
#include "updatedeploymentresponse.h"
#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartresponse.h"
#include "updatedocumentationversionrequest.h"
#include "updatedocumentationversionresponse.h"
#include "updatedomainnamerequest.h"
#include "updatedomainnameresponse.h"
#include "updategatewayresponserequest.h"
#include "updategatewayresponseresponse.h"
#include "updateintegrationrequest.h"
#include "updateintegrationresponse.h"
#include "updateintegrationresponserequest.h"
#include "updateintegrationresponseresponse.h"
#include "updatemethodrequest.h"
#include "updatemethodresponse.h"
#include "updatemethodresponserequest.h"
#include "updatemethodresponseresponse.h"
#include "updatemodelrequest.h"
#include "updatemodelresponse.h"
#include "updaterequestvalidatorrequest.h"
#include "updaterequestvalidatorresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"
#include "updaterestapirequest.h"
#include "updaterestapiresponse.h"
#include "updatestagerequest.h"
#include "updatestageresponse.h"
#include "updateusagerequest.h"
#include "updateusageresponse.h"
#include "updateusageplanrequest.h"
#include "updateusageplanresponse.h"
#include "updatevpclinkrequest.h"
#include "updatevpclinkresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
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
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new APIGatewayClientPrivate(this), parent)
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
    return qobject_cast<CreateApiKeyResponse *>(send(request));
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
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
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
    return qobject_cast<CreateBasePathMappingResponse *>(send(request));
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
    return qobject_cast<CreateDeploymentResponse *>(send(request));
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
    return qobject_cast<CreateDocumentationPartResponse *>(send(request));
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
    return qobject_cast<CreateDocumentationVersionResponse *>(send(request));
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
    return qobject_cast<CreateDomainNameResponse *>(send(request));
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
    return qobject_cast<CreateModelResponse *>(send(request));
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
    return qobject_cast<CreateRequestValidatorResponse *>(send(request));
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
    return qobject_cast<CreateResourceResponse *>(send(request));
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
    return qobject_cast<CreateRestApiResponse *>(send(request));
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
    return qobject_cast<CreateStageResponse *>(send(request));
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
    return qobject_cast<CreateUsagePlanResponse *>(send(request));
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
    return qobject_cast<CreateUsagePlanKeyResponse *>(send(request));
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
    return qobject_cast<CreateVpcLinkResponse *>(send(request));
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
    return qobject_cast<DeleteApiKeyResponse *>(send(request));
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
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
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
    return qobject_cast<DeleteBasePathMappingResponse *>(send(request));
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
    return qobject_cast<DeleteClientCertificateResponse *>(send(request));
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
    return qobject_cast<DeleteDeploymentResponse *>(send(request));
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
    return qobject_cast<DeleteDocumentationPartResponse *>(send(request));
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
    return qobject_cast<DeleteDocumentationVersionResponse *>(send(request));
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
    return qobject_cast<DeleteDomainNameResponse *>(send(request));
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
    return qobject_cast<DeleteGatewayResponseResponse *>(send(request));
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
    return qobject_cast<DeleteIntegrationResponse *>(send(request));
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
    return qobject_cast<DeleteIntegrationResponseResponse *>(send(request));
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
    return qobject_cast<DeleteMethodResponse *>(send(request));
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
    return qobject_cast<DeleteMethodResponseResponse *>(send(request));
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
    return qobject_cast<DeleteModelResponse *>(send(request));
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
    return qobject_cast<DeleteRequestValidatorResponse *>(send(request));
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
    return qobject_cast<DeleteResourceResponse *>(send(request));
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
    return qobject_cast<DeleteRestApiResponse *>(send(request));
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
    return qobject_cast<DeleteStageResponse *>(send(request));
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
    return qobject_cast<DeleteUsagePlanResponse *>(send(request));
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
    return qobject_cast<DeleteUsagePlanKeyResponse *>(send(request));
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
    return qobject_cast<DeleteVpcLinkResponse *>(send(request));
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
    return qobject_cast<FlushStageAuthorizersCacheResponse *>(send(request));
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
    return qobject_cast<FlushStageCacheResponse *>(send(request));
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
    return qobject_cast<GenerateClientCertificateResponse *>(send(request));
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
    return qobject_cast<GetAccountResponse *>(send(request));
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
    return qobject_cast<GetApiKeyResponse *>(send(request));
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
    return qobject_cast<GetApiKeysResponse *>(send(request));
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
    return qobject_cast<GetAuthorizerResponse *>(send(request));
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
    return qobject_cast<GetAuthorizersResponse *>(send(request));
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
    return qobject_cast<GetBasePathMappingResponse *>(send(request));
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
    return qobject_cast<GetBasePathMappingsResponse *>(send(request));
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
    return qobject_cast<GetClientCertificateResponse *>(send(request));
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
    return qobject_cast<GetClientCertificatesResponse *>(send(request));
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
    return qobject_cast<GetDeploymentResponse *>(send(request));
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
    return qobject_cast<GetDeploymentsResponse *>(send(request));
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
    return qobject_cast<GetDocumentationPartResponse *>(send(request));
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
    return qobject_cast<GetDocumentationPartsResponse *>(send(request));
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
    return qobject_cast<GetDocumentationVersionResponse *>(send(request));
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
    return qobject_cast<GetDocumentationVersionsResponse *>(send(request));
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
    return qobject_cast<GetDomainNameResponse *>(send(request));
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
    return qobject_cast<GetDomainNamesResponse *>(send(request));
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
    return qobject_cast<GetExportResponse *>(send(request));
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
    return qobject_cast<GetGatewayResponseResponse *>(send(request));
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
    return qobject_cast<GetGatewayResponsesResponse *>(send(request));
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
    return qobject_cast<GetIntegrationResponse *>(send(request));
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
    return qobject_cast<GetIntegrationResponseResponse *>(send(request));
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
    return qobject_cast<GetMethodResponse *>(send(request));
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
    return qobject_cast<GetMethodResponseResponse *>(send(request));
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
    return qobject_cast<GetModelResponse *>(send(request));
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
    return qobject_cast<GetModelTemplateResponse *>(send(request));
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
    return qobject_cast<GetModelsResponse *>(send(request));
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
    return qobject_cast<GetRequestValidatorResponse *>(send(request));
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
    return qobject_cast<GetRequestValidatorsResponse *>(send(request));
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
    return qobject_cast<GetResourceResponse *>(send(request));
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
    return qobject_cast<GetResourcesResponse *>(send(request));
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
    return qobject_cast<GetRestApiResponse *>(send(request));
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
    return qobject_cast<GetRestApisResponse *>(send(request));
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
    return qobject_cast<GetSdkResponse *>(send(request));
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
    return qobject_cast<GetSdkTypeResponse *>(send(request));
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
    return qobject_cast<GetSdkTypesResponse *>(send(request));
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
    return qobject_cast<GetStageResponse *>(send(request));
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
    return qobject_cast<GetStagesResponse *>(send(request));
}

/**
 * Gets the <a>Tags</a> collection for a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagsResponse * APIGatewayClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
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
    return qobject_cast<GetUsageResponse *>(send(request));
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
    return qobject_cast<GetUsagePlanResponse *>(send(request));
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
    return qobject_cast<GetUsagePlanKeyResponse *>(send(request));
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
    return qobject_cast<GetUsagePlanKeysResponse *>(send(request));
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
    return qobject_cast<GetUsagePlansResponse *>(send(request));
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
    return qobject_cast<GetVpcLinkResponse *>(send(request));
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
    return qobject_cast<GetVpcLinksResponse *>(send(request));
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
    return qobject_cast<ImportApiKeysResponse *>(send(request));
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
    return qobject_cast<ImportDocumentationPartsResponse *>(send(request));
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
    return qobject_cast<ImportRestApiResponse *>(send(request));
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
    return qobject_cast<PutGatewayResponseResponse *>(send(request));
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
    return qobject_cast<PutIntegrationResponse *>(send(request));
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
    return qobject_cast<PutIntegrationResponseResponse *>(send(request));
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
    return qobject_cast<PutMethodResponse *>(send(request));
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
    return qobject_cast<PutMethodResponseResponse *>(send(request));
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
    return qobject_cast<PutRestApiResponse *>(send(request));
}

/**
 * Adds or updates a tag on a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * APIGatewayClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
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
    return qobject_cast<TestInvokeAuthorizerResponse *>(send(request));
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
    return qobject_cast<TestInvokeMethodResponse *>(send(request));
}

/**
 * Removes a tag from a given
 *
 * @param  request Request to send to Amazon API Gateway.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * APIGatewayClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
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
    return qobject_cast<UpdateAccountResponse *>(send(request));
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
    return qobject_cast<UpdateApiKeyResponse *>(send(request));
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
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
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
    return qobject_cast<UpdateBasePathMappingResponse *>(send(request));
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
    return qobject_cast<UpdateClientCertificateResponse *>(send(request));
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
    return qobject_cast<UpdateDeploymentResponse *>(send(request));
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
    return qobject_cast<UpdateDocumentationPartResponse *>(send(request));
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
    return qobject_cast<UpdateDocumentationVersionResponse *>(send(request));
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
    return qobject_cast<UpdateDomainNameResponse *>(send(request));
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
    return qobject_cast<UpdateGatewayResponseResponse *>(send(request));
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
    return qobject_cast<UpdateIntegrationResponse *>(send(request));
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
    return qobject_cast<UpdateIntegrationResponseResponse *>(send(request));
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
    return qobject_cast<UpdateMethodResponse *>(send(request));
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
    return qobject_cast<UpdateMethodResponseResponse *>(send(request));
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
    return qobject_cast<UpdateModelResponse *>(send(request));
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
    return qobject_cast<UpdateRequestValidatorResponse *>(send(request));
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
    return qobject_cast<UpdateResourceResponse *>(send(request));
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
    return qobject_cast<UpdateRestApiResponse *>(send(request));
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
    return qobject_cast<UpdateStageResponse *>(send(request));
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
    return qobject_cast<UpdateUsageResponse *>(send(request));
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
    return qobject_cast<UpdateUsagePlanResponse *>(send(request));
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
    return qobject_cast<UpdateVpcLinkResponse *>(send(request));
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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace APIGateway
} // namespace QtAws
