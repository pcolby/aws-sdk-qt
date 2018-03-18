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

#ifndef QTAWS_OPSWORKSCMCLIENT_H
#define QTAWS_OPSWORKSCMCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace OpsWorksCM {

class OpsWorksCMClientPrivate;

class QTAWS_EXPORT OpsWorksCMClient : public AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksCMClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OpsWorksCMClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    RestoreServerResponse * restoreServer(const RestoreServerRequest &request);
    StartMaintenanceResponse * startMaintenance(const StartMaintenanceRequest &request);
    UpdateServerResponse * updateServer(const UpdateServerRequest &request);
    UpdateServerEngineAttributesResponse * updateServerEngineAttributes(const UpdateServerEngineAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksCMClient)
    Q_DISABLE_COPY(OpsWorksCMClient)

};

} // namespace OpsWorksCM
} // namespace AWS

#endif
