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

#ifndef QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H
#define QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ApplicationDiscoveryService {

class ApplicationDiscoveryServiceClientPrivate;

class QTAWS_EXPORT ApplicationDiscoveryServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationDiscoveryServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ApplicationDiscoveryServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAgentsResponse * describeAgents(const DescribeAgentsRequest &request);
    DescribeConfigurationsResponse * describeConfigurations(const DescribeConfigurationsRequest &request);
    DescribeExportConfigurationsResponse * describeExportConfigurations(const DescribeExportConfigurationsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    ExportConfigurationsResponse * exportConfigurations();
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    StartDataCollectionByAgentIdsResponse * startDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest &request);
    StopDataCollectionByAgentIdsResponse * stopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryServiceClient)
    Q_DISABLE_COPY(ApplicationDiscoveryServiceClient)

};

} // namespace ApplicationDiscoveryService
} // namespace AWS

#endif
