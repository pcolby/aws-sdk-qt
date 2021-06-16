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

#ifndef QTAWS_OPSWORKSCMCLIENT_H
#define QTAWS_OPSWORKSCMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace OpsWorksCM {

class OpsWorksCMClientPrivate;
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
class RestoreServerRequest;
class RestoreServerResponse;
class StartMaintenanceRequest;
class StartMaintenanceResponse;
class UpdateServerRequest;
class UpdateServerResponse;
class UpdateServerEngineAttributesRequest;
class UpdateServerEngineAttributesResponse;

class QTAWS_EXPORT OpsWorksCMClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksCMClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OpsWorksCMClient(
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
    RestoreServerResponse * restoreServer(const RestoreServerRequest &request);
    StartMaintenanceResponse * startMaintenance(const StartMaintenanceRequest &request);
    UpdateServerResponse * updateServer(const UpdateServerRequest &request);
    UpdateServerEngineAttributesResponse * updateServerEngineAttributes(const UpdateServerEngineAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksCMClient)
    Q_DISABLE_COPY(OpsWorksCMClient)

};

} // namespace OpsWorksCM
} // namespace QtAws

#endif
