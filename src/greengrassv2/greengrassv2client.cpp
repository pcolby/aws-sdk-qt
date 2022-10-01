// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "greengrassv2client.h"
#include "greengrassv2client_p.h"

#include "core/awssignaturev4.h"
#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountresponse.h"
#include "batchassociateclientdevicewithcoredevicerequest.h"
#include "batchassociateclientdevicewithcoredeviceresponse.h"
#include "batchdisassociateclientdevicefromcoredevicerequest.h"
#include "batchdisassociateclientdevicefromcoredeviceresponse.h"
#include "canceldeploymentrequest.h"
#include "canceldeploymentresponse.h"
#include "createcomponentversionrequest.h"
#include "createcomponentversionresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "deletecoredevicerequest.h"
#include "deletecoredeviceresponse.h"
#include "deletedeploymentrequest.h"
#include "deletedeploymentresponse.h"
#include "describecomponentrequest.h"
#include "describecomponentresponse.h"
#include "disassociateservicerolefromaccountrequest.h"
#include "disassociateservicerolefromaccountresponse.h"
#include "getcomponentrequest.h"
#include "getcomponentresponse.h"
#include "getcomponentversionartifactrequest.h"
#include "getcomponentversionartifactresponse.h"
#include "getconnectivityinforequest.h"
#include "getconnectivityinforesponse.h"
#include "getcoredevicerequest.h"
#include "getcoredeviceresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getserviceroleforaccountrequest.h"
#include "getserviceroleforaccountresponse.h"
#include "listclientdevicesassociatedwithcoredevicerequest.h"
#include "listclientdevicesassociatedwithcoredeviceresponse.h"
#include "listcomponentversionsrequest.h"
#include "listcomponentversionsresponse.h"
#include "listcomponentsrequest.h"
#include "listcomponentsresponse.h"
#include "listcoredevicesrequest.h"
#include "listcoredevicesresponse.h"
#include "listdeploymentsrequest.h"
#include "listdeploymentsresponse.h"
#include "listeffectivedeploymentsrequest.h"
#include "listeffectivedeploymentsresponse.h"
#include "listinstalledcomponentsrequest.h"
#include "listinstalledcomponentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "resolvecomponentcandidatesrequest.h"
#include "resolvecomponentcandidatesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconnectivityinforequest.h"
#include "updateconnectivityinforesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GreengrassV2
 * \brief Contains classess for accessing AWS IoT Greengrass V2.
 *
 * \inmodule QtAwsGreengrassV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::GreengrassV2Client
 * \brief The GreengrassV2Client class provides access to the AWS IoT Greengrass V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 */

/*!
 * \brief Constructs a GreengrassV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GreengrassV2Client::GreengrassV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GreengrassV2ClientPrivate(this), parent)
{
    Q_D(GreengrassV2Client);
    d->apiVersion = QStringLiteral("2020-11-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Greengrass V2");
    d->serviceName = QStringLiteral("greengrass");
}

/*!
 * \overload GreengrassV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GreengrassV2Client::GreengrassV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GreengrassV2ClientPrivate(this), parent)
{
    Q_D(GreengrassV2Client);
    d->apiVersion = QStringLiteral("2020-11-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Greengrass V2");
    d->serviceName = QStringLiteral("greengrass");
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * AssociateServiceRoleToAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a Greengrass service role with IoT Greengrass for your Amazon Web Services account in this Amazon Web
 * Services Region. IoT Greengrass uses this role to verify the identity of client devices and manage core device
 * connectivity information. The role must include the <a
 * href="https://console.aws.amazon.com/iam/home#/policies/arn:awsiam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy">AWSGreengrassResourceAccessRolePolicy</a>
 * managed policy or a custom policy that defines equivalent permissions for the IoT Greengrass features that you use. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass service role</a>
 * in the <i>IoT Greengrass Version 2 Developer
 */
