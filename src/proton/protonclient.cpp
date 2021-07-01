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

#include "protonclient.h"
#include "protonclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptenvironmentaccountconnectionrequest.h"
#include "acceptenvironmentaccountconnectionresponse.h"
#include "cancelenvironmentdeploymentrequest.h"
#include "cancelenvironmentdeploymentresponse.h"
#include "cancelserviceinstancedeploymentrequest.h"
#include "cancelserviceinstancedeploymentresponse.h"
#include "cancelservicepipelinedeploymentrequest.h"
#include "cancelservicepipelinedeploymentresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "createenvironmentaccountconnectionrequest.h"
#include "createenvironmentaccountconnectionresponse.h"
#include "createenvironmenttemplaterequest.h"
#include "createenvironmenttemplateresponse.h"
#include "createenvironmenttemplateversionrequest.h"
#include "createenvironmenttemplateversionresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "createservicetemplaterequest.h"
#include "createservicetemplateresponse.h"
#include "createservicetemplateversionrequest.h"
#include "createservicetemplateversionresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "deleteenvironmentaccountconnectionrequest.h"
#include "deleteenvironmentaccountconnectionresponse.h"
#include "deleteenvironmenttemplaterequest.h"
#include "deleteenvironmenttemplateresponse.h"
#include "deleteenvironmenttemplateversionrequest.h"
#include "deleteenvironmenttemplateversionresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deleteservicetemplaterequest.h"
#include "deleteservicetemplateresponse.h"
#include "deleteservicetemplateversionrequest.h"
#include "deleteservicetemplateversionresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "getenvironmentaccountconnectionrequest.h"
#include "getenvironmentaccountconnectionresponse.h"
#include "getenvironmenttemplaterequest.h"
#include "getenvironmenttemplateresponse.h"
#include "getenvironmenttemplateversionrequest.h"
#include "getenvironmenttemplateversionresponse.h"
#include "getservicerequest.h"
#include "getserviceresponse.h"
#include "getserviceinstancerequest.h"
#include "getserviceinstanceresponse.h"
#include "getservicetemplaterequest.h"
#include "getservicetemplateresponse.h"
#include "getservicetemplateversionrequest.h"
#include "getservicetemplateversionresponse.h"
#include "listenvironmentaccountconnectionsrequest.h"
#include "listenvironmentaccountconnectionsresponse.h"
#include "listenvironmenttemplateversionsrequest.h"
#include "listenvironmenttemplateversionsresponse.h"
#include "listenvironmenttemplatesrequest.h"
#include "listenvironmenttemplatesresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listserviceinstancesrequest.h"
#include "listserviceinstancesresponse.h"
#include "listservicetemplateversionsrequest.h"
#include "listservicetemplateversionsresponse.h"
#include "listservicetemplatesrequest.h"
#include "listservicetemplatesresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "rejectenvironmentaccountconnectionrequest.h"
#include "rejectenvironmentaccountconnectionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"
#include "updateenvironmentaccountconnectionrequest.h"
#include "updateenvironmentaccountconnectionresponse.h"
#include "updateenvironmenttemplaterequest.h"
#include "updateenvironmenttemplateresponse.h"
#include "updateenvironmenttemplateversionrequest.h"
#include "updateenvironmenttemplateversionresponse.h"
#include "updateservicerequest.h"
#include "updateserviceresponse.h"
#include "updateserviceinstancerequest.h"
#include "updateserviceinstanceresponse.h"
#include "updateservicepipelinerequest.h"
#include "updateservicepipelineresponse.h"
#include "updateservicetemplaterequest.h"
#include "updateservicetemplateresponse.h"
#include "updateservicetemplateversionrequest.h"
#include "updateservicetemplateversionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Proton
 * \brief Contains classess for accessing AWS Proton.
 *
 * \inmodule QtAwsProton
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Proton {

/*!
 * \class QtAws::Proton::ProtonClient
 * \brief The ProtonClient class provides access to the AWS Proton service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsProton
 *
 *  This is the AWS Proton Service API Reference. It provides descriptions, syntax and usage examples for each of the <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Operations.html">actions</a> and <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Types.html">data types</a> for the AWS Proton
 * 
 *  service>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML
 * 
 *  response>
 * 
 *  Alternatively, you can use the AWS CLI to access an API. For more information, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS Command Line Interface User
 * 
 *  Guide</a>>
 * 
 *  The AWS Proton service is a two-pronged automation framework. Administrators create service templates to provide
 *  standardized infrastructure and deployment tooling for serverless and container based applications. Developers, in turn,
 *  select from the available service templates to automate their application or service
 * 
 *  deployments>
 * 
 *  Because administrators define the infrastructure and tooling that AWS Proton deploys and manages, they need permissions
 *  to use all of the listed API
 * 
 *  operations>
 * 
 *  When developers select a specific infrastructure and tooling set, AWS Proton deploys their applications. To monitor
 *  their applications that are running on AWS Proton, developers need permissions to the service <i>create</i>,
 *  <i>list</i>, <i>update</i> and <i>delete</i> API operations and the service instance <i>list</i> and <i>update</i> API
 * 
 *  operations>
 * 
 *  To learn more about AWS Proton administration, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/adminguide/Welcome.html">AWS Proton Administration
 * 
 *  Guide</a>>
 * 
 *  To learn more about deploying serverless and containerized applications on AWS Proton, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/userguide/Welcome.html">AWS Proton User
 * 
 *  Guide</a>>
 * 
 *  <b>Ensuring Idempotency</b>
 * 
 *  </p
 * 
 *  When you make a mutating API request, the request typically returns a result before the asynchronous workflows of the
 *  operation are complete. Operations might also time out or encounter other server issues before they're complete, even if
 *  the request already returned a result. This might make it difficult to determine whether the request succeeded.
 *  Moreover, you might need to retry the request multiple times to ensure that the operation completes successfully.
 *  However, if the original request and the subsequent retries are successful, the operation occurs multiple times. This
 *  means that you might create more resources than you
 * 
 *  intended>
 * 
 *  <i>Idempotency</i> ensures that an API request action completes no more than one time. With an idempotent request, if
 *  the original request action completes successfully, any subsequent retries complete successfully without performing any
 *  further actions. However, the result might contain updated information, such as the current creation
 * 
 *  status>
 * 
 *  The following lists of APIs are grouped according to methods that ensure
 * 
 *  idempotency>
 * 
 *  <b>Idempotent create APIs with a client token</b>
 * 
 *  </p
 * 
 *  The API actions in this list support idempotency with the use of a <i>client token</i>. The corresponding AWS CLI
 *  commands also support idempotency using a client token. A client token is a unique, case-sensitive string of up to 64
 *  ASCII characters. To make an idempotent API request using one of these actions, specify a client token in the request.
 *  We recommend that you <i>don't</i> reuse the same client token for other API requests. If you don’t provide a client
 *  token for these APIs, a default client token is automatically provided by
 * 
 *  SDKs>
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request using the same client token and the same parameters, the retry succeeds without performing any
 *  further actions other than returning the original resource detail data in the
 * 
 *  response>
 * 
 *  If you retry the request using the same client token, but one or more of the parameters are different, the retry throws
 *  a <code>ValidationException</code> with an <code>IdempotentParameterMismatch</code>
 * 
 *  error>
 * 
 *  Client tokens expire eight hours after a request is made. If you retry the request with the expired token, a new
 *  resource is
 * 
 *  created>
 * 
 *  If the original resource is deleted and you retry the request, a new resource is
 * 
 *  created>
 * 
 *  Idempotent create APIs with a client
 * 
 *  token> <ul> <li>
 * 
 *  CreateEnvironmentTemplateVersio> </li> <li>
 * 
 *  CreateServiceTemplateVersio> </li> <li>
 * 
 *  CreateEnvironmentAccountConnectio> </li> </ul> <pre><code> &lt;p&gt; &lt;b&gt;Idempotent delete APIs&lt;/b&gt;
 *  &lt;/p&gt; &lt;p&gt;Given a request action that has succeeded:&lt;/p&gt; &lt;p&gt;When you retry the request with an API
 *  from this group and the resource was deleted, its metadata is returned in the response.&lt;/p&gt; &lt;p&gt;If you retry
 *  and the resource doesn't exist, the response is empty.&lt;/p&gt; &lt;p&gt;In both cases, the retry succeeds.&lt;/p&gt;
 *  &lt;p&gt;Idempotent delete APIs:&lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentTemplate&lt;/p&gt;
 *  &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentTemplateVersion&lt;/p&gt; &lt;/li&gt; &lt;li&gt;
 *  &lt;p&gt;DeleteServiceTemplate&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteServiceTemplateVersion&lt;/p&gt;
 *  &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironmentAccountConnection&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;
 *  &lt;b&gt;Asynchronous idempotent delete APIs&lt;/b&gt; &lt;/p&gt; &lt;p&gt;Given a request action that has
 *  succeeded:&lt;/p&gt; &lt;p&gt;If you retry the request with an API from this group, if the original request delete
 *  operation status is &lt;code&gt;DELETE_IN_PROGRESS&lt;/code&gt;, the retry returns the resource detail data in the
 *  response without performing any further actions.&lt;/p&gt; &lt;p&gt;If the original request delete operation is
 *  complete, a retry returns an empty response.&lt;/p&gt; &lt;p&gt;Asynchronous idempotent delete APIs:&lt;/p&gt;
 *  &lt;ul&gt; &lt;li&gt; &lt;p&gt;DeleteEnvironment&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;DeleteService&lt;/p&gt;
 */

/*!
 * \brief Constructs a ProtonClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ProtonClient::ProtonClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ProtonClientPrivate(this), parent)
{
    Q_D(ProtonClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("proton");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Proton");
    d->serviceName = QStringLiteral("proton");
}

/*!
 * \overload ProtonClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ProtonClient::ProtonClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ProtonClientPrivate(this), parent)
{
    Q_D(ProtonClient);
    d->apiVersion = QStringLiteral("2020-07-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("proton");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Proton");
    d->serviceName = QStringLiteral("proton");
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * AcceptEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * In a management account, an environment account connection request is accepted. When the environment account connection
 * request is accepted, AWS Proton can use the associated IAM role to provision environment infrastructure resources in the
 * associated environment
 *
 * account>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
AcceptEnvironmentAccountConnectionResponse * ProtonClient::acceptEnvironmentAccountConnection(const AcceptEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<AcceptEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CancelEnvironmentDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel an environment deployment on an <a>UpdateEnvironment</a> action, if the deployment is
 * <code>IN_PROGRESS</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-update.html">Update an environment</a> in the <i>AWS
 * Proton Administration
 *
 * guide</i>>
 *
 * The following list includes potential cancellation
 *
 * scenarios> <ul> <li>
 *
 * If the cancellation attempt succeeds, the resulting deployment state is
 *
 * <code>CANCELLED</code>> </li> <li>
 *
 * If the cancellation attempt fails, the resulting deployment state is
 *
 * <code>FAILED</code>> </li> <li>
 *
 * If the current <a>UpdateEnvironment</a> action succeeds before the cancellation attempt starts, the resulting deployment
 * state is <code>SUCCEEDED</code> and the cancellation attempt has no
 */
CancelEnvironmentDeploymentResponse * ProtonClient::cancelEnvironmentDeployment(const CancelEnvironmentDeploymentRequest &request)
{
    return qobject_cast<CancelEnvironmentDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CancelServiceInstanceDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel a service instance deployment on an <a>UpdateServiceInstance</a> action, if the deployment is
 * <code>IN_PROGRESS</code>. For more information, see <i>Update a service instance</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-svc-instance-update.html">AWS Proton Administration
 * guide</a> or the <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-svc-instance-update.html">AWS Proton
 * User
 *
 * guide</a>>
 *
 * The following list includes potential cancellation
 *
 * scenarios> <ul> <li>
 *
 * If the cancellation attempt succeeds, the resulting deployment state is
 *
 * <code>CANCELLED</code>> </li> <li>
 *
 * If the cancellation attempt fails, the resulting deployment state is
 *
 * <code>FAILED</code>> </li> <li>
 *
 * If the current <a>UpdateServiceInstance</a> action succeeds before the cancellation attempt starts, the resulting
 * deployment state is <code>SUCCEEDED</code> and the cancellation attempt has no
 */
CancelServiceInstanceDeploymentResponse * ProtonClient::cancelServiceInstanceDeployment(const CancelServiceInstanceDeploymentRequest &request)
{
    return qobject_cast<CancelServiceInstanceDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CancelServicePipelineDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel a service pipeline deployment on an <a>UpdateServicePipeline</a> action, if the deployment is
 * <code>IN_PROGRESS</code>. For more information, see <i>Update a service pipeline</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-svc-pipeline-update.html">AWS Proton Administration
 * guide</a> or the <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-svc-pipeline-update.html">AWS Proton
 * User
 *
 * guide</a>>
 *
 * The following list includes potential cancellation
 *
 * scenarios> <ul> <li>
 *
 * If the cancellation attempt succeeds, the resulting deployment state is
 *
 * <code>CANCELLED</code>> </li> <li>
 *
 * If the cancellation attempt fails, the resulting deployment state is
 *
 * <code>FAILED</code>> </li> <li>
 *
 * If the current <a>UpdateServicePipeline</a> action succeeds before the cancellation attempt starts, the resulting
 * deployment state is <code>SUCCEEDED</code> and the cancellation attempt has no
 */
CancelServicePipelineDeploymentResponse * ProtonClient::cancelServicePipelineDeployment(const CancelServicePipelineDeploymentRequest &request)
{
    return qobject_cast<CancelServicePipelineDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploy a new environment. An AWS Proton environment is created from an environment template that defines infrastructure
 * and resources that can be shared across services. For more information, see the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a> in the <i>AWS Proton
 * Administration Guide.</i>
 */
CreateEnvironmentResponse * ProtonClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an environment account connection in an environment account so that environment infrastructure resources can be
 * provisioned in the environment account from the management
 *
 * account>
 *
 * An environment account connection is a secure bi-directional connection between a <i>management account</i> and an
 * <i>environment account</i> that maintains authorization and permissions. For more information, see <a
 * href="proton/latest/adminguide/ag-env-account-connections.html">Environment account connections</a> in the <i>AWS Proton
 * Administration
 */
CreateEnvironmentAccountConnectionResponse * ProtonClient::createEnvironmentAccountConnection(const CreateEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<CreateEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateEnvironmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an environment template for AWS Proton. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-templates.html">Environment Templates</a> in the
 * <i>AWS Proton Administration
 *
 * Guide</i>>
 *
 * You can create an environment template in one of the two following
 *
 * ways> <ul> <li>
 *
 * Register and publish a <i>standard</i> environment template that instructs AWS Proton to deploy and manage environment
 *
 * infrastructure> </li> <li>
 *
 * Register and publish a <i>customer managed</i> environment template that connects AWS Proton to your existing
 * provisioned infrastructure that you manage. AWS Proton <i>doesn't</i> manage your existing provisioned infrastructure.
 * To create an environment template for customer provisioned and managed infrastructure, include the
 * <code>provisioning</code> parameter and set the value to <code>CUSTOMER_MANAGED</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/env-template-v1.html">Register and publish an environment
 * template</a> in the <i>AWS Proton Administration
 */
CreateEnvironmentTemplateResponse * ProtonClient::createEnvironmentTemplate(const CreateEnvironmentTemplateRequest &request)
{
    return qobject_cast<CreateEnvironmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateEnvironmentTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new major or minor version of an environment template. A major version of an environment template is a version
 * that <i>isn't</i> backwards compatible. A minor version of an environment template is a version that's backwards
 * compatible within its major
 */
CreateEnvironmentTemplateVersionResponse * ProtonClient::createEnvironmentTemplateVersion(const CreateEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<CreateEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an AWS Proton service. An AWS Proton service is an instantiation of a service template and often includes several
 * service instances and pipeline. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-services.html">Services</a> in the <i>AWS Proton
 * Administration Guide</i> and <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-service.html">Services</a>
 * in the <i>AWS Proton User
 */
CreateServiceResponse * ProtonClient::createService(const CreateServiceRequest &request)
{
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateServiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a service template. The administrator creates a service template to define standardized infrastructure and an
 * optional CICD service pipeline. Developers, in turn, select the service template from AWS Proton. If the selected
 * service template includes a service pipeline definition, they provide a link to their source code repository. AWS Proton
 * then deploys and manages the infrastructure defined by the selected service template. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/managing-svc-templates.html">Service Templates</a> in the
 * <i>AWS Proton Administration
 */
CreateServiceTemplateResponse * ProtonClient::createServiceTemplate(const CreateServiceTemplateRequest &request)
{
    return qobject_cast<CreateServiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateServiceTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new major or minor version of a service template. A major version of a service template is a version that
 * <i>isn't</i> backwards compatible. A minor version of a service template is a version that's backwards compatible within
 * its major
 */
CreateServiceTemplateVersionResponse * ProtonClient::createServiceTemplateVersion(const CreateServiceTemplateVersionRequest &request)
{
    return qobject_cast<CreateServiceTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an
 */
DeleteEnvironmentResponse * ProtonClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * In an environment account, delete an environment account
 *
 * connection>
 *
 * After you delete an environment account connection that’s in use by an AWS Proton environment, AWS Proton <i>can’t</i>
 * manage the environment infrastructure resources until a new environment account connection is accepted for the
 * environment account and associated environment. You're responsible for cleaning up provisioned resources that remain
 * without an environment
 *
 * connection>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
DeleteEnvironmentAccountConnectionResponse * ProtonClient::deleteEnvironmentAccountConnection(const DeleteEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<DeleteEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteEnvironmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If no other major or minor versions of an environment template exist, delete the environment
 */
DeleteEnvironmentTemplateResponse * ProtonClient::deleteEnvironmentTemplate(const DeleteEnvironmentTemplateRequest &request)
{
    return qobject_cast<DeleteEnvironmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteEnvironmentTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If no other minor versions of an environment template exist, delete a major version of the environment template if it's
 * not the <code>Recommended</code> version. Delete the <code>Recommended</code> version of the environment template if no
 * other major versions or minor versions of the environment template exist. A major version of an environment template is
 * a version that's not backwards
 *
 * compatible>
 *
 * Delete a minor version of an environment template if it <i>isn't</i> the <code>Recommended</code> version. Delete a
 * <code>Recommended</code> minor version of the environment template if no other minor versions of the environment
 * template exist. A minor version of an environment template is a version that's backwards
 */
DeleteEnvironmentTemplateVersionResponse * ProtonClient::deleteEnvironmentTemplateVersion(const DeleteEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<DeleteEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a
 */
DeleteServiceResponse * ProtonClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteServiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If no other major or minor versions of the service template exist, delete the service
 */
DeleteServiceTemplateResponse * ProtonClient::deleteServiceTemplate(const DeleteServiceTemplateRequest &request)
{
    return qobject_cast<DeleteServiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteServiceTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If no other minor versions of a service template exist, delete a major version of the service template if it's not the
 * <code>Recommended</code> version. Delete the <code>Recommended</code> version of the service template if no other major
 * versions or minor versions of the service template exist. A major version of a service template is a version that
 * <i>isn't</i> backwards
 *
 * compatible>
 *
 * Delete a minor version of a service template if it's not the <code>Recommended</code> version. Delete a
 * <code>Recommended</code> minor version of the service template if no other minor versions of the service template exist.
 * A minor version of a service template is a version that's backwards
 */
DeleteServiceTemplateVersionResponse * ProtonClient::deleteServiceTemplateVersion(const DeleteServiceTemplateVersionRequest &request)
{
    return qobject_cast<DeleteServiceTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for the AWS Proton pipeline service
 */
GetAccountSettingsResponse * ProtonClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for an
 */
GetEnvironmentResponse * ProtonClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * In an environment account, view the detail data for an environment account
 *
 * connection>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
GetEnvironmentAccountConnectionResponse * ProtonClient::getEnvironmentAccountConnection(const GetEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<GetEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetEnvironmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for an environment
 */
GetEnvironmentTemplateResponse * ProtonClient::getEnvironmentTemplate(const GetEnvironmentTemplateRequest &request)
{
    return qobject_cast<GetEnvironmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetEnvironmentTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View detail data for a major or minor version of an environment
 */
GetEnvironmentTemplateVersionResponse * ProtonClient::getEnvironmentTemplateVersion(const GetEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<GetEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for a
 */
GetServiceResponse * ProtonClient::getService(const GetServiceRequest &request)
{
    return qobject_cast<GetServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetServiceInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for a service instance. A service instance is an instantiation of service template, which is running in
 * a specific
 */
GetServiceInstanceResponse * ProtonClient::getServiceInstance(const GetServiceInstanceRequest &request)
{
    return qobject_cast<GetServiceInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetServiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for a service
 */
GetServiceTemplateResponse * ProtonClient::getServiceTemplate(const GetServiceTemplateRequest &request)
{
    return qobject_cast<GetServiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetServiceTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View detail data for a major or minor version of a service
 */
GetServiceTemplateVersionResponse * ProtonClient::getServiceTemplateVersion(const GetServiceTemplateVersionRequest &request)
{
    return qobject_cast<GetServiceTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentAccountConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View a list of environment account
 *
 * connections>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
ListEnvironmentAccountConnectionsResponse * ProtonClient::listEnvironmentAccountConnections(const ListEnvironmentAccountConnectionsRequest &request)
{
    return qobject_cast<ListEnvironmentAccountConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List major or minor versions of an environment template with detail
 */
ListEnvironmentTemplateVersionsResponse * ProtonClient::listEnvironmentTemplateVersions(const ListEnvironmentTemplateVersionsRequest &request)
{
    return qobject_cast<ListEnvironmentTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List environment
 */
ListEnvironmentTemplatesResponse * ProtonClient::listEnvironmentTemplates(const ListEnvironmentTemplatesRequest &request)
{
    return qobject_cast<ListEnvironmentTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List environments with detail data
 */
ListEnvironmentsResponse * ProtonClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List service instances with summaries of detail
 */
ListServiceInstancesResponse * ProtonClient::listServiceInstances(const ListServiceInstancesRequest &request)
{
    return qobject_cast<ListServiceInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List major or minor versions of a service template with detail
 */
ListServiceTemplateVersionsResponse * ProtonClient::listServiceTemplateVersions(const ListServiceTemplateVersionsRequest &request)
{
    return qobject_cast<ListServiceTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List service templates with detail
 */
ListServiceTemplatesResponse * ProtonClient::listServiceTemplates(const ListServiceTemplatesRequest &request)
{
    return qobject_cast<ListServiceTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List services with summaries of detail
 */
ListServicesResponse * ProtonClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List tags for a resource. For more information, see <i>AWS Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS Proton Administration Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS Proton User
 */
ListTagsForResourceResponse * ProtonClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * RejectEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * In a management account, reject an environment account connection from another environment
 *
 * account>
 *
 * After you reject an environment account connection request, you <i>won’t</i> be able to accept or use the rejected
 * environment account
 *
 * connection>
 *
 * You <i>can’t</i> reject an environment account connection that is connected to an
 *
 * environment>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
RejectEnvironmentAccountConnectionResponse * ProtonClient::rejectEnvironmentAccountConnection(const RejectEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<RejectEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tag a resource. For more information, see <i>AWS Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS Proton Administration Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS Proton User
 */
TagResourceResponse * ProtonClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a tag from a resource. For more information, see <i>AWS Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">AWS Proton Administration Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">AWS Proton User
 */
UntagResourceResponse * ProtonClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the AWS Proton pipeline service account
 */
UpdateAccountSettingsResponse * ProtonClient::updateAccountSettings(const UpdateAccountSettingsRequest &request)
{
    return qobject_cast<UpdateAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an
 *
 * environment>
 *
 * If the environment is associated with an environment account connection, <i>don't</i> update or include the
 * <code>protonServiceRoleArn</code> parameter to update or connect to an environment account connection.
 *
 * </p
 *
 * You can only update to a new environment account connection if it was created in the same environment account that the
 * current environment account connection was created in and associated with the current
 *
 * environment>
 *
 * If the environment <i>isn't</i> associated with an environment account connection, <i>don't</i> update or include the
 * <code>environmentAccountConnectionId</code> parameter to update or connect to an environment account
 *
 * connection>
 *
 * You can update either the <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code> parameter and
 * value. You can’t update
 *
 * both>
 *
 * There are four modes for updating an environment as described in the following. The <code>deploymentType</code> field
 * defines the
 *
 * mode> <dl> <dt/> <dd>
 *
 * <code>NONE</code>
 *
 * </p
 *
 * In this mode, a deployment <i>doesn't</i> occur. Only the requested metadata parameters are
 *
 * updated> </dd> <dt/> <dd>
 *
 * <code>CURRENT_VERSION</code>
 *
 * </p
 *
 * In this mode, the environment is deployed and updated with the new spec that you provide. Only requested parameters are
 * updated. <i>Don’t</i> include minor or major version parameters when you use this
 *
 * <code>deployment-type</code>> </dd> <dt/> <dd>
 *
 * <code>MINOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the environment is deployed and updated with the published, recommended (latest) minor version of the
 * current major version in use, by default. You can also specify a different minor version of the current major version in
 *
 * use> </dd> <dt/> <dd>
 *
 * <code>MAJOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the environment is deployed and updated with the published, recommended (latest) major and minor version
 * of the current template, by default. You can also specify a different major version that's higher than the major version
 * in use and a minor version
 */
UpdateEnvironmentResponse * ProtonClient::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateEnvironmentAccountConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * In an environment account, update an environment account connection to use a new IAM
 *
 * role>
 *
 * For more information, see <a href="proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>AWS Proton Administration
 */
UpdateEnvironmentAccountConnectionResponse * ProtonClient::updateEnvironmentAccountConnection(const UpdateEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<UpdateEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateEnvironmentTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an environment
 */
UpdateEnvironmentTemplateResponse * ProtonClient::updateEnvironmentTemplate(const UpdateEnvironmentTemplateRequest &request)
{
    return qobject_cast<UpdateEnvironmentTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateEnvironmentTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a major or minor version of an environment
 */
UpdateEnvironmentTemplateVersionResponse * ProtonClient::updateEnvironmentTemplateVersion(const UpdateEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<UpdateEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Edit a service description or use a spec to add and delete service
 *
 * instances> <note>
 *
 * Existing service instances and the service pipeline <i>can't</i> be edited using this API. They can only be
 *
 * deleted> </note>
 *
 * Use the <code>description</code> parameter to modify the
 *
 * description>
 *
 * Edit the <code>spec</code> parameter to add or delete
 */
UpdateServiceResponse * ProtonClient::updateService(const UpdateServiceRequest &request)
{
    return qobject_cast<UpdateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateServiceInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a service
 *
 * instance>
 *
 * There are four modes for updating a service instance as described in the following. The <code>deploymentType</code>
 * field defines the
 *
 * mode> <dl> <dt/> <dd>
 *
 * <code>NONE</code>
 *
 * </p
 *
 * In this mode, a deployment <i>doesn't</i> occur. Only the requested metadata parameters are
 *
 * updated> </dd> <dt/> <dd>
 *
 * <code>CURRENT_VERSION</code>
 *
 * </p
 *
 * In this mode, the service instance is deployed and updated with the new spec that you provide. Only requested parameters
 * are updated. <i>Don’t</i> include minor or major version parameters when you use this
 *
 * <code>deployment-type</code>> </dd> <dt/> <dd>
 *
 * <code>MINOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service instance is deployed and updated with the published, recommended (latest) minor version of the
 * current major version in use, by default. You can also specify a different minor version of the current major version in
 *
 * use> </dd> <dt/> <dd>
 *
 * <code>MAJOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service instance is deployed and updated with the published, recommended (latest) major and minor
 * version of the current template, by default. You can also specify a different major version that is higher than the
 * major version in use and a minor version
 */
UpdateServiceInstanceResponse * ProtonClient::updateServiceInstance(const UpdateServiceInstanceRequest &request)
{
    return qobject_cast<UpdateServiceInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateServicePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the service
 *
 * pipeline>
 *
 * There are four modes for updating a service pipeline as described in the following. The <code>deploymentType</code>
 * field defines the
 *
 * mode> <dl> <dt/> <dd>
 *
 * <code>NONE</code>
 *
 * </p
 *
 * In this mode, a deployment <i>doesn't</i> occur. Only the requested metadata parameters are
 *
 * updated> </dd> <dt/> <dd>
 *
 * <code>CURRENT_VERSION</code>
 *
 * </p
 *
 * In this mode, the service pipeline is deployed and updated with the new spec that you provide. Only requested parameters
 * are updated. <i>Don’t</i> include minor or major version parameters when you use this
 *
 * <code>deployment-type</code>> </dd> <dt/> <dd>
 *
 * <code>MINOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service pipeline is deployed and updated with the published, recommended (latest) minor version of the
 * current major version in use, by default. You can also specify a different minor version of the current major version in
 *
 * use> </dd> <dt/> <dd>
 *
 * <code>MAJOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service pipeline is deployed and updated with the published, recommended (latest) major and minor
 * version of the current template by default. You can also specify a different major version that is higher than the major
 * version in use and a minor version
 */
UpdateServicePipelineResponse * ProtonClient::updateServicePipeline(const UpdateServicePipelineRequest &request)
{
    return qobject_cast<UpdateServicePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateServiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a service
 */
UpdateServiceTemplateResponse * ProtonClient::updateServiceTemplate(const UpdateServiceTemplateRequest &request)
{
    return qobject_cast<UpdateServiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateServiceTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a major or minor version of a service
 */
UpdateServiceTemplateVersionResponse * ProtonClient::updateServiceTemplateVersion(const UpdateServiceTemplateVersionRequest &request)
{
    return qobject_cast<UpdateServiceTemplateVersionResponse *>(send(request));
}

/*!
 * \class QtAws::Proton::ProtonClientPrivate
 * \brief The ProtonClientPrivate class provides private implementation for ProtonClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsProton
 */

/*!
 * Constructs a ProtonClientPrivate object with public implementation \a q.
 */
ProtonClientPrivate::ProtonClientPrivate(ProtonClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Proton
} // namespace QtAws
