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

#include "iottwinmakerclient.h"
#include "iottwinmakerclient_p.h"

#include "core/awssignaturev4.h"
#include "batchputpropertyvaluesrequest.h"
#include "batchputpropertyvaluesresponse.h"
#include "createcomponenttyperequest.h"
#include "createcomponenttyperesponse.h"
#include "createentityrequest.h"
#include "createentityresponse.h"
#include "createscenerequest.h"
#include "createsceneresponse.h"
#include "createworkspacerequest.h"
#include "createworkspaceresponse.h"
#include "deletecomponenttyperequest.h"
#include "deletecomponenttyperesponse.h"
#include "deleteentityrequest.h"
#include "deleteentityresponse.h"
#include "deletescenerequest.h"
#include "deletesceneresponse.h"
#include "deleteworkspacerequest.h"
#include "deleteworkspaceresponse.h"
#include "getcomponenttyperequest.h"
#include "getcomponenttyperesponse.h"
#include "getentityrequest.h"
#include "getentityresponse.h"
#include "getpropertyvaluerequest.h"
#include "getpropertyvalueresponse.h"
#include "getpropertyvaluehistoryrequest.h"
#include "getpropertyvaluehistoryresponse.h"
#include "getscenerequest.h"
#include "getsceneresponse.h"
#include "getworkspacerequest.h"
#include "getworkspaceresponse.h"
#include "listcomponenttypesrequest.h"
#include "listcomponenttypesresponse.h"
#include "listentitiesrequest.h"
#include "listentitiesresponse.h"
#include "listscenesrequest.h"
#include "listscenesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworkspacesrequest.h"
#include "listworkspacesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecomponenttyperequest.h"
#include "updatecomponenttyperesponse.h"
#include "updateentityrequest.h"
#include "updateentityresponse.h"
#include "updatescenerequest.h"
#include "updatesceneresponse.h"
#include "updateworkspacerequest.h"
#include "updateworkspaceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTTwinMaker
 * \brief Contains classess for accessing AWS IoT TwinMaker.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::IoTTwinMakerClient
 * \brief The IoTTwinMakerClient class provides access to the AWS IoT TwinMaker service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 */

/*!
 * \brief Constructs a IoTTwinMakerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTTwinMakerClient::IoTTwinMakerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTTwinMakerClientPrivate(this), parent)
{
    Q_D(IoTTwinMakerClient);
    d->apiVersion = QStringLiteral("2021-11-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iottwinmaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT TwinMaker");
    d->serviceName = QStringLiteral("iottwinmaker");
}

/*!
 * \overload IoTTwinMakerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTTwinMakerClient::IoTTwinMakerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTTwinMakerClientPrivate(this), parent)
{
    Q_D(IoTTwinMakerClient);
    d->apiVersion = QStringLiteral("2021-11-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iottwinmaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT TwinMaker");
    d->serviceName = QStringLiteral("iottwinmaker");
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * BatchPutPropertyValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets values for multiple time series
 */
