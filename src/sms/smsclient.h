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

#ifndef QTAWS_SMSCLIENT_H
#define QTAWS_SMSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SMS {

class SmsClientPrivate;

class QTAWS_EXPORT SmsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SmsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SmsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateReplicationJobResponse * createReplicationJob(const CreateReplicationJobRequest &request);
    DeleteReplicationJobResponse * deleteReplicationJob(const DeleteReplicationJobRequest &request);
    DeleteServerCatalogResponse * deleteServerCatalog(const DeleteServerCatalogRequest &request);
    DisassociateConnectorResponse * disassociateConnector(const DisassociateConnectorRequest &request);
    GetConnectorsResponse * getConnectors(const GetConnectorsRequest &request);
    GetReplicationJobsResponse * getReplicationJobs(const GetReplicationJobsRequest &request);
    GetReplicationRunsResponse * getReplicationRuns(const GetReplicationRunsRequest &request);
    GetServersResponse * getServers(const GetServersRequest &request);
    ImportServerCatalogResponse * importServerCatalog(const ImportServerCatalogRequest &request);
    StartOnDemandReplicationRunResponse * startOnDemandReplicationRun(const StartOnDemandReplicationRunRequest &request);
    UpdateReplicationJobResponse * updateReplicationJob(const UpdateReplicationJobRequest &request);

private:
    Q_DECLARE_PRIVATE(SmsClient)
    Q_DISABLE_COPY(SmsClient)

};

} // namespace SMS
} // namespace AWS

#endif