AssociateServiceRoleToAccountResponse * GreengrassV2Client::associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request)
{
    return qobject_cast<AssociateServiceRoleToAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * BatchAssociateClientDeviceWithCoreDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a list of client devices with a core device. Use this API operation to specify which client devices can
 * discover a core device through cloud discovery. With cloud discovery, client devices connect to IoT Greengrass to
 * retrieve associated core devices' connectivity information and certificates. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-cloud-discovery.html">Configure cloud
 * discovery</a> in the <i>IoT Greengrass V2 Developer
 *
 * Guide</i>> <note>
 *
 * Client devices are local IoT devices that connect to and communicate with an IoT Greengrass core device over MQTT. You
 * can connect client devices to a core device to sync MQTT messages and data to Amazon Web Services IoT Core and interact
 * with client devices in Greengrass components. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interact-with-local-iot-devices.html">Interact with local
 * IoT devices</a> in the <i>IoT Greengrass V2 Developer
 */
BatchAssociateClientDeviceWithCoreDeviceResponse * GreengrassV2Client::batchAssociateClientDeviceWithCoreDevice(const BatchAssociateClientDeviceWithCoreDeviceRequest &request)
{
    return qobject_cast<BatchAssociateClientDeviceWithCoreDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * BatchDisassociateClientDeviceFromCoreDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a list of client devices from a core device. After you disassociate a client device from a core device,
 * the client device won't be able to use cloud discovery to retrieve the core device's connectivity information and
 */
BatchDisassociateClientDeviceFromCoreDeviceResponse * GreengrassV2Client::batchDisassociateClientDeviceFromCoreDevice(const BatchDisassociateClientDeviceFromCoreDeviceRequest &request)
{
    return qobject_cast<BatchDisassociateClientDeviceFromCoreDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * CancelDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a deployment. This operation cancels the deployment for devices that haven't yet received it. If a device
 * already received the deployment, this operation doesn't change anything for that
 */
CancelDeploymentResponse * GreengrassV2Client::cancelDeployment(const CancelDeploymentRequest &request)
{
    return qobject_cast<CancelDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * CreateComponentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a component. Components are software that run on Greengrass core devices. After you develop and test a component
 * on your core device, you can use this operation to upload your component to IoT Greengrass. Then, you can deploy the
 * component to other core
 *
 * devices>
 *
 * You can use this operation to do the
 *
 * following> <ul> <li>
 *
 * <b>Create components from recipes</b>
 *
 * </p
 *
 * Create a component from a recipe, which is a file that defines the component's metadata, parameters, dependencies,
 * lifecycle, artifacts, and platform capability. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/component-recipe-reference.html">IoT Greengrass component
 * recipe reference</a> in the <i>IoT Greengrass V2 Developer
 *
 * Guide</i>>
 *
 * To create a component from a recipe, specify <code>inlineRecipe</code> when you call this
 *
 * operation> </li> <li>
 *
 * <b>Create components from Lambda functions</b>
 *
 * </p
 *
 * Create a component from an Lambda function that runs on IoT Greengrass. This creates a recipe and artifacts from the
 * Lambda function's deployment package. You can use this operation to migrate Lambda functions from IoT Greengrass V1 to
 * IoT Greengrass
 *
 * V2>
 *
 * This function only accepts Lambda functions that use the following
 *
 * runtimes> <ul> <li>
 *
 * Python 2.7 – <code>python2.7</code>
 *
 * </p </li> <li>
 *
 * Python 3.7 – <code>python3.7</code>
 *
 * </p </li> <li>
 *
 * Python 3.8 – <code>python3.8</code>
 *
 * </p </li> <li>
 *
 * Python 3.9 – <code>python3.9</code>
 *
 * </p </li> <li>
 *
 * Java 8 – <code>java8</code>
 *
 * </p </li> <li>
 *
 * Java 11 – <code>java11</code>
 *
 * </p </li> <li>
 *
 * Node.js 10 – <code>nodejs10.x</code>
 *
 * </p </li> <li>
 *
 * Node.js 12 – <code>nodejs12.x</code>
 *
 * </p </li> <li>
 *
 * Node.js 14 – <code>nodejs14.x</code>
 *
 * </p </li> </ul>
 *
 * To create a component from a Lambda function, specify <code>lambdaFunction</code> when you call this
 *
 * operation> <note>
 *
 * IoT Greengrass currently supports Lambda functions on only Linux core
 */
CreateComponentVersionResponse * GreengrassV2Client::createComponentVersion(const CreateComponentVersionRequest &request)
{
    return qobject_cast<CreateComponentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a continuous deployment for a target, which is a Greengrass core device or group of core devices. When you add a
 * new core device to a group of core devices that has a deployment, IoT Greengrass deploys that group's deployment to the
 * new
 *
 * device>
 *
 * You can define one deployment for each target. When you create a new deployment for a target that has an existing
 * deployment, you replace the previous deployment. IoT Greengrass applies the new deployment to the target
 *
 * devices>
 *
 * Every deployment has a revision number that indicates how many deployment revisions you define for a target. Use this
 * operation to create a new revision of an existing
 *
 * deployment>
 *
 * For more information, see the <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create deployments</a> in the
 * <i>IoT Greengrass V2 Developer
 */
CreateDeploymentResponse * GreengrassV2Client::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a version of a component from IoT
 *
 * Greengrass> <note>
 *
 * This operation deletes the component's recipe and artifacts. As a result, deployments that refer to this component
 * version will fail. If you have deployments that use this component version, you can remove the component from the
 * deployment or update the deployment to use a valid
 */
DeleteComponentResponse * GreengrassV2Client::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * DeleteCoreDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Greengrass core device, which is an IoT thing. This operation removes the core device from the list of core
 * devices. This operation doesn't delete the IoT thing. For more information about how to delete the IoT thing, see <a
 * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DeleteThing.html">DeleteThing</a> in the <i>IoT API
 */
DeleteCoreDeviceResponse * GreengrassV2Client::deleteCoreDevice(const DeleteCoreDeviceRequest &request)
{
    return qobject_cast<DeleteCoreDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * DeleteDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a deployment. To delete an active deployment, you must first cancel it. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CancelDeployment.html">CancelDeployment</a>>
 *
 * Deleting a deployment doesn't affect core devices that run that deployment, because core devices store the deployment's
 * configuration on the device. Additionally, core devices can roll back to a previous deployment that has been
 */
DeleteDeploymentResponse * GreengrassV2Client::deleteDeployment(const DeleteDeploymentRequest &request)
{
    return qobject_cast<DeleteDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * DescribeComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for a version of a
 */
DescribeComponentResponse * GreengrassV2Client::describeComponent(const DescribeComponentRequest &request)
{
    return qobject_cast<DescribeComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * DisassociateServiceRoleFromAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the Greengrass service role from IoT Greengrass for your Amazon Web Services account in this Amazon Web
 * Services Region. Without a service role, IoT Greengrass can't verify the identity of client devices or manage core
 * device connectivity information. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass service role</a>
 * in the <i>IoT Greengrass Version 2 Developer
 */
DisassociateServiceRoleFromAccountResponse * GreengrassV2Client::disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request)
{
    return qobject_cast<DisassociateServiceRoleFromAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the recipe for a version of a
 */
GetComponentResponse * GreengrassV2Client::getComponent(const GetComponentRequest &request)
{
    return qobject_cast<GetComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetComponentVersionArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the pre-signed URL to download a public or a Lambda component artifact. Core devices call this operation to
 * identify the URL that they can use to download an artifact to
 */
GetComponentVersionArtifactResponse * GreengrassV2Client::getComponentVersionArtifact(const GetComponentVersionArtifactRequest &request)
{
    return qobject_cast<GetComponentVersionArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetConnectivityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves connectivity information for a Greengrass core
 *
 * device>
 *
 * Connectivity information includes endpoints and ports where client devices can connect to an MQTT broker on the core
 * device. When a client device calls the <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-discover-api.html">IoT Greengrass discovery
 * API</a>, IoT Greengrass returns connectivity information for all of the core devices where the client device can
 * connect. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/connect-client-devices.html">Connect client devices to
 * core devices</a> in the <i>IoT Greengrass Version 2 Developer
 */
GetConnectivityInfoResponse * GreengrassV2Client::getConnectivityInfo(const GetConnectivityInfoRequest &request)
{
    return qobject_cast<GetConnectivityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetCoreDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves metadata for a Greengrass core
 *
 * device> <note>
 *
 * IoT Greengrass relies on individual devices to send status updates to the Amazon Web Services Cloud. If the IoT
 * Greengrass Core software isn't running on the device, or if device isn't connected to the Amazon Web Services Cloud,
 * then the reported status of that device might not reflect its current status. The status timestamp indicates when the
 * device status was last
 *
 * updated>
 *
 * Core devices send status updates at the following
 *
 * times> <ul> <li>
 *
 * When the IoT Greengrass Core software
 *
 * start> </li> <li>
 *
 * When the core device receives a deployment from the Amazon Web Services
 *
 * Clou> </li> <li>
 *
 * When the status of any component on the core device becomes <code>BROKEN</code>
 *
 * </p </li> <li>
 *
 * At a <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
 * interval that you can configure</a>, which defaults to 24
 *
 * hour> </li> <li>
 *
 * For IoT Greengrass Core v2.7.0, the core device sends status updates upon local deployment and cloud
 */
GetCoreDeviceResponse * GreengrassV2Client::getCoreDevice(const GetCoreDeviceRequest &request)
{
    return qobject_cast<GetCoreDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a deployment. Deployments define the components that run on Greengrass core
 */
GetDeploymentResponse * GreengrassV2Client::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * GetServiceRoleForAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the service role associated with IoT Greengrass for your Amazon Web Services account in this Amazon Web Services
 * Region. IoT Greengrass uses this role to verify the identity of client devices and manage core device connectivity
 * information. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass service role</a>
 * in the <i>IoT Greengrass Version 2 Developer
 */
GetServiceRoleForAccountResponse * GreengrassV2Client::getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request)
{
    return qobject_cast<GetServiceRoleForAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListClientDevicesAssociatedWithCoreDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of client devices that are associated with a core
 */
ListClientDevicesAssociatedWithCoreDeviceResponse * GreengrassV2Client::listClientDevicesAssociatedWithCoreDevice(const ListClientDevicesAssociatedWithCoreDeviceRequest &request)
{
    return qobject_cast<ListClientDevicesAssociatedWithCoreDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListComponentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of all versions for a component. Greater versions are listed
 */
ListComponentVersionsResponse * GreengrassV2Client::listComponentVersions(const ListComponentVersionsRequest &request)
{
    return qobject_cast<ListComponentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of component summaries. This list includes components that you have permission to
 */
ListComponentsResponse * GreengrassV2Client::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListCoreDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of Greengrass core
 *
 * devices> <note>
 *
 * IoT Greengrass relies on individual devices to send status updates to the Amazon Web Services Cloud. If the IoT
 * Greengrass Core software isn't running on the device, or if device isn't connected to the Amazon Web Services Cloud,
 * then the reported status of that device might not reflect its current status. The status timestamp indicates when the
 * device status was last
 *
 * updated>
 *
 * Core devices send status updates at the following
 *
 * times> <ul> <li>
 *
 * When the IoT Greengrass Core software
 *
 * start> </li> <li>
 *
 * When the core device receives a deployment from the Amazon Web Services
 *
 * Clou> </li> <li>
 *
 * When the status of any component on the core device becomes <code>BROKEN</code>
 *
 * </p </li> <li>
 *
 * At a <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
 * interval that you can configure</a>, which defaults to 24
 *
 * hour> </li> <li>
 *
 * For IoT Greengrass Core v2.7.0, the core device sends status updates upon local deployment and cloud
 */
ListCoreDevicesResponse * GreengrassV2Client::listCoreDevices(const ListCoreDevicesRequest &request)
{
    return qobject_cast<ListCoreDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of
 */
ListDeploymentsResponse * GreengrassV2Client::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListEffectiveDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of deployment jobs that IoT Greengrass sends to Greengrass core
 */
ListEffectiveDeploymentsResponse * GreengrassV2Client::listEffectiveDeployments(const ListEffectiveDeploymentsRequest &request)
{
    return qobject_cast<ListEffectiveDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListInstalledComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of the components that a Greengrass core device runs. By default, this list doesn't include
 * components that are deployed as dependencies of other components. To include dependencies in the response, set the
 * <code>topologyFilter</code> parameter to
 *
 * <code>ALL</code>> <note>
 *
 * IoT Greengrass relies on individual devices to send status updates to the Amazon Web Services Cloud. If the IoT
 * Greengrass Core software isn't running on the device, or if device isn't connected to the Amazon Web Services Cloud,
 * then the reported status of that device might not reflect its current status. The status timestamp indicates when the
 * device status was last
 *
 * updated>
 *
 * Core devices send status updates at the following
 *
 * times> <ul> <li>
 *
 * When the IoT Greengrass Core software
 *
 * start> </li> <li>
 *
 * When the core device receives a deployment from the Amazon Web Services
 *
 * Clou> </li> <li>
 *
 * When the status of any component on the core device becomes <code>BROKEN</code>
 *
 * </p </li> <li>
 *
 * At a <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
 * interval that you can configure</a>, which defaults to 24
 *
 * hour> </li> <li>
 *
 * For IoT Greengrass Core v2.7.0, the core device sends status updates upon local deployment and cloud
 */
ListInstalledComponentsResponse * GreengrassV2Client::listInstalledComponents(const ListInstalledComponentsRequest &request)
{
    return qobject_cast<ListInstalledComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of tags for an IoT Greengrass
 */
ListTagsForResourceResponse * GreengrassV2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * ResolveComponentCandidatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of components that meet the component, version, and platform requirements of a deployment. Greengrass
 * core devices call this operation when they receive a deployment to identify the components to
 *
 * install>
 *
 * This operation identifies components that meet all dependency requirements for a deployment. If the requirements
 * conflict, then this operation returns an error and the deployment fails. For example, this occurs if component
 * <code>A</code> requires version <code>>2.0.0</code> and component <code>B</code> requires version <code><2.0.0</code> of
 * a component
 *
 * dependency>
 *
 * When you specify the component candidates to resolve, IoT Greengrass compares each component's digest from the core
 * device with the component's digest in the Amazon Web Services Cloud. If the digests don't match, then IoT Greengrass
 * specifies to use the version from the Amazon Web Services
 *
 * Cloud> <b>
 *
 * To use this operation, you must use the data plane API endpoint and authenticate with an IoT device certificate. For
 * more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/greengrass.html">IoT Greengrass endpoints
 * and
 */
ResolveComponentCandidatesResponse * GreengrassV2Client::resolveComponentCandidates(const ResolveComponentCandidatesRequest &request)
{
    return qobject_cast<ResolveComponentCandidatesResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to an IoT Greengrass resource. If a tag already exists for the resource, this operation updates the tag's
 */
TagResourceResponse * GreengrassV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an IoT Greengrass
 */
UntagResourceResponse * GreengrassV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GreengrassV2Client service, and returns a pointer to an
 * UpdateConnectivityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates connectivity information for a Greengrass core
 *
 * device>
 *
 * Connectivity information includes endpoints and ports where client devices can connect to an MQTT broker on the core
 * device. When a client device calls the <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-discover-api.html">IoT Greengrass discovery
 * API</a>, IoT Greengrass returns connectivity information for all of the core devices where the client device can
 * connect. For more information, see <a
 * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/connect-client-devices.html">Connect client devices to
 * core devices</a> in the <i>IoT Greengrass Version 2 Developer
 */
UpdateConnectivityInfoResponse * GreengrassV2Client::updateConnectivityInfo(const UpdateConnectivityInfoRequest &request)
{
    return qobject_cast<UpdateConnectivityInfoResponse *>(send(request));
}

/*!
 * \class QtAws::GreengrassV2::GreengrassV2ClientPrivate
 * \brief The GreengrassV2ClientPrivate class provides private implementation for GreengrassV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a GreengrassV2ClientPrivate object with public implementation \a q.
 */
GreengrassV2ClientPrivate::GreengrassV2ClientPrivate(GreengrassV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GreengrassV2
} // namespace QtAws
