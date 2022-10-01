// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotthingsgraphclient.h"
#include "iotthingsgraphclient_p.h"

#include "core/awssignaturev4.h"
#include "associateentitytothingrequest.h"
#include "associateentitytothingresponse.h"
#include "createflowtemplaterequest.h"
#include "createflowtemplateresponse.h"
#include "createsysteminstancerequest.h"
#include "createsysteminstanceresponse.h"
#include "createsystemtemplaterequest.h"
#include "createsystemtemplateresponse.h"
#include "deleteflowtemplaterequest.h"
#include "deleteflowtemplateresponse.h"
#include "deletenamespacerequest.h"
#include "deletenamespaceresponse.h"
#include "deletesysteminstancerequest.h"
#include "deletesysteminstanceresponse.h"
#include "deletesystemtemplaterequest.h"
#include "deletesystemtemplateresponse.h"
#include "deploysysteminstancerequest.h"
#include "deploysysteminstanceresponse.h"
#include "deprecateflowtemplaterequest.h"
#include "deprecateflowtemplateresponse.h"
#include "deprecatesystemtemplaterequest.h"
#include "deprecatesystemtemplateresponse.h"
#include "describenamespacerequest.h"
#include "describenamespaceresponse.h"
#include "dissociateentityfromthingrequest.h"
#include "dissociateentityfromthingresponse.h"
#include "getentitiesrequest.h"
#include "getentitiesresponse.h"
#include "getflowtemplaterequest.h"
#include "getflowtemplateresponse.h"
#include "getflowtemplaterevisionsrequest.h"
#include "getflowtemplaterevisionsresponse.h"
#include "getnamespacedeletionstatusrequest.h"
#include "getnamespacedeletionstatusresponse.h"
#include "getsysteminstancerequest.h"
#include "getsysteminstanceresponse.h"
#include "getsystemtemplaterequest.h"
#include "getsystemtemplateresponse.h"
#include "getsystemtemplaterevisionsrequest.h"
#include "getsystemtemplaterevisionsresponse.h"
#include "getuploadstatusrequest.h"
#include "getuploadstatusresponse.h"
#include "listflowexecutionmessagesrequest.h"
#include "listflowexecutionmessagesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "searchentitiesrequest.h"
#include "searchentitiesresponse.h"
#include "searchflowexecutionsrequest.h"
#include "searchflowexecutionsresponse.h"
#include "searchflowtemplatesrequest.h"
#include "searchflowtemplatesresponse.h"
#include "searchsysteminstancesrequest.h"
#include "searchsysteminstancesresponse.h"
#include "searchsystemtemplatesrequest.h"
#include "searchsystemtemplatesresponse.h"
#include "searchthingsrequest.h"
#include "searchthingsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "undeploysysteminstancerequest.h"
#include "undeploysysteminstanceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateflowtemplaterequest.h"
#include "updateflowtemplateresponse.h"
#include "updatesystemtemplaterequest.h"
#include "updatesystemtemplateresponse.h"
#include "uploadentitydefinitionsrequest.h"
#include "uploadentitydefinitionsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTThingsGraph
 * \brief Contains classess for accessing AWS IoT Things Graph.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphClient
 * \brief The IoTThingsGraphClient class provides access to the AWS IoT Things Graph service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 */

/*!
 * \brief Constructs a IoTThingsGraphClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTThingsGraphClient::IoTThingsGraphClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTThingsGraphClientPrivate(this), parent)
{
    Q_D(IoTThingsGraphClient);
    d->apiVersion = QStringLiteral("2018-09-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iotthingsgraph");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Things Graph");
    d->serviceName = QStringLiteral("iotthingsgraph");
}

/*!
 * \overload IoTThingsGraphClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTThingsGraphClient::IoTThingsGraphClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTThingsGraphClientPrivate(this), parent)
{
    Q_D(IoTThingsGraphClient);
    d->apiVersion = QStringLiteral("2018-09-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iotthingsgraph");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Things Graph");
    d->serviceName = QStringLiteral("iotthingsgraph");
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * AssociateEntityToThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a device with a concrete thing that is in the user's
 *
 * registry>
 *
 * A thing can be associated with only one device at a time. If you associate a thing with a new device id, its previous
 * association will be
 */
AssociateEntityToThingResponse * IoTThingsGraphClient::associateEntityToThing(const AssociateEntityToThingRequest &request)
{
    return qobject_cast<AssociateEntityToThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * CreateFlowTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a workflow template. Workflows can be created only in the user's namespace. (The public namespace contains only
 * entities.) The workflow can contain only entities in the specified namespace. The workflow is validated against the
 * entities in the latest version of the user's namespace unless another namespace version is specified in the
 */
