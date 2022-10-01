// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMCLIENT_H
#define QTAWS_OPSWORKSCMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsopsworkscmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmClientPrivate;
class AssociateNodeRequest;
class AssociateNodeResponse;
class CreateBackupRequest;
class CreateBackupResponse;
class CreateServerRequest;
class CreateServerResponse;
class DeleteBackupRequest;
class DeleteBackupResponse;
class DeleteServerRequest;
class DeleteServerResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
class DescribeBackupsRequest;
class DescribeBackupsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeNodeAssociationStatusRequest;
class DescribeNodeAssociationStatusResponse;
class DescribeServersRequest;
class DescribeServersResponse;
class DisassociateNodeRequest;
class DisassociateNodeResponse;
class ExportServerEngineAttributeRequest;
class ExportServerEngineAttributeResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RestoreServerRequest;
class RestoreServerResponse;
class StartMaintenanceRequest;
class StartMaintenanceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateServerRequest;
class UpdateServerResponse;
class UpdateServerEngineAttributesRequest;
class UpdateServerEngineAttributesResponse;

class QTAWSOPSWORKSCM_EXPORT OpsWorksCmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksCmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit OpsWorksCmClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateNodeResponse * associateNode(const AssociateNodeRequest &request);
    CreateBackupResponse * createBackup(const CreateBackupRequest &request);
    CreateServerResponse * createServer(const CreateServerRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteServerResponse * deleteServer(const DeleteServerRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeNodeAssociationStatusResponse * describeNodeAssociationStatus(const DescribeNodeAssociationStatusRequest &request);
    DescribeServersResponse * describeServers(const DescribeServersRequest &request);
    DisassociateNodeResponse * disassociateNode(const DisassociateNodeRequest &request);
    ExportServerEngineAttributeResponse * exportServerEngineAttribute(const ExportServerEngineAttributeRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RestoreServerResponse * restoreServer(const RestoreServerRequest &request);
    StartMaintenanceResponse * startMaintenance(const StartMaintenanceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateServerResponse * updateServer(const UpdateServerRequest &request);
    UpdateServerEngineAttributesResponse * updateServerEngineAttributes(const UpdateServerEngineAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksCmClient)
    Q_DISABLE_COPY(OpsWorksCmClient)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
