/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    SsmAddTagsToResourceResponse * addTagsToResource(const SsmAddTagsToResourceRequest &request);
    SsmCancelCommandResponse * cancelCommand(const SsmCancelCommandRequest &request);
    SsmCreateActivationResponse * createActivation(const SsmCreateActivationRequest &request);
    SsmCreateAssociationResponse * createAssociation(const SsmCreateAssociationRequest &request);
    SsmCreateAssociationBatchResponse * createAssociationBatch(const SsmCreateAssociationBatchRequest &request);
    SsmCreateDocumentResponse * createDocument(const SsmCreateDocumentRequest &request);
    SsmDeleteActivationResponse * deleteActivation(const SsmDeleteActivationRequest &request);
    SsmDeleteAssociationResponse * deleteAssociation(const SsmDeleteAssociationRequest &request);
    SsmDeleteDocumentResponse * deleteDocument(const SsmDeleteDocumentRequest &request);
    SsmDeregisterManagedInstanceResponse * deregisterManagedInstance(const SsmDeregisterManagedInstanceRequest &request);
    SsmDescribeActivationsResponse * describeActivations(const SsmDescribeActivationsRequest &request);
    SsmDescribeAssociationResponse * describeAssociation(const SsmDescribeAssociationRequest &request);
    SsmDescribeDocumentResponse * describeDocument(const SsmDescribeDocumentRequest &request);
    SsmDescribeDocumentPermissionResponse * describeDocumentPermission(const SsmDescribeDocumentPermissionRequest &request);
    SsmDescribeInstanceInformationResponse * describeInstanceInformation(const SsmDescribeInstanceInformationRequest &request);
    SsmGetDocumentResponse * getDocument(const SsmGetDocumentRequest &request);
    SsmListAssociationsResponse * listAssociations(const SsmListAssociationsRequest &request);
    SsmListCommandInvocationsResponse * listCommandInvocations(const SsmListCommandInvocationsRequest &request);
    SsmListCommandsResponse * listCommands(const SsmListCommandsRequest &request);
    SsmListDocumentsResponse * listDocuments(const SsmListDocumentsRequest &request);
    SsmListTagsForResourceResponse * listTagsForResource(const SsmListTagsForResourceRequest &request);
    SsmModifyDocumentPermissionResponse * modifyDocumentPermission(const SsmModifyDocumentPermissionRequest &request);
    SsmRemoveTagsFromResourceResponse * removeTagsFromResource(const SsmRemoveTagsFromResourceRequest &request);
    SsmSendCommandResponse * sendCommand(const SsmSendCommandRequest &request);
    SsmUpdateAssociationStatusResponse * updateAssociationStatus(const SsmUpdateAssociationStatusRequest &request);
    SsmUpdateManagedInstanceRoleResponse * updateManagedInstanceRole(const SsmUpdateManagedInstanceRoleRequest &request);

private:
    Q_DECLARE_PRIVATE(SsmClient)
    Q_DISABLE_COPY(SsmClient)

};

QTAWS_END_NAMESPACE

#endif
