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

#ifndef QTAWS_SSMCLIENT_H
#define QTAWS_SSMCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SSM {

class SsmClientPrivate;

class QTAWS_EXPORT SsmClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SsmClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SsmClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    CancelCommandResponse * cancelCommand(const CancelCommandRequest &request);
    CreateActivationResponse * createActivation(const CreateActivationRequest &request);
    CreateAssociationResponse * createAssociation(const CreateAssociationRequest &request);
    CreateAssociationBatchResponse * createAssociationBatch(const CreateAssociationBatchRequest &request);
    CreateDocumentResponse * createDocument(const CreateDocumentRequest &request);
    DeleteActivationResponse * deleteActivation(const DeleteActivationRequest &request);
    DeleteAssociationResponse * deleteAssociation(const DeleteAssociationRequest &request);
    DeleteDocumentResponse * deleteDocument(const DeleteDocumentRequest &request);
    DeregisterManagedInstanceResponse * deregisterManagedInstance(const DeregisterManagedInstanceRequest &request);
    DescribeActivationsResponse * describeActivations(const DescribeActivationsRequest &request);
    DescribeAssociationResponse * describeAssociation(const DescribeAssociationRequest &request);
    DescribeDocumentResponse * describeDocument(const DescribeDocumentRequest &request);
    DescribeDocumentPermissionResponse * describeDocumentPermission(const DescribeDocumentPermissionRequest &request);
    DescribeInstanceInformationResponse * describeInstanceInformation(const DescribeInstanceInformationRequest &request);
    GetDocumentResponse * getDocument(const GetDocumentRequest &request);
    ListAssociationsResponse * listAssociations(const ListAssociationsRequest &request);
    ListCommandInvocationsResponse * listCommandInvocations(const ListCommandInvocationsRequest &request);
    ListCommandsResponse * listCommands(const ListCommandsRequest &request);
    ListDocumentsResponse * listDocuments(const ListDocumentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDocumentPermissionResponse * modifyDocumentPermission(const ModifyDocumentPermissionRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    SendCommandResponse * sendCommand(const SendCommandRequest &request);
    UpdateAssociationStatusResponse * updateAssociationStatus(const UpdateAssociationStatusRequest &request);
    UpdateManagedInstanceRoleResponse * updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request);

private:
    Q_DECLARE_PRIVATE(SsmClient)
    Q_DISABLE_COPY(SsmClient)

};

} // namespace SSM
} // namespace AWS

#endif
