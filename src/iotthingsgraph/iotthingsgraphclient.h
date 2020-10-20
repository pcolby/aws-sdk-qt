/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_IOTTHINGSGRAPHCLIENT_H
#define QTAWS_IOTTHINGSGRAPHCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphClientPrivate;
class AssociateEntityToThingRequest;
class AssociateEntityToThingResponse;
class CreateFlowTemplateRequest;
class CreateFlowTemplateResponse;
class CreateSystemInstanceRequest;
class CreateSystemInstanceResponse;
class CreateSystemTemplateRequest;
class CreateSystemTemplateResponse;
class DeleteFlowTemplateRequest;
class DeleteFlowTemplateResponse;
class DeleteNamespaceRequest;
class DeleteNamespaceResponse;
class DeleteSystemInstanceRequest;
class DeleteSystemInstanceResponse;
class DeleteSystemTemplateRequest;
class DeleteSystemTemplateResponse;
class DeploySystemInstanceRequest;
class DeploySystemInstanceResponse;
class DeprecateFlowTemplateRequest;
class DeprecateFlowTemplateResponse;
class DeprecateSystemTemplateRequest;
class DeprecateSystemTemplateResponse;
class DescribeNamespaceRequest;
class DescribeNamespaceResponse;
class DissociateEntityFromThingRequest;
class DissociateEntityFromThingResponse;
class GetEntitiesRequest;
class GetEntitiesResponse;
class GetFlowTemplateRequest;
class GetFlowTemplateResponse;
class GetFlowTemplateRevisionsRequest;
class GetFlowTemplateRevisionsResponse;
class GetNamespaceDeletionStatusRequest;
class GetNamespaceDeletionStatusResponse;
class GetSystemInstanceRequest;
class GetSystemInstanceResponse;
class GetSystemTemplateRequest;
class GetSystemTemplateResponse;
class GetSystemTemplateRevisionsRequest;
class GetSystemTemplateRevisionsResponse;
class GetUploadStatusRequest;
class GetUploadStatusResponse;
class ListFlowExecutionMessagesRequest;
class ListFlowExecutionMessagesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class SearchEntitiesRequest;
class SearchEntitiesResponse;
class SearchFlowExecutionsRequest;
class SearchFlowExecutionsResponse;
class SearchFlowTemplatesRequest;
class SearchFlowTemplatesResponse;
class SearchSystemInstancesRequest;
class SearchSystemInstancesResponse;
class SearchSystemTemplatesRequest;
class SearchSystemTemplatesResponse;
class SearchThingsRequest;
class SearchThingsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UndeploySystemInstanceRequest;
class UndeploySystemInstanceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFlowTemplateRequest;
class UpdateFlowTemplateResponse;
class UpdateSystemTemplateRequest;
class UpdateSystemTemplateResponse;
class UploadEntityDefinitionsRequest;
class UploadEntityDefinitionsResponse;

class QTAWS_EXPORT IoTThingsGraphClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTThingsGraphClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTThingsGraphClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateEntityToThingResponse * associateEntityToThing(const AssociateEntityToThingRequest &request);
    CreateFlowTemplateResponse * createFlowTemplate(const CreateFlowTemplateRequest &request);
    CreateSystemInstanceResponse * createSystemInstance(const CreateSystemInstanceRequest &request);
    CreateSystemTemplateResponse * createSystemTemplate(const CreateSystemTemplateRequest &request);
    DeleteFlowTemplateResponse * deleteFlowTemplate(const DeleteFlowTemplateRequest &request);
    DeleteNamespaceResponse * deleteNamespace(const DeleteNamespaceRequest &request);
    DeleteSystemInstanceResponse * deleteSystemInstance(const DeleteSystemInstanceRequest &request);
    DeleteSystemTemplateResponse * deleteSystemTemplate(const DeleteSystemTemplateRequest &request);
    DeploySystemInstanceResponse * deploySystemInstance(const DeploySystemInstanceRequest &request);
    DeprecateFlowTemplateResponse * deprecateFlowTemplate(const DeprecateFlowTemplateRequest &request);
    DeprecateSystemTemplateResponse * deprecateSystemTemplate(const DeprecateSystemTemplateRequest &request);
    DescribeNamespaceResponse * describeNamespace(const DescribeNamespaceRequest &request);
    DissociateEntityFromThingResponse * dissociateEntityFromThing(const DissociateEntityFromThingRequest &request);
    GetEntitiesResponse * getEntities(const GetEntitiesRequest &request);
    GetFlowTemplateResponse * getFlowTemplate(const GetFlowTemplateRequest &request);
    GetFlowTemplateRevisionsResponse * getFlowTemplateRevisions(const GetFlowTemplateRevisionsRequest &request);
    GetNamespaceDeletionStatusResponse * getNamespaceDeletionStatus(const GetNamespaceDeletionStatusRequest &request);
    GetSystemInstanceResponse * getSystemInstance(const GetSystemInstanceRequest &request);
    GetSystemTemplateResponse * getSystemTemplate(const GetSystemTemplateRequest &request);
    GetSystemTemplateRevisionsResponse * getSystemTemplateRevisions(const GetSystemTemplateRevisionsRequest &request);
    GetUploadStatusResponse * getUploadStatus(const GetUploadStatusRequest &request);
    ListFlowExecutionMessagesResponse * listFlowExecutionMessages(const ListFlowExecutionMessagesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SearchEntitiesResponse * searchEntities(const SearchEntitiesRequest &request);
    SearchFlowExecutionsResponse * searchFlowExecutions(const SearchFlowExecutionsRequest &request);
    SearchFlowTemplatesResponse * searchFlowTemplates(const SearchFlowTemplatesRequest &request);
    SearchSystemInstancesResponse * searchSystemInstances(const SearchSystemInstancesRequest &request);
    SearchSystemTemplatesResponse * searchSystemTemplates(const SearchSystemTemplatesRequest &request);
    SearchThingsResponse * searchThings(const SearchThingsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UndeploySystemInstanceResponse * undeploySystemInstance(const UndeploySystemInstanceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFlowTemplateResponse * updateFlowTemplate(const UpdateFlowTemplateRequest &request);
    UpdateSystemTemplateResponse * updateSystemTemplate(const UpdateSystemTemplateRequest &request);
    UploadEntityDefinitionsResponse * uploadEntityDefinitions(const UploadEntityDefinitionsRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTThingsGraphClient)
    Q_DISABLE_COPY(IoTThingsGraphClient)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