CreateFlowTemplateResponse * IoTThingsGraphClient::createFlowTemplate(const CreateFlowTemplateRequest &request)
{
    return qobject_cast<CreateFlowTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * CreateSystemInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a system instance.
 *
 * </p
 *
 * This action validates the system instance, prepares the deployment-related resources. For Greengrass deployments, it
 * updates the Greengrass group that is specified by the <code>greengrassGroupName</code> parameter. It also adds a file to
 * the S3 bucket specified by the <code>s3BucketName</code> parameter. You need to call <code>DeploySystemInstance</code>
 * after running this
 *
 * action>
 *
 * For Greengrass deployments, since this action modifies and adds resources to a Greengrass group and an S3 bucket on the
 * caller's behalf, the calling identity must have write permissions to both the specified Greengrass group and S3 bucket.
 * Otherwise, the call will fail with an authorization
 *
 * error>
 *
 * For cloud deployments, this action requires a <code>flowActionsRoleArn</code> value. This is an IAM role that has
 * permissions to access AWS services, such as AWS Lambda and AWS IoT, that the flow uses when it
 *
 * executes>
 *
 * If the definition document doesn't specify a version of the user's namespace, the latest version will be used by
 */
CreateSystemInstanceResponse * IoTThingsGraphClient::createSystemInstance(const CreateSystemInstanceRequest &request)
{
    return qobject_cast<CreateSystemInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * CreateSystemTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a system. The system is validated against the entities in the latest version of the user's namespace unless
 * another namespace version is specified in the
 */
CreateSystemTemplateResponse * IoTThingsGraphClient::createSystemTemplate(const CreateSystemTemplateRequest &request)
{
    return qobject_cast<CreateSystemTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeleteFlowTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a workflow. Any new system or deployment that contains this workflow will fail to update or deploy. Existing
 * deployments that contain the workflow will continue to run (since they use a snapshot of the workflow taken at the time
 * of
 */
DeleteFlowTemplateResponse * IoTThingsGraphClient::deleteFlowTemplate(const DeleteFlowTemplateRequest &request)
{
    return qobject_cast<DeleteFlowTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeleteNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified namespace. This action deletes all of the entities in the namespace. Delete the systems and flows
 * that use entities in the namespace before performing this action. This action takes no request
 */
DeleteNamespaceResponse * IoTThingsGraphClient::deleteNamespace(const DeleteNamespaceRequest &request)
{
    return qobject_cast<DeleteNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeleteSystemInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a system instance. Only system instances that have never been deployed, or that have been undeployed can be
 *
 * deleted>
 *
 * Users can create a new system instance that has the same ID as a deleted system
 */
DeleteSystemInstanceResponse * IoTThingsGraphClient::deleteSystemInstance(const DeleteSystemInstanceRequest &request)
{
    return qobject_cast<DeleteSystemInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeleteSystemTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a system. New deployments can't contain the system after its deletion. Existing deployments that contain the
 * system will continue to work because they use a snapshot of the system that is taken when it is
 */
DeleteSystemTemplateResponse * IoTThingsGraphClient::deleteSystemTemplate(const DeleteSystemTemplateRequest &request)
{
    return qobject_cast<DeleteSystemTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeploySystemInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <b>Greengrass and Cloud Deployments</b>
 *
 * </p
 *
 * Deploys the system instance to the target specified in <code>CreateSystemInstance</code>.
 *
 * </p
 *
 * <b>Greengrass Deployments</b>
 *
 * </p
 *
 * If the system or any workflows and entities have been updated before this action is called, then the deployment will
 * create a new Amazon Simple Storage Service resource file and then deploy
 *
 * it>
 *
 * Since this action creates a Greengrass deployment on the caller's behalf, the calling identity must have write
 * permissions to the specified Greengrass group. Otherwise, the call will fail with an authorization
 *
 * error>
 *
 * For information about the artifacts that get added to your Greengrass core device when you use this API, see <a
 * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-greengrass.html">AWS IoT Things Graph and AWS IoT
 */
DeploySystemInstanceResponse * IoTThingsGraphClient::deploySystemInstance(const DeploySystemInstanceRequest &request)
{
    return qobject_cast<DeploySystemInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeprecateFlowTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates the specified workflow. This action marks the workflow for deletion. Deprecated flows can't be deployed, but
 * existing deployments will continue to
 */
DeprecateFlowTemplateResponse * IoTThingsGraphClient::deprecateFlowTemplate(const DeprecateFlowTemplateRequest &request)
{
    return qobject_cast<DeprecateFlowTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DeprecateSystemTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates the specified
 */
DeprecateSystemTemplateResponse * IoTThingsGraphClient::deprecateSystemTemplate(const DeprecateSystemTemplateRequest &request)
{
    return qobject_cast<DeprecateSystemTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DescribeNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the latest version of the user's namespace and the public version that it is
 */
DescribeNamespaceResponse * IoTThingsGraphClient::describeNamespace(const DescribeNamespaceRequest &request)
{
    return qobject_cast<DescribeNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * DissociateEntityFromThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Dissociates a device entity from a concrete thing. The action takes only the type of the entity that you need to
 * dissociate because only one entity of a particular type can be associated with a
 */
DissociateEntityFromThingResponse * IoTThingsGraphClient::dissociateEntityFromThing(const DissociateEntityFromThingRequest &request)
{
    return qobject_cast<DissociateEntityFromThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets definitions of the specified entities. Uses the latest version of the user's namespace by default. This API returns
 * the following TDM
 *
 * entities> <ul> <li>
 *
 * Propertie> </li> <li>
 *
 * State> </li> <li>
 *
 * Event> </li> <li>
 *
 * Action> </li> <li>
 *
 * Capabilitie> </li> <li>
 *
 * Mapping> </li> <li>
 *
 * Device> </li> <li>
 *
 * Device
 *
 * Model> </li> <li>
 *
 * Service> </li> </ul>
 *
 * This action doesn't return definitions for systems, flows, and
 */
GetEntitiesResponse * IoTThingsGraphClient::getEntities(const GetEntitiesRequest &request)
{
    return qobject_cast<GetEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetFlowTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the latest version of the <code>DefinitionDocument</code> and <code>FlowTemplateSummary</code> for the specified
 */
GetFlowTemplateResponse * IoTThingsGraphClient::getFlowTemplate(const GetFlowTemplateRequest &request)
{
    return qobject_cast<GetFlowTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetFlowTemplateRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets revisions of the specified workflow. Only the last 100 revisions are stored. If the workflow has been deprecated,
 * this action will return revisions that occurred before the deprecation. This action won't work for workflows that have
 * been
 */
GetFlowTemplateRevisionsResponse * IoTThingsGraphClient::getFlowTemplateRevisions(const GetFlowTemplateRevisionsRequest &request)
{
    return qobject_cast<GetFlowTemplateRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetNamespaceDeletionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of a namespace deletion
 */
GetNamespaceDeletionStatusResponse * IoTThingsGraphClient::getNamespaceDeletionStatus(const GetNamespaceDeletionStatusRequest &request)
{
    return qobject_cast<GetNamespaceDeletionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetSystemInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a system
 */
GetSystemInstanceResponse * IoTThingsGraphClient::getSystemInstance(const GetSystemInstanceRequest &request)
{
    return qobject_cast<GetSystemInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetSystemTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a
 */
GetSystemTemplateResponse * IoTThingsGraphClient::getSystemTemplate(const GetSystemTemplateRequest &request)
{
    return qobject_cast<GetSystemTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetSystemTemplateRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets revisions made to the specified system template. Only the previous 100 revisions are stored. If the system has been
 * deprecated, this action will return the revisions that occurred before its deprecation. This action won't work with
 * systems that have been
 */
GetSystemTemplateRevisionsResponse * IoTThingsGraphClient::getSystemTemplateRevisions(const GetSystemTemplateRevisionsRequest &request)
{
    return qobject_cast<GetSystemTemplateRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * GetUploadStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of the specified
 */
GetUploadStatusResponse * IoTThingsGraphClient::getUploadStatus(const GetUploadStatusRequest &request)
{
    return qobject_cast<GetUploadStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * ListFlowExecutionMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of objects that contain information about events in a flow
 */
ListFlowExecutionMessagesResponse * IoTThingsGraphClient::listFlowExecutionMessages(const ListFlowExecutionMessagesRequest &request)
{
    return qobject_cast<ListFlowExecutionMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on an AWS IoT Things Graph
 */
ListTagsForResourceResponse * IoTThingsGraphClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for entities of the specified type. You can search for entities in your namespace and the public namespace that
 * you're
 */
SearchEntitiesResponse * IoTThingsGraphClient::searchEntities(const SearchEntitiesRequest &request)
{
    return qobject_cast<SearchEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchFlowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for AWS IoT Things Graph workflow execution
 */
SearchFlowExecutionsResponse * IoTThingsGraphClient::searchFlowExecutions(const SearchFlowExecutionsRequest &request)
{
    return qobject_cast<SearchFlowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchFlowTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for summary information about
 */
SearchFlowTemplatesResponse * IoTThingsGraphClient::searchFlowTemplates(const SearchFlowTemplatesRequest &request)
{
    return qobject_cast<SearchFlowTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchSystemInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for system instances in the user's
 */
SearchSystemInstancesResponse * IoTThingsGraphClient::searchSystemInstances(const SearchSystemInstancesRequest &request)
{
    return qobject_cast<SearchSystemInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchSystemTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for summary information about systems in the user's account. You can filter by the ID of a workflow to return
 * only systems that use the specified
 */
SearchSystemTemplatesResponse * IoTThingsGraphClient::searchSystemTemplates(const SearchSystemTemplatesRequest &request)
{
    return qobject_cast<SearchSystemTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * SearchThingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for things associated with the specified entity. You can search by both device and device
 *
 * model>
 *
 * For example, if two different devices, camera1 and camera2, implement the camera device model, the user can associate
 * thing1 to camera1 and thing2 to camera2. <code>SearchThings(camera2)</code> will return only thing2, but
 * <code>SearchThings(camera)</code> will return both thing1 and
 *
 * thing2>
 *
 * This action searches for exact matches and doesn't perform partial text
 */
SearchThingsResponse * IoTThingsGraphClient::searchThings(const SearchThingsRequest &request)
{
    return qobject_cast<SearchThingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a tag for the specified
 */
TagResourceResponse * IoTThingsGraphClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * UndeploySystemInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a system instance from its target (Cloud or
 */
UndeploySystemInstanceResponse * IoTThingsGraphClient::undeploySystemInstance(const UndeploySystemInstanceRequest &request)
{
    return qobject_cast<UndeploySystemInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from the specified
 */
UntagResourceResponse * IoTThingsGraphClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * UpdateFlowTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified workflow. All deployed systems and system instances that use the workflow will see the changes in
 * the flow when it is redeployed. If you don't want this behavior, copy the workflow (creating a new workflow with a
 * different ID), and update the copy. The workflow can contain only entities in the specified namespace.
 */
UpdateFlowTemplateResponse * IoTThingsGraphClient::updateFlowTemplate(const UpdateFlowTemplateRequest &request)
{
    return qobject_cast<UpdateFlowTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * UpdateSystemTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified system. You don't need to run this action after updating a workflow. Any deployment that uses the
 * system will see the changes in the system when it is
 */
UpdateSystemTemplateResponse * IoTThingsGraphClient::updateSystemTemplate(const UpdateSystemTemplateRequest &request)
{
    return qobject_cast<UpdateSystemTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTThingsGraphClient service, and returns a pointer to an
 * UploadEntityDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Asynchronously uploads one or more entity definitions to the user's namespace. The <code>document</code> parameter is
 * required if <code>syncWithPublicNamespace</code> and <code>deleteExistingEntites</code> are false. If the
 * <code>syncWithPublicNamespace</code> parameter is set to <code>true</code>, the user's namespace will synchronize with
 * the latest version of the public namespace. If <code>deprecateExistingEntities</code> is set to true, all entities in
 * the latest version will be deleted before the new <code>DefinitionDocument</code> is
 *
 * uploaded>
 *
 * When a user uploads entity definitions for the first time, the service creates a new namespace for the user. The new
 * namespace tracks the public namespace. Currently users can have only one namespace. The namespace version increments
 * whenever a user uploads entity definitions that are backwards-incompatible and whenever a user sets the
 * <code>syncWithPublicNamespace</code> parameter or the <code>deprecateExistingEntities</code> parameter to
 *
 * <code>true</code>>
 *
 * The IDs for all of the entities should be in URN format. Each entity must be in the user's namespace. Users can't create
 * entities in the public namespace, but entity definitions can refer to entities in the public
 *
 * namespace>
 *
 * Valid entities are <code>Device</code>, <code>DeviceModel</code>, <code>Service</code>, <code>Capability</code>,
 * <code>State</code>, <code>Action</code>, <code>Event</code>, <code>Property</code>, <code>Mapping</code>,
 * <code>Enum</code>.
 */
UploadEntityDefinitionsResponse * IoTThingsGraphClient::uploadEntityDefinitions(const UploadEntityDefinitionsRequest &request)
{
    return qobject_cast<UploadEntityDefinitionsResponse *>(send(request));
}

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphClientPrivate
 * \brief The IoTThingsGraphClientPrivate class provides private implementation for IoTThingsGraphClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphClientPrivate object with public implementation \a q.
 */
IoTThingsGraphClientPrivate::IoTThingsGraphClientPrivate(IoTThingsGraphClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTThingsGraph
} // namespace QtAws
