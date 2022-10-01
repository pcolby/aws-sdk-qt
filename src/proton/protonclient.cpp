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
#include "cancelcomponentdeploymentrequest.h"
#include "cancelcomponentdeploymentresponse.h"
#include "cancelenvironmentdeploymentrequest.h"
#include "cancelenvironmentdeploymentresponse.h"
#include "cancelserviceinstancedeploymentrequest.h"
#include "cancelserviceinstancedeploymentresponse.h"
#include "cancelservicepipelinedeploymentrequest.h"
#include "cancelservicepipelinedeploymentresponse.h"
#include "createcomponentrequest.h"
#include "createcomponentresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "createenvironmentaccountconnectionrequest.h"
#include "createenvironmentaccountconnectionresponse.h"
#include "createenvironmenttemplaterequest.h"
#include "createenvironmenttemplateresponse.h"
#include "createenvironmenttemplateversionrequest.h"
#include "createenvironmenttemplateversionresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "createservicetemplaterequest.h"
#include "createservicetemplateresponse.h"
#include "createservicetemplateversionrequest.h"
#include "createservicetemplateversionresponse.h"
#include "createtemplatesyncconfigrequest.h"
#include "createtemplatesyncconfigresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "deleteenvironmentaccountconnectionrequest.h"
#include "deleteenvironmentaccountconnectionresponse.h"
#include "deleteenvironmenttemplaterequest.h"
#include "deleteenvironmenttemplateresponse.h"
#include "deleteenvironmenttemplateversionrequest.h"
#include "deleteenvironmenttemplateversionresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deleteservicetemplaterequest.h"
#include "deleteservicetemplateresponse.h"
#include "deleteservicetemplateversionrequest.h"
#include "deleteservicetemplateversionresponse.h"
#include "deletetemplatesyncconfigrequest.h"
#include "deletetemplatesyncconfigresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getcomponentrequest.h"
#include "getcomponentresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "getenvironmentaccountconnectionrequest.h"
#include "getenvironmentaccountconnectionresponse.h"
#include "getenvironmenttemplaterequest.h"
#include "getenvironmenttemplateresponse.h"
#include "getenvironmenttemplateversionrequest.h"
#include "getenvironmenttemplateversionresponse.h"
#include "getrepositoryrequest.h"
#include "getrepositoryresponse.h"
#include "getrepositorysyncstatusrequest.h"
#include "getrepositorysyncstatusresponse.h"
#include "getservicerequest.h"
#include "getserviceresponse.h"
#include "getserviceinstancerequest.h"
#include "getserviceinstanceresponse.h"
#include "getservicetemplaterequest.h"
#include "getservicetemplateresponse.h"
#include "getservicetemplateversionrequest.h"
#include "getservicetemplateversionresponse.h"
#include "gettemplatesyncconfigrequest.h"
#include "gettemplatesyncconfigresponse.h"
#include "gettemplatesyncstatusrequest.h"
#include "gettemplatesyncstatusresponse.h"
#include "listcomponentoutputsrequest.h"
#include "listcomponentoutputsresponse.h"
#include "listcomponentprovisionedresourcesrequest.h"
#include "listcomponentprovisionedresourcesresponse.h"
#include "listcomponentsrequest.h"
#include "listcomponentsresponse.h"
#include "listenvironmentaccountconnectionsrequest.h"
#include "listenvironmentaccountconnectionsresponse.h"
#include "listenvironmentoutputsrequest.h"
#include "listenvironmentoutputsresponse.h"
#include "listenvironmentprovisionedresourcesrequest.h"
#include "listenvironmentprovisionedresourcesresponse.h"
#include "listenvironmenttemplateversionsrequest.h"
#include "listenvironmenttemplateversionsresponse.h"
#include "listenvironmenttemplatesrequest.h"
#include "listenvironmenttemplatesresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listrepositoriesrequest.h"
#include "listrepositoriesresponse.h"
#include "listrepositorysyncdefinitionsrequest.h"
#include "listrepositorysyncdefinitionsresponse.h"
#include "listserviceinstanceoutputsrequest.h"
#include "listserviceinstanceoutputsresponse.h"
#include "listserviceinstanceprovisionedresourcesrequest.h"
#include "listserviceinstanceprovisionedresourcesresponse.h"
#include "listserviceinstancesrequest.h"
#include "listserviceinstancesresponse.h"
#include "listservicepipelineoutputsrequest.h"
#include "listservicepipelineoutputsresponse.h"
#include "listservicepipelineprovisionedresourcesrequest.h"
#include "listservicepipelineprovisionedresourcesresponse.h"
#include "listservicetemplateversionsrequest.h"
#include "listservicetemplateversionsresponse.h"
#include "listservicetemplatesrequest.h"
#include "listservicetemplatesresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "notifyresourcedeploymentstatuschangerequest.h"
#include "notifyresourcedeploymentstatuschangeresponse.h"
#include "rejectenvironmentaccountconnectionrequest.h"
#include "rejectenvironmentaccountconnectionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsresponse.h"
#include "updatecomponentrequest.h"
#include "updatecomponentresponse.h"
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
#include "updatetemplatesyncconfigrequest.h"
#include "updatetemplatesyncconfigresponse.h"

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
 *  This is the Proton Service API Reference. It provides descriptions, syntax and usage examples for each of the <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Operations.html">actions</a> and <a
 *  href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Types.html">data types</a> for the Proton
 * 
 *  service>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML
 * 
 *  response>
 * 
 *  Alternatively, you can use the Amazon Web Services CLI to access an API. For more information, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">Amazon Web Services Command Line Interface
 *  User
 * 
 *  Guide</a>>
 * 
 *  The Proton service is a two-pronged automation framework. Administrators create service templates to provide
 *  standardized infrastructure and deployment tooling for serverless and container based applications. Developers, in turn,
 *  select from the available service templates to automate their application or service
 * 
 *  deployments>
 * 
 *  Because administrators define the infrastructure and tooling that Proton deploys and manages, they need permissions to
 *  use all of the listed API
 * 
 *  operations>
 * 
 *  When developers select a specific infrastructure and tooling set, Proton deploys their applications. To monitor their
 *  applications that are running on Proton, developers need permissions to the service <i>create</i>, <i>list</i>,
 *  <i>update</i> and <i>delete</i> API operations and the service instance <i>list</i> and <i>update</i> API
 * 
 *  operations>
 * 
 *  To learn more about Proton administration, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/adminguide/Welcome.html">Proton Administrator
 * 
 *  Guide</a>>
 * 
 *  To learn more about deploying serverless and containerized applications on Proton, see the <a
 *  href="https://docs.aws.amazon.com/proton/latest/userguide/Welcome.html">Proton User
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
 *  The API actions in this list support idempotency with the use of a <i>client token</i>. The corresponding Amazon Web
 *  Services CLI commands also support idempotency using a client token. A client token is a unique, case-sensitive string
 *  of up to 64 ASCII characters. To make an idempotent API request using one of these actions, specify a client token in
 *  the request. We recommend that you <i>don't</i> reuse the same client token for other API requests. If you don’t provide
 *  a client token for these APIs, a default client token is automatically provided by
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
 *  CreateEnvironmentAccountConnectio> </li> </ul>
 * 
 *  <b>Idempotent create APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request with an API from this group, and the original resource <i>hasn't</i> been modified, the retry
 *  succeeds without performing any further actions other than returning the original resource detail data in the
 * 
 *  response>
 * 
 *  If the original resource has been modified, the retry throws a
 * 
 *  <code>ConflictException</code>>
 * 
 *  If you retry with different input parameters, the retry throws a <code>ValidationException</code> with an
 *  <code>IdempotentParameterMismatch</code>
 * 
 *  error>
 * 
 *  Idempotent create
 * 
 *  APIs> <ul> <li>
 * 
 *  CreateEnvironmentTemplat> </li> <li>
 * 
 *  CreateServiceTemplat> </li> <li>
 * 
 *  CreateEnvironmen> </li> <li>
 * 
 *  CreateServic> </li> </ul>
 * 
 *  <b>Idempotent delete APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  When you retry the request with an API from this group and the resource was deleted, its metadata is returned in the
 * 
 *  response>
 * 
 *  If you retry and the resource doesn't exist, the response is
 * 
 *  empty>
 * 
 *  In both cases, the retry
 * 
 *  succeeds>
 * 
 *  Idempotent delete
 * 
 *  APIs> <ul> <li>
 * 
 *  DeleteEnvironmentTemplat> </li> <li>
 * 
 *  DeleteEnvironmentTemplateVersio> </li> <li>
 * 
 *  DeleteServiceTemplat> </li> <li>
 * 
 *  DeleteServiceTemplateVersio> </li> <li>
 * 
 *  DeleteEnvironmentAccountConnectio> </li> </ul>
 * 
 *  <b>Asynchronous idempotent delete APIs</b>
 * 
 *  </p
 * 
 *  Given a request action that has
 * 
 *  succeeded>
 * 
 *  If you retry the request with an API from this group, if the original request delete operation status is
 *  <code>DELETE_IN_PROGRESS</code>, the retry returns the resource detail data in the response without performing any
 *  further
 * 
 *  actions>
 * 
 *  If the original request delete operation is complete, a retry returns an empty
 * 
 *  response>
 * 
 *  Asynchronous idempotent delete
 * 
 *  APIs> <ul> <li>
 * 
 *  DeleteEnvironmen> </li> <li>
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
 * request is accepted, Proton can use the associated IAM role to provision environment infrastructure resources in the
 * associated environment
 *
 * account>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
 */
