// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

/*!
 * \namespace QtAws::ApiGateway
 * \brief Contains classess for accessing Amazon API Gateway.
 *
 * \inmodule QtAwsApiGateway
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::ApiGatewayClient
 * \brief The ApiGatewayClient class provides access to the Amazon API Gateway service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 */

/*!
 * \brief Constructs a ApiGatewayClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApiGatewayClient::ApiGatewayClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayClientPrivate(this), parent)
{
    Q_D(ApiGatewayClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * \overload ApiGatewayClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ApiGatewayClient::ApiGatewayClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApiGatewayClientPrivate(this), parent)
{
    Q_D(ApiGatewayClient);
    d->apiVersion = QStringLiteral("2015-07-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("apigateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon API Gateway");
    d->serviceName = QStringLiteral("apigateway");
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an ApiKey resource.
 */
CreateApiKeyResponse * ApiGatewayClient::createApiKey(const CreateApiKeyRequest &request)
{
    return qobject_cast<CreateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new Authorizer resource to an existing RestApi
 */
CreateAuthorizerResponse * ApiGatewayClient::createAuthorizer(const CreateAuthorizerRequest &request)
{
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new BasePathMapping
 */
CreateBasePathMappingResponse * ApiGatewayClient::createBasePathMapping(const CreateBasePathMappingRequest &request)
{
    return qobject_cast<CreateBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Deployment resource, which makes a specified RestApi callable over the
 */
CreateDeploymentResponse * ApiGatewayClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a documentation
 */
CreateDocumentationPartResponse * ApiGatewayClient::createDocumentationPart(const CreateDocumentationPartRequest &request)
{
    return qobject_cast<CreateDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a documentation
 */
CreateDocumentationVersionResponse * ApiGatewayClient::createDocumentationVersion(const CreateDocumentationVersionRequest &request)
{
    return qobject_cast<CreateDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new domain
 */
CreateDomainNameResponse * ApiGatewayClient::createDomainName(const CreateDomainNameRequest &request)
{
    return qobject_cast<CreateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new Model resource to an existing RestApi
 */
CreateModelResponse * ApiGatewayClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a RequestValidator of a given
 */
CreateRequestValidatorResponse * ApiGatewayClient::createRequestValidator(const CreateRequestValidatorRequest &request)
{
    return qobject_cast<CreateRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Resource
 */
CreateResourceResponse * ApiGatewayClient::createResource(const CreateResourceRequest &request)
{
    return qobject_cast<CreateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new RestApi
 */
CreateRestApiResponse * ApiGatewayClient::createRestApi(const CreateRestApiRequest &request)
{
    return qobject_cast<CreateRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Stage resource that references a pre-existing Deployment for the API.
 */
CreateStageResponse * ApiGatewayClient::createStage(const CreateStageRequest &request)
{
    return qobject_cast<CreateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage plan with the throttle and quota limits, as well as the associated API stages, specified in the payload.
 */
CreateUsagePlanResponse * ApiGatewayClient::createUsagePlan(const CreateUsagePlanRequest &request)
{
    return qobject_cast<CreateUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage plan key for adding an existing API key to a usage
 */
CreateUsagePlanKeyResponse * ApiGatewayClient::createUsagePlanKey(const CreateUsagePlanKeyRequest &request)
{
    return qobject_cast<CreateUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * CreateVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC link, under the caller's account in a selected region, in an asynchronous operation that typically takes
 * 2-4 minutes to complete and become operational. The caller must have permissions to create and update VPC Endpoint
 */
CreateVpcLinkResponse * ApiGatewayClient::createVpcLink(const CreateVpcLinkRequest &request)
{
    return qobject_cast<CreateVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the ApiKey
 */
DeleteApiKeyResponse * ApiGatewayClient::deleteApiKey(const DeleteApiKeyRequest &request)
{
    return qobject_cast<DeleteApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Authorizer
 */
DeleteAuthorizerResponse * ApiGatewayClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the BasePathMapping
 */
DeleteBasePathMappingResponse * ApiGatewayClient::deleteBasePathMapping(const DeleteBasePathMappingRequest &request)
{
    return qobject_cast<DeleteBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the ClientCertificate
 */
DeleteClientCertificateResponse * ApiGatewayClient::deleteClientCertificate(const DeleteClientCertificateRequest &request)
{
    return qobject_cast<DeleteClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Deployment resource. Deleting a deployment will only succeed if there are no Stage resources associated with
 */
DeleteDeploymentResponse * ApiGatewayClient::deleteDeployment(const DeleteDeploymentRequest &request)
{
    return qobject_cast<DeleteDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a documentation
 */
DeleteDocumentationPartResponse * ApiGatewayClient::deleteDocumentationPart(const DeleteDocumentationPartRequest &request)
{
    return qobject_cast<DeleteDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a documentation
 */
DeleteDocumentationVersionResponse * ApiGatewayClient::deleteDocumentationVersion(const DeleteDocumentationVersionRequest &request)
{
    return qobject_cast<DeleteDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the DomainName
 */
DeleteDomainNameResponse * ApiGatewayClient::deleteDomainName(const DeleteDomainNameRequest &request)
{
    return qobject_cast<DeleteDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears any customization of a GatewayResponse of a specified response type on the given RestApi and resets it with the
 * default
 */
DeleteGatewayResponseResponse * ApiGatewayClient::deleteGatewayResponse(const DeleteGatewayResponseRequest &request)
{
    return qobject_cast<DeleteGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a delete
 */
DeleteIntegrationResponse * ApiGatewayClient::deleteIntegration(const DeleteIntegrationRequest &request)
{
    return qobject_cast<DeleteIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a delete integration
 */
DeleteIntegrationResponseResponse * ApiGatewayClient::deleteIntegrationResponse(const DeleteIntegrationResponseRequest &request)
{
    return qobject_cast<DeleteIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Method
 */
DeleteMethodResponse * ApiGatewayClient::deleteMethod(const DeleteMethodRequest &request)
{
    return qobject_cast<DeleteMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing MethodResponse
 */
DeleteMethodResponseResponse * ApiGatewayClient::deleteMethodResponse(const DeleteMethodResponseRequest &request)
{
    return qobject_cast<DeleteMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteModelResponse * ApiGatewayClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a RequestValidator of a given
 */
DeleteRequestValidatorResponse * ApiGatewayClient::deleteRequestValidator(const DeleteRequestValidatorRequest &request)
{
    return qobject_cast<DeleteRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Resource
 */
DeleteResourceResponse * ApiGatewayClient::deleteResource(const DeleteResourceRequest &request)
{
    return qobject_cast<DeleteResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRestApiResponse * ApiGatewayClient::deleteRestApi(const DeleteRestApiRequest &request)
{
    return qobject_cast<DeleteRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Stage
 */
DeleteStageResponse * ApiGatewayClient::deleteStage(const DeleteStageRequest &request)
{
    return qobject_cast<DeleteStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a usage plan of a given plan
 */
DeleteUsagePlanResponse * ApiGatewayClient::deleteUsagePlan(const DeleteUsagePlanRequest &request)
{
    return qobject_cast<DeleteUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a usage plan key and remove the underlying API key from the associated usage
 */
DeleteUsagePlanKeyResponse * ApiGatewayClient::deleteUsagePlanKey(const DeleteUsagePlanKeyRequest &request)
{
    return qobject_cast<DeleteUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * DeleteVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing VpcLink of a specified
 */
DeleteVpcLinkResponse * ApiGatewayClient::deleteVpcLink(const DeleteVpcLinkRequest &request)
{
    return qobject_cast<DeleteVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * FlushStageAuthorizersCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Flushes all authorizer cache entries on a
 */
FlushStageAuthorizersCacheResponse * ApiGatewayClient::flushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest &request)
{
    return qobject_cast<FlushStageAuthorizersCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * FlushStageCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Flushes a stage's
 */
FlushStageCacheResponse * ApiGatewayClient::flushStageCache(const FlushStageCacheRequest &request)
{
    return qobject_cast<FlushStageCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GenerateClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a ClientCertificate
 */
GenerateClientCertificateResponse * ApiGatewayClient::generateClientCertificate(const GenerateClientCertificateRequest &request)
{
    return qobject_cast<GenerateClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current Account
 */
GetAccountResponse * ApiGatewayClient::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current ApiKey
 */
GetApiKeyResponse * ApiGatewayClient::getApiKey(const GetApiKeyRequest &request)
{
    return qobject_cast<GetApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetApiKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current ApiKeys
 */
GetApiKeysResponse * ApiGatewayClient::getApiKeys(const GetApiKeysRequest &request)
{
    return qobject_cast<GetApiKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing Authorizer
 */
GetAuthorizerResponse * ApiGatewayClient::getAuthorizer(const GetAuthorizerRequest &request)
{
    return qobject_cast<GetAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetAuthorizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing Authorizers
 */
GetAuthorizersResponse * ApiGatewayClient::getAuthorizers(const GetAuthorizersRequest &request)
{
    return qobject_cast<GetAuthorizersResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a BasePathMapping
 */
GetBasePathMappingResponse * ApiGatewayClient::getBasePathMapping(const GetBasePathMappingRequest &request)
{
    return qobject_cast<GetBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetBasePathMappingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a collection of BasePathMapping
 */
GetBasePathMappingsResponse * ApiGatewayClient::getBasePathMappings(const GetBasePathMappingsRequest &request)
{
    return qobject_cast<GetBasePathMappingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the current ClientCertificate
 */
GetClientCertificateResponse * ApiGatewayClient::getClientCertificate(const GetClientCertificateRequest &request)
{
    return qobject_cast<GetClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetClientCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a collection of ClientCertificate
 */
GetClientCertificatesResponse * ApiGatewayClient::getClientCertificates(const GetClientCertificatesRequest &request)
{
    return qobject_cast<GetClientCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Deployment
 */
GetDeploymentResponse * ApiGatewayClient::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Deployments
 */
GetDeploymentsResponse * ApiGatewayClient::getDeployments(const GetDeploymentsRequest &request)
{
    return qobject_cast<GetDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a documentation
 */
GetDocumentationPartResponse * ApiGatewayClient::getDocumentationPart(const GetDocumentationPartRequest &request)
{
    return qobject_cast<GetDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDocumentationPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets documentation
 */
GetDocumentationPartsResponse * ApiGatewayClient::getDocumentationParts(const GetDocumentationPartsRequest &request)
{
    return qobject_cast<GetDocumentationPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a documentation
 */
GetDocumentationVersionResponse * ApiGatewayClient::getDocumentationVersion(const GetDocumentationVersionRequest &request)
{
    return qobject_cast<GetDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDocumentationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets documentation
 */
GetDocumentationVersionsResponse * ApiGatewayClient::getDocumentationVersions(const GetDocumentationVersionsRequest &request)
{
    return qobject_cast<GetDocumentationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a domain name that is contained in a simpler, more intuitive URL that can be
 */
GetDomainNameResponse * ApiGatewayClient::getDomainName(const GetDomainNameRequest &request)
{
    return qobject_cast<GetDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a collection of DomainName
 */
GetDomainNamesResponse * ApiGatewayClient::getDomainNames(const GetDomainNamesRequest &request)
{
    return qobject_cast<GetDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a deployed version of a RestApi in a specified
 */
GetExportResponse * ApiGatewayClient::getExport(const GetExportRequest &request)
{
    return qobject_cast<GetExportResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a GatewayResponse of a specified response type on the given
 */
GetGatewayResponseResponse * ApiGatewayClient::getGatewayResponse(const GetGatewayResponseRequest &request)
{
    return qobject_cast<GetGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetGatewayResponsesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the GatewayResponses collection on the given RestApi. If an API developer has not added any definitions for gateway
 * responses, the result will be the API Gateway-generated default GatewayResponses collection for the supported response
 */
GetGatewayResponsesResponse * ApiGatewayClient::getGatewayResponses(const GetGatewayResponsesRequest &request)
{
    return qobject_cast<GetGatewayResponsesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the integration
 */
GetIntegrationResponse * ApiGatewayClient::getIntegration(const GetIntegrationRequest &request)
{
    return qobject_cast<GetIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a get integration
 */
GetIntegrationResponseResponse * ApiGatewayClient::getIntegrationResponse(const GetIntegrationResponseRequest &request)
{
    return qobject_cast<GetIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an existing Method
 */
GetMethodResponse * ApiGatewayClient::getMethod(const GetMethodRequest &request)
{
    return qobject_cast<GetMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a MethodResponse
 */
GetMethodResponseResponse * ApiGatewayClient::getMethodResponse(const GetMethodResponseRequest &request)
{
    return qobject_cast<GetMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an existing model defined for a RestApi
 */
GetModelResponse * ApiGatewayClient::getModel(const GetModelRequest &request)
{
    return qobject_cast<GetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetModelTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a sample mapping template that can be used to transform a payload into the structure of a
 */
GetModelTemplateResponse * ApiGatewayClient::getModelTemplate(const GetModelTemplateRequest &request)
{
    return qobject_cast<GetModelTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes existing Models defined for a RestApi
 */
GetModelsResponse * ApiGatewayClient::getModels(const GetModelsRequest &request)
{
    return qobject_cast<GetModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a RequestValidator of a given
 */
GetRequestValidatorResponse * ApiGatewayClient::getRequestValidator(const GetRequestValidatorRequest &request)
{
    return qobject_cast<GetRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetRequestValidatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the RequestValidators collection of a given
 */
GetRequestValidatorsResponse * ApiGatewayClient::getRequestValidators(const GetRequestValidatorsRequest &request)
{
    return qobject_cast<GetRequestValidatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a
 */
GetResourceResponse * ApiGatewayClient::getResource(const GetResourceRequest &request)
{
    return qobject_cast<GetResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about a collection of Resource
 */
GetResourcesResponse * ApiGatewayClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the RestApi resource in the
 */
GetRestApiResponse * ApiGatewayClient::getRestApi(const GetRestApiRequest &request)
{
    return qobject_cast<GetRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetRestApisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the RestApis resources for your
 */
GetRestApisResponse * ApiGatewayClient::getRestApis(const GetRestApisRequest &request)
{
    return qobject_cast<GetRestApisResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetSdkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a client SDK for a RestApi and
 */
GetSdkResponse * ApiGatewayClient::getSdk(const GetSdkRequest &request)
{
    return qobject_cast<GetSdkResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetSdkTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an SDK
 */
GetSdkTypeResponse * ApiGatewayClient::getSdkType(const GetSdkTypeRequest &request)
{
    return qobject_cast<GetSdkTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetSdkTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets SDK
 */
GetSdkTypesResponse * ApiGatewayClient::getSdkTypes(const GetSdkTypesRequest &request)
{
    return qobject_cast<GetSdkTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Stage
 */
GetStageResponse * ApiGatewayClient::getStage(const GetStageRequest &request)
{
    return qobject_cast<GetStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetStagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more Stage
 */
GetStagesResponse * ApiGatewayClient::getStages(const GetStagesRequest &request)
{
    return qobject_cast<GetStagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Tags collection for a given
 */
GetTagsResponse * ApiGatewayClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the usage data of a usage plan in a specified time
 */
GetUsageResponse * ApiGatewayClient::getUsage(const GetUsageRequest &request)
{
    return qobject_cast<GetUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a usage plan of a given plan
 */
GetUsagePlanResponse * ApiGatewayClient::getUsagePlan(const GetUsagePlanRequest &request)
{
    return qobject_cast<GetUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetUsagePlanKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a usage plan key of a given key
 */
GetUsagePlanKeyResponse * ApiGatewayClient::getUsagePlanKey(const GetUsagePlanKeyRequest &request)
{
    return qobject_cast<GetUsagePlanKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetUsagePlanKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the usage plan keys representing the API keys added to a specified usage
 */
GetUsagePlanKeysResponse * ApiGatewayClient::getUsagePlanKeys(const GetUsagePlanKeysRequest &request)
{
    return qobject_cast<GetUsagePlanKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetUsagePlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets all the usage plans of the caller's
 */
GetUsagePlansResponse * ApiGatewayClient::getUsagePlans(const GetUsagePlansRequest &request)
{
    return qobject_cast<GetUsagePlansResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a specified VPC link under the caller's account in a
 */
GetVpcLinkResponse * ApiGatewayClient::getVpcLink(const GetVpcLinkRequest &request)
{
    return qobject_cast<GetVpcLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * GetVpcLinksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the VpcLinks collection under the caller's account in a selected
 */
GetVpcLinksResponse * ApiGatewayClient::getVpcLinks(const GetVpcLinksRequest &request)
{
    return qobject_cast<GetVpcLinksResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * ImportApiKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Import API keys from an external source, such as a CSV-formatted
 */
ImportApiKeysResponse * ApiGatewayClient::importApiKeys(const ImportApiKeysRequest &request)
{
    return qobject_cast<ImportApiKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * ImportDocumentationPartsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports documentation
 */
ImportDocumentationPartsResponse * ApiGatewayClient::importDocumentationParts(const ImportDocumentationPartsRequest &request)
{
    return qobject_cast<ImportDocumentationPartsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * ImportRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A feature of the API Gateway control service for creating a new API from an external API definition
 */
ImportRestApiResponse * ApiGatewayClient::importRestApi(const ImportRestApiRequest &request)
{
    return qobject_cast<ImportRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a customization of a GatewayResponse of a specified response type and status code on the given
 */
PutGatewayResponseResponse * ApiGatewayClient::putGatewayResponse(const PutGatewayResponseRequest &request)
{
    return qobject_cast<PutGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets up a method's
 */
PutIntegrationResponse * ApiGatewayClient::putIntegration(const PutIntegrationRequest &request)
{
    return qobject_cast<PutIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents a put
 */
PutIntegrationResponseResponse * ApiGatewayClient::putIntegrationResponse(const PutIntegrationResponseRequest &request)
{
    return qobject_cast<PutIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a method to an existing Resource
 */
PutMethodResponse * ApiGatewayClient::putMethod(const PutMethodRequest &request)
{
    return qobject_cast<PutMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a MethodResponse to an existing Method
 */
PutMethodResponseResponse * ApiGatewayClient::putMethodResponse(const PutMethodResponseRequest &request)
{
    return qobject_cast<PutMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * PutRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A feature of the API Gateway control service for updating an existing API with an input of external API definitions. The
 * update can take the form of merging the supplied definition into the existing API or overwriting the existing
 */
PutRestApiResponse * ApiGatewayClient::putRestApi(const PutRestApiRequest &request)
{
    return qobject_cast<PutRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates a tag on a given
 */
TagResourceResponse * ApiGatewayClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * TestInvokeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate the execution of an Authorizer in your RestApi with headers, parameters, and an incoming request
 */
TestInvokeAuthorizerResponse * ApiGatewayClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{
    return qobject_cast<TestInvokeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * TestInvokeMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Simulate the invocation of a Method in your RestApi with headers, parameters, and an incoming request
 */
TestInvokeMethodResponse * ApiGatewayClient::testInvokeMethod(const TestInvokeMethodRequest &request)
{
    return qobject_cast<TestInvokeMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a given
 */
UntagResourceResponse * ApiGatewayClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the current Account
 */
UpdateAccountResponse * ApiGatewayClient::updateAccount(const UpdateAccountRequest &request)
{
    return qobject_cast<UpdateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateApiKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about an ApiKey
 */
UpdateApiKeyResponse * ApiGatewayClient::updateApiKey(const UpdateApiKeyRequest &request)
{
    return qobject_cast<UpdateApiKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Authorizer
 */
UpdateAuthorizerResponse * ApiGatewayClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateBasePathMappingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the BasePathMapping
 */
UpdateBasePathMappingResponse * ApiGatewayClient::updateBasePathMapping(const UpdateBasePathMappingRequest &request)
{
    return qobject_cast<UpdateBasePathMappingResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateClientCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about an ClientCertificate
 */
UpdateClientCertificateResponse * ApiGatewayClient::updateClientCertificate(const UpdateClientCertificateRequest &request)
{
    return qobject_cast<UpdateClientCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a Deployment
 */
UpdateDeploymentResponse * ApiGatewayClient::updateDeployment(const UpdateDeploymentRequest &request)
{
    return qobject_cast<UpdateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateDocumentationPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a documentation
 */
UpdateDocumentationPartResponse * ApiGatewayClient::updateDocumentationPart(const UpdateDocumentationPartRequest &request)
{
    return qobject_cast<UpdateDocumentationPartResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateDocumentationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a documentation
 */
UpdateDocumentationVersionResponse * ApiGatewayClient::updateDocumentationVersion(const UpdateDocumentationVersionRequest &request)
{
    return qobject_cast<UpdateDocumentationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateDomainNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the DomainName
 */
UpdateDomainNameResponse * ApiGatewayClient::updateDomainName(const UpdateDomainNameRequest &request)
{
    return qobject_cast<UpdateDomainNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateGatewayResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a GatewayResponse of a specified response type on the given
 */
UpdateGatewayResponseResponse * ApiGatewayClient::updateGatewayResponse(const UpdateGatewayResponseRequest &request)
{
    return qobject_cast<UpdateGatewayResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents an update
 */
UpdateIntegrationResponse * ApiGatewayClient::updateIntegration(const UpdateIntegrationRequest &request)
{
    return qobject_cast<UpdateIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateIntegrationResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents an update integration
 */
UpdateIntegrationResponseResponse * ApiGatewayClient::updateIntegrationResponse(const UpdateIntegrationResponseRequest &request)
{
    return qobject_cast<UpdateIntegrationResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateMethodResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Method
 */
UpdateMethodResponse * ApiGatewayClient::updateMethod(const UpdateMethodRequest &request)
{
    return qobject_cast<UpdateMethodResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateMethodResponseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing MethodResponse
 */
UpdateMethodResponseResponse * ApiGatewayClient::updateMethodResponse(const UpdateMethodResponseRequest &request)
{
    return qobject_cast<UpdateMethodResponseResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a
 */
UpdateModelResponse * ApiGatewayClient::updateModel(const UpdateModelRequest &request)
{
    return qobject_cast<UpdateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateRequestValidatorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a RequestValidator of a given
 */
UpdateRequestValidatorResponse * ApiGatewayClient::updateRequestValidator(const UpdateRequestValidatorRequest &request)
{
    return qobject_cast<UpdateRequestValidatorResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a Resource
 */
UpdateResourceResponse * ApiGatewayClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateRestApiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about the specified
 */
UpdateRestApiResponse * ApiGatewayClient::updateRestApi(const UpdateRestApiRequest &request)
{
    return qobject_cast<UpdateRestApiResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateStageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes information about a Stage
 */
UpdateStageResponse * ApiGatewayClient::updateStage(const UpdateStageRequest &request)
{
    return qobject_cast<UpdateStageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants a temporary extension to the remaining quota of a usage plan associated with a specified API
 */
UpdateUsageResponse * ApiGatewayClient::updateUsage(const UpdateUsageRequest &request)
{
    return qobject_cast<UpdateUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateUsagePlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a usage plan of a given plan
 */
UpdateUsagePlanResponse * ApiGatewayClient::updateUsagePlan(const UpdateUsagePlanRequest &request)
{
    return qobject_cast<UpdateUsagePlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ApiGatewayClient service, and returns a pointer to an
 * UpdateVpcLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing VpcLink of a specified
 */
UpdateVpcLinkResponse * ApiGatewayClient::updateVpcLink(const UpdateVpcLinkRequest &request)
{
    return qobject_cast<UpdateVpcLinkResponse *>(send(request));
}

/*!
 * \class QtAws::ApiGateway::ApiGatewayClientPrivate
 * \brief The ApiGatewayClientPrivate class provides private implementation for ApiGatewayClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a ApiGatewayClientPrivate object with public implementation \a q.
 */
ApiGatewayClientPrivate::ApiGatewayClientPrivate(ApiGatewayClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApiGateway
} // namespace QtAws
