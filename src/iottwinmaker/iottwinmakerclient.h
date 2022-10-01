// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERCLIENT_H
#define QTAWS_IOTTWINMAKERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiottwinmakerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerClientPrivate;
class BatchPutPropertyValuesRequest;
class BatchPutPropertyValuesResponse;
class CreateComponentTypeRequest;
class CreateComponentTypeResponse;
class CreateEntityRequest;
class CreateEntityResponse;
class CreateSceneRequest;
class CreateSceneResponse;
class CreateWorkspaceRequest;
class CreateWorkspaceResponse;
class DeleteComponentTypeRequest;
class DeleteComponentTypeResponse;
class DeleteEntityRequest;
class DeleteEntityResponse;
class DeleteSceneRequest;
class DeleteSceneResponse;
class DeleteWorkspaceRequest;
class DeleteWorkspaceResponse;
class GetComponentTypeRequest;
class GetComponentTypeResponse;
class GetEntityRequest;
class GetEntityResponse;
class GetPropertyValueRequest;
class GetPropertyValueResponse;
class GetPropertyValueHistoryRequest;
class GetPropertyValueHistoryResponse;
class GetSceneRequest;
class GetSceneResponse;
class GetWorkspaceRequest;
class GetWorkspaceResponse;
class ListComponentTypesRequest;
class ListComponentTypesResponse;
class ListEntitiesRequest;
class ListEntitiesResponse;
class ListScenesRequest;
class ListScenesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkspacesRequest;
class ListWorkspacesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateComponentTypeRequest;
class UpdateComponentTypeResponse;
class UpdateEntityRequest;
class UpdateEntityResponse;
class UpdateSceneRequest;
class UpdateSceneResponse;
class UpdateWorkspaceRequest;
class UpdateWorkspaceResponse;

class QTAWSIOTTWINMAKER_EXPORT IoTTwinMakerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTTwinMakerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTTwinMakerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchPutPropertyValuesResponse * batchPutPropertyValues(const BatchPutPropertyValuesRequest &request);
    CreateComponentTypeResponse * createComponentType(const CreateComponentTypeRequest &request);
    CreateEntityResponse * createEntity(const CreateEntityRequest &request);
    CreateSceneResponse * createScene(const CreateSceneRequest &request);
    CreateWorkspaceResponse * createWorkspace(const CreateWorkspaceRequest &request);
    DeleteComponentTypeResponse * deleteComponentType(const DeleteComponentTypeRequest &request);
    DeleteEntityResponse * deleteEntity(const DeleteEntityRequest &request);
    DeleteSceneResponse * deleteScene(const DeleteSceneRequest &request);
    DeleteWorkspaceResponse * deleteWorkspace(const DeleteWorkspaceRequest &request);
    GetComponentTypeResponse * getComponentType(const GetComponentTypeRequest &request);
    GetEntityResponse * getEntity(const GetEntityRequest &request);
    GetPropertyValueResponse * getPropertyValue(const GetPropertyValueRequest &request);
    GetPropertyValueHistoryResponse * getPropertyValueHistory(const GetPropertyValueHistoryRequest &request);
    GetSceneResponse * getScene(const GetSceneRequest &request);
    GetWorkspaceResponse * getWorkspace(const GetWorkspaceRequest &request);
    ListComponentTypesResponse * listComponentTypes(const ListComponentTypesRequest &request);
    ListEntitiesResponse * listEntities(const ListEntitiesRequest &request);
    ListScenesResponse * listScenes(const ListScenesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkspacesResponse * listWorkspaces(const ListWorkspacesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateComponentTypeResponse * updateComponentType(const UpdateComponentTypeRequest &request);
    UpdateEntityResponse * updateEntity(const UpdateEntityRequest &request);
    UpdateSceneResponse * updateScene(const UpdateSceneRequest &request);
    UpdateWorkspaceResponse * updateWorkspace(const UpdateWorkspaceRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTTwinMakerClient)
    Q_DISABLE_COPY(IoTTwinMakerClient)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