BatchPutPropertyValuesResponse * IoTTwinMakerClient::batchPutPropertyValues(const BatchPutPropertyValuesRequest &request)
{
    return qobject_cast<BatchPutPropertyValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * CreateComponentTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a component
 */
CreateComponentTypeResponse * IoTTwinMakerClient::createComponentType(const CreateComponentTypeRequest &request)
{
    return qobject_cast<CreateComponentTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * CreateEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateEntityResponse * IoTTwinMakerClient::createEntity(const CreateEntityRequest &request)
{
    return qobject_cast<CreateEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * CreateSceneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateSceneResponse * IoTTwinMakerClient::createScene(const CreateSceneRequest &request)
{
    return qobject_cast<CreateSceneResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * CreateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateWorkspaceResponse * IoTTwinMakerClient::createWorkspace(const CreateWorkspaceRequest &request)
{
    return qobject_cast<CreateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * DeleteComponentTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a component
 */
DeleteComponentTypeResponse * IoTTwinMakerClient::deleteComponentType(const DeleteComponentTypeRequest &request)
{
    return qobject_cast<DeleteComponentTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * DeleteEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteEntityResponse * IoTTwinMakerClient::deleteEntity(const DeleteEntityRequest &request)
{
    return qobject_cast<DeleteEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * DeleteSceneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteSceneResponse * IoTTwinMakerClient::deleteScene(const DeleteSceneRequest &request)
{
    return qobject_cast<DeleteSceneResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * DeleteWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteWorkspaceResponse * IoTTwinMakerClient::deleteWorkspace(const DeleteWorkspaceRequest &request)
{
    return qobject_cast<DeleteWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetComponentTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a component
 */
GetComponentTypeResponse * IoTTwinMakerClient::getComponentType(const GetComponentTypeRequest &request)
{
    return qobject_cast<GetComponentTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an
 */
GetEntityResponse * IoTTwinMakerClient::getEntity(const GetEntityRequest &request)
{
    return qobject_cast<GetEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetPropertyValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the property values for a component, component type, entity, or
 *
 * workspace>
 *
 * You must specify a value for either <code>componentName</code>, <code>componentTypeId</code>, <code>entityId</code>, or
 */
GetPropertyValueResponse * IoTTwinMakerClient::getPropertyValue(const GetPropertyValueRequest &request)
{
    return qobject_cast<GetPropertyValueResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetPropertyValueHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the history of a time series property value for a component, component type, entity, or
 *
 * workspace>
 *
 * You must specify a value for <code>workspaceId</code>. For entity-specific queries, specify values for
 * <code>componentName</code> and <code>entityId</code>. For cross-entity quries, specify a value for
 */
GetPropertyValueHistoryResponse * IoTTwinMakerClient::getPropertyValueHistory(const GetPropertyValueHistoryRequest &request)
{
    return qobject_cast<GetPropertyValueHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetSceneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
GetSceneResponse * IoTTwinMakerClient::getScene(const GetSceneRequest &request)
{
    return qobject_cast<GetSceneResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * GetWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
GetWorkspaceResponse * IoTTwinMakerClient::getWorkspace(const GetWorkspaceRequest &request)
{
    return qobject_cast<GetWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * ListComponentTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all component types in a
 */
ListComponentTypesResponse * IoTTwinMakerClient::listComponentTypes(const ListComponentTypesRequest &request)
{
    return qobject_cast<ListComponentTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * ListEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all entities in a
 */
ListEntitiesResponse * IoTTwinMakerClient::listEntities(const ListEntitiesRequest &request)
{
    return qobject_cast<ListEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * ListScenesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all scenes in a
 */
ListScenesResponse * IoTTwinMakerClient::listScenes(const ListScenesRequest &request)
{
    return qobject_cast<ListScenesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with a
 */
ListTagsForResourceResponse * IoTTwinMakerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * ListWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about workspaces in the current
 */
ListWorkspacesResponse * IoTTwinMakerClient::listWorkspaces(const ListWorkspacesRequest &request)
{
    return qobject_cast<ListWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to a
 */
TagResourceResponse * IoTTwinMakerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * IoTTwinMakerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * UpdateComponentTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information in a component
 */
UpdateComponentTypeResponse * IoTTwinMakerClient::updateComponentType(const UpdateComponentTypeRequest &request)
{
    return qobject_cast<UpdateComponentTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * UpdateEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateEntityResponse * IoTTwinMakerClient::updateEntity(const UpdateEntityRequest &request)
{
    return qobject_cast<UpdateEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * UpdateSceneResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateSceneResponse * IoTTwinMakerClient::updateScene(const UpdateSceneRequest &request)
{
    return qobject_cast<UpdateSceneResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTTwinMakerClient service, and returns a pointer to an
 * UpdateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateWorkspaceResponse * IoTTwinMakerClient::updateWorkspace(const UpdateWorkspaceRequest &request)
{
    return qobject_cast<UpdateWorkspaceResponse *>(send(request));
}

/*!
 * \class QtAws::IoTTwinMaker::IoTTwinMakerClientPrivate
 * \brief The IoTTwinMakerClientPrivate class provides private implementation for IoTTwinMakerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a IoTTwinMakerClientPrivate object with public implementation \a q.
 */
IoTTwinMakerClientPrivate::IoTTwinMakerClientPrivate(IoTTwinMakerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTTwinMaker
} // namespace QtAws