AcceptEnvironmentAccountConnectionResponse * ProtonClient::acceptEnvironmentAccountConnection(const AcceptEnvironmentAccountConnectionRequest &request)
{
    return qobject_cast<AcceptEnvironmentAccountConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CancelComponentDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel a component deployment (for a component that is in the <code>IN_PROGRESS</code> deployment
 *
 * status)>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
CancelComponentDeploymentResponse * ProtonClient::cancelComponentDeployment(const CancelComponentDeploymentRequest &request)
{
    return qobject_cast<CancelComponentDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CancelEnvironmentDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel an environment deployment on an <a>UpdateEnvironment</a> action, if the deployment is
 * <code>IN_PROGRESS</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-update.html">Update an environment</a> in the
 * <i>Proton Administrator
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
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-svc-instance-update.html">Proton Administrator guide</a>
 * or the <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-svc-instance-update.html">Proton User
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
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-svc-pipeline-update.html">Proton Administrator guide</a>
 * or the <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-svc-pipeline-update.html">Proton User
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
 * CreateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an Proton component. A component is an infrastructure extension for a service
 *
 * instance>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
CreateComponentResponse * ProtonClient::createComponent(const CreateComponentRequest &request)
{
    return qobject_cast<CreateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploy a new environment. An Proton environment is created from an environment template that defines infrastructure and
 * resources that can be shared across
 *
 * services> <p class="title"> <b>You can provision environments using the following methods:</b>
 *
 * </p <ul> <li>
 *
 * Amazon Web Services-managed provisioning: Proton makes direct calls to provision your
 *
 * resources> </li> <li>
 *
 * Self-managed provisioning: Proton makes pull requests on your repository to provide compiled infrastructure as code
 * (IaC) files that your IaC engine uses to provision
 *
 * resources> </li> </ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a> and <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-works-prov-methods.html">Provisioning methods</a> in the
 * <i>Proton Administrator
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
 * provisioned in the environment account from a management
 *
 * account>
 *
 * An environment account connection is a secure bi-directional connection between a <i>management account</i> and an
 * <i>environment account</i> that maintains authorization and permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
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
 * Create an environment template for Proton. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-templates.html">Environment Templates</a> in the <i>Proton
 * Administrator
 *
 * Guide</i>>
 *
 * You can create an environment template in one of the two following
 *
 * ways> <ul> <li>
 *
 * Register and publish a <i>standard</i> environment template that instructs Proton to deploy and manage environment
 *
 * infrastructure> </li> <li>
 *
 * Register and publish a <i>customer managed</i> environment template that connects Proton to your existing provisioned
 * infrastructure that you manage. Proton <i>doesn't</i> manage your existing provisioned infrastructure. To create an
 * environment template for customer provisioned and managed infrastructure, include the <code>provisioning</code>
 * parameter and set the value to <code>CUSTOMER_MANAGED</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/template-create.html">Register and publish an environment
 * template</a> in the <i>Proton Administrator
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
 * CreateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create and register a link to a repository that can be used with self-managed provisioning (infrastructure or pipelines)
 * or for template sync configurations. When you create a repository link, Proton creates a <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/using-service-linked-roles.html">service-linked role</a> for
 *
 * you>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
 * provisioning</a>, <a href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-bundles.html">Template
 * bundles</a>, and <a href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-sync-configs.html">Template
 * sync configurations</a> in the <i>Proton Administrator
 */
CreateRepositoryResponse * ProtonClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an Proton service. An Proton service is an instantiation of a service template and often includes several service
 * instances and pipeline. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-services.html">Services</a> in the <i>Proton Administrator
 * Guide</i> and <a href="https://docs.aws.amazon.com/proton/latest/userguide/ug-service.html">Services</a> in the
 * <i>Proton User
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
 * optional CI/CD service pipeline. Developers, in turn, select the service template from Proton. If the selected service
 * template includes a service pipeline definition, they provide a link to their source code repository. Proton then
 * deploys and manages the infrastructure defined by the selected service template. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/managing-svc-templates.html">Service Templates</a> in the
 * <i>Proton Administrator
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
 * <i>isn't</i> backward compatible. A minor version of a service template is a version that's backward compatible within
 * its major
 */
CreateServiceTemplateVersionResponse * ProtonClient::createServiceTemplateVersion(const CreateServiceTemplateVersionRequest &request)
{
    return qobject_cast<CreateServiceTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * CreateTemplateSyncConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set up a template to create new template versions automatically. When a commit is pushed to your registered <a
 * href="https://docs.aws.amazon.com/proton/latest/APIReference/API_Repository.html">repository</a>, Proton checks for
 * changes to your repository template bundles. If it detects a template bundle change, a new major or minor version of its
 * template is created, if the version doesn’t already exist. For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-template-sync-configs.html">Template sync
 * configurations</a> in the <i>Proton Administrator
 */
CreateTemplateSyncConfigResponse * ProtonClient::createTemplateSyncConfig(const CreateTemplateSyncConfigRequest &request)
{
    return qobject_cast<CreateTemplateSyncConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an Proton component
 *
 * resource>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
DeleteComponentResponse * ProtonClient::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
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
 * After you delete an environment account connection that’s in use by an Proton environment, Proton <i>can’t</i> manage
 * the environment infrastructure resources until a new environment account connection is accepted for the environment
 * account and associated environment. You're responsible for cleaning up provisioned resources that remain without an
 * environment
 *
 * connection>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
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
 * a version that's not backward
 *
 * compatible>
 *
 * Delete a minor version of an environment template if it <i>isn't</i> the <code>Recommended</code> version. Delete a
 * <code>Recommended</code> minor version of the environment template if no other minor versions of the environment
 * template exist. A minor version of an environment template is a version that's backward
 */
DeleteEnvironmentTemplateVersionResponse * ProtonClient::deleteEnvironmentTemplateVersion(const DeleteEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<DeleteEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * De-register and unlink your
 */
DeleteRepositoryResponse * ProtonClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a service, with its instances and
 *
 * pipeline> <note>
 *
 * You can't delete a service if it has any service instances that have components attached to
 *
 * them>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
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
 * DeleteTemplateSyncConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a template sync
 */
DeleteTemplateSyncConfigResponse * ProtonClient::deleteTemplateSyncConfig(const DeleteTemplateSyncConfigRequest &request)
{
    return qobject_cast<DeleteTemplateSyncConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for the Proton pipeline service
 */
GetAccountSettingsResponse * ProtonClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detailed data for a
 *
 * component>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
GetComponentResponse * ProtonClient::getComponent(const GetComponentRequest &request)
{
    return qobject_cast<GetComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detailed data for an
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
 * In an environment account, get the detailed data for an environment account
 *
 * connection>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
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
 * Get detailed data for an environment
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
 * Get detailed data for a major or minor version of an environment
 */
GetEnvironmentTemplateVersionResponse * ProtonClient::getEnvironmentTemplateVersion(const GetEnvironmentTemplateVersionRequest &request)
{
    return qobject_cast<GetEnvironmentTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for a
 */
GetRepositoryResponse * ProtonClient::getRepository(const GetRepositoryRequest &request)
{
    return qobject_cast<GetRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetRepositorySyncStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the sync status of a repository used for Proton template sync. For more information about template sync, see
 *
 * > <note>
 *
 * A repository sync status isn't tied to the Proton Repository resource (or any other Proton resource). Therefore, tags on
 * an Proton Repository resource have no effect on this action. Specifically, you can't use these tags to control access to
 * this action using Attribute-based access control
 *
 * (ABAC)>
 *
 * For more information about ABAC, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/security_iam_service-with-iam.html#security_iam_service-with-iam-tags">ABAC</a>
 * in the <i>Proton Administrator
 */
GetRepositorySyncStatusResponse * ProtonClient::getRepositorySyncStatus(const GetRepositorySyncStatusRequest &request)
{
    return qobject_cast<GetRepositorySyncStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detailed data for a
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
 * Get detailed data for a service instance. A service instance is an instantiation of service template and it runs in a
 * specific
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
 * Get detailed data for a service
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
 * Get detailed data for a major or minor version of a service
 */
GetServiceTemplateVersionResponse * ProtonClient::getServiceTemplateVersion(const GetServiceTemplateVersionRequest &request)
{
    return qobject_cast<GetServiceTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetTemplateSyncConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detail data for a template sync
 */
GetTemplateSyncConfigResponse * ProtonClient::getTemplateSyncConfig(const GetTemplateSyncConfigRequest &request)
{
    return qobject_cast<GetTemplateSyncConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * GetTemplateSyncStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the status of a template
 */
GetTemplateSyncStatusResponse * ProtonClient::getTemplateSyncStatus(const GetTemplateSyncStatusRequest &request)
{
    return qobject_cast<GetTemplateSyncStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListComponentOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list of component Infrastructure as Code (IaC)
 *
 * outputs>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
ListComponentOutputsResponse * ProtonClient::listComponentOutputs(const ListComponentOutputsRequest &request)
{
    return qobject_cast<ListComponentOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListComponentProvisionedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List provisioned resources for a component with
 *
 * details>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
ListComponentProvisionedResourcesResponse * ProtonClient::listComponentProvisionedResources(const ListComponentProvisionedResourcesRequest &request)
{
    return qobject_cast<ListComponentProvisionedResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List components with summary data. You can filter the result list by environment, service, or a single service
 *
 * instance>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
ListComponentsResponse * ProtonClient::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
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
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
 */
ListEnvironmentAccountConnectionsResponse * ProtonClient::listEnvironmentAccountConnections(const ListEnvironmentAccountConnectionsRequest &request)
{
    return qobject_cast<ListEnvironmentAccountConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the infrastructure as code outputs for your
 */
ListEnvironmentOutputsResponse * ProtonClient::listEnvironmentOutputs(const ListEnvironmentOutputsRequest &request)
{
    return qobject_cast<ListEnvironmentOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListEnvironmentProvisionedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the provisioned resources for your
 */
ListEnvironmentProvisionedResourcesResponse * ProtonClient::listEnvironmentProvisionedResources(const ListEnvironmentProvisionedResourcesRequest &request)
{
    return qobject_cast<ListEnvironmentProvisionedResourcesResponse *>(send(request));
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
 * ListRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List repositories with detail
 */
ListRepositoriesResponse * ProtonClient::listRepositories(const ListRepositoriesRequest &request)
{
    return qobject_cast<ListRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListRepositorySyncDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List repository sync definitions with detail
 */
ListRepositorySyncDefinitionsResponse * ProtonClient::listRepositorySyncDefinitions(const ListRepositorySyncDefinitionsRequest &request)
{
    return qobject_cast<ListRepositorySyncDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceInstanceOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list service of instance Infrastructure as Code (IaC)
 */
ListServiceInstanceOutputsResponse * ProtonClient::listServiceInstanceOutputs(const ListServiceInstanceOutputsRequest &request)
{
    return qobject_cast<ListServiceInstanceOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceInstanceProvisionedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List provisioned resources for a service instance with
 */
ListServiceInstanceProvisionedResourcesResponse * ProtonClient::listServiceInstanceProvisionedResources(const ListServiceInstanceProvisionedResourcesRequest &request)
{
    return qobject_cast<ListServiceInstanceProvisionedResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServiceInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List service instances with summary
 */
ListServiceInstancesResponse * ProtonClient::listServiceInstances(const ListServiceInstancesRequest &request)
{
    return qobject_cast<ListServiceInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServicePipelineOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a list of service pipeline Infrastructure as Code (IaC)
 */
ListServicePipelineOutputsResponse * ProtonClient::listServicePipelineOutputs(const ListServicePipelineOutputsRequest &request)
{
    return qobject_cast<ListServicePipelineOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * ListServicePipelineProvisionedResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List provisioned resources for a service and pipeline with
 */
ListServicePipelineProvisionedResourcesResponse * ProtonClient::listServicePipelineProvisionedResources(const ListServicePipelineProvisionedResourcesRequest &request)
{
    return qobject_cast<ListServicePipelineProvisionedResourcesResponse *>(send(request));
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
 * List tags for a resource. For more information, see <i>Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton Administrator Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton User
 */
ListTagsForResourceResponse * ProtonClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * NotifyResourceDeploymentStatusChangeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Notify Proton of status changes to a provisioned resource when you use self-managed
 *
 * provisioning>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-works-prov-methods.html#ag-works-prov-methods-self">Self-managed
 * provisioning</a> in the <i>Proton Administrator
 */
NotifyResourceDeploymentStatusChangeResponse * ProtonClient::notifyResourceDeploymentStatusChange(const NotifyResourceDeploymentStatusChangeRequest &request)
{
    return qobject_cast<NotifyResourceDeploymentStatusChangeResponse *>(send(request));
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
 * After you reject an environment account connection request, you <i>can't</i> accept or use the rejected environment
 * account
 *
 * connection>
 *
 * You <i>can’t</i> reject an environment account connection that's connected to an
 *
 * environment>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
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
 * Tag a resource. A tag is a key-value pair of metadata that you associate with an Proton
 *
 * resource>
 *
 * For more information, see <i>Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton Administrator Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton User
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
 * Remove a customer tag from a resource. A tag is a key-value pair of metadata associated with an Proton
 *
 * resource>
 *
 * For more information, see <i>Proton resources and tagging</i> in the <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/resources.html">Proton Administrator Guide</a> or <a
 * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton User
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
 * Update the Proton service pipeline role or repository
 */
UpdateAccountSettingsResponse * ProtonClient::updateAccountSettings(const UpdateAccountSettingsRequest &request)
{
    return qobject_cast<UpdateAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a
 *
 * component>
 *
 * There are a few modes for updating a component. The <code>deploymentType</code> field defines the
 *
 * mode> <note>
 *
 * You can't update a component while its deployment status, or the deployment status of a service instance attached to it,
 * is
 *
 * <code>IN_PROGRESS</code>> </note>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
 */
UpdateComponentResponse * ProtonClient::updateComponent(const UpdateComponentRequest &request)
{
    return qobject_cast<UpdateComponentResponse *>(send(request));
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
 * <code>protonServiceRoleArn</code> and <code>provisioningRepository</code> parameter to update or connect to an
 * environment account
 *
 * connection>
 *
 * You can only update to a new environment account connection if that connection was created in the same environment
 * account that the current environment account connection was created in. The account connection must also be associated
 * with the current
 *
 * environment>
 *
 * If the environment <i>isn't</i> associated with an environment account connection, <i>don't</i> update or include the
 * <code>environmentAccountConnectionId</code> parameter. You <i>can't</i> update or connect the environment to an
 * environment account connection if it <i>isn't</i> already associated with an environment
 *
 * connection>
 *
 * You can update either the <code>environmentAccountConnectionId</code> or <code>protonServiceRoleArn</code> parameter and
 * value. You can’t update
 *
 * both>
 *
 * If the environment was configured for Amazon Web Services-managed provisioning, omit the
 * <code>provisioningRepository</code>
 *
 * parameter>
 *
 * If the environment was configured for self-managed provisioning, specify the <code>provisioningRepository</code>
 * parameter and omit the <code>protonServiceRoleArn</code> and <code>environmentAccountConnectionId</code>
 *
 * parameters>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-environments.html">Environments</a> and <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-works-prov-methods.html">Provisioning methods</a> in the
 * <i>Proton Administrator
 *
 * Guide</i>>
 *
 * There are four modes for updating an environment. The <code>deploymentType</code> field defines the
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
 * in use and a minor
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
 * For more information, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-env-account-connections.html">Environment account
 * connections</a> in the <i>Proton Administrator
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
 *
 * instances> <note>
 *
 * You can't delete a service instance (remove it from the spec) if it has an attached
 *
 * component>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
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
 * There are a few modes for updating a service instance. The <code>deploymentType</code> field defines the
 *
 * mode> <note>
 *
 * You can't update a service instance while its deployment status, or the deployment status of a component attached to it,
 * is
 *
 * <code>IN_PROGRESS</code>>
 *
 * For more information about components, see <a
 * href="https://docs.aws.amazon.com/proton/latest/adminguide/ag-components.html">Proton components</a> in the <i>Proton
 * Administrator
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
 * There are four modes for updating a service pipeline. The <code>deploymentType</code> field defines the
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
 * are updated. <i>Don’t</i> include major or minor version parameters when you use this
 *
 * <code>deployment-type</code>> </dd> <dt/> <dd>
 *
 * <code>MINOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service pipeline is deployed and updated with the published, recommended (latest) minor version of the
 * current major version in use, by default. You can specify a different minor version of the current major version in
 *
 * use> </dd> <dt/> <dd>
 *
 * <code>MAJOR_VERSION</code>
 *
 * </p
 *
 * In this mode, the service pipeline is deployed and updated with the published, recommended (latest) major and minor
 * version of the current template by default. You can specify a different major version that's higher than the major
 * version in use and a minor
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
 * Sends \a request to the ProtonClient service, and returns a pointer to an
 * UpdateTemplateSyncConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update template sync configuration parameters, except for the <code>templateName</code> and
 */
UpdateTemplateSyncConfigResponse * ProtonClient::updateTemplateSyncConfig(const UpdateTemplateSyncConfigRequest &request)
{
    return qobject_cast<UpdateTemplateSyncConfigResponse *>(send(request));
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
