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

#ifndef QTAWS_KAFKACONNECTCLIENT_H
#define QTAWS_KAFKACONNECTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskafkaconnectglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectClientPrivate;
class CreateConnectorRequest;
class CreateConnectorResponse;
class CreateCustomPluginRequest;
class CreateCustomPluginResponse;
class CreateWorkerConfigurationRequest;
class CreateWorkerConfigurationResponse;
class DeleteConnectorRequest;
class DeleteConnectorResponse;
class DeleteCustomPluginRequest;
class DeleteCustomPluginResponse;
class DescribeConnectorRequest;
class DescribeConnectorResponse;
class DescribeCustomPluginRequest;
class DescribeCustomPluginResponse;
class DescribeWorkerConfigurationRequest;
class DescribeWorkerConfigurationResponse;
class ListConnectorsRequest;
class ListConnectorsResponse;
class ListCustomPluginsRequest;
class ListCustomPluginsResponse;
class ListWorkerConfigurationsRequest;
class ListWorkerConfigurationsResponse;
class UpdateConnectorRequest;
class UpdateConnectorResponse;

class QTAWSKAFKACONNECT_EXPORT KafkaConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KafkaConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KafkaConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConnectorResponse * createConnector(const CreateConnectorRequest &request);
    CreateCustomPluginResponse * createCustomPlugin(const CreateCustomPluginRequest &request);
    CreateWorkerConfigurationResponse * createWorkerConfiguration(const CreateWorkerConfigurationRequest &request);
    DeleteConnectorResponse * deleteConnector(const DeleteConnectorRequest &request);
    DeleteCustomPluginResponse * deleteCustomPlugin(const DeleteCustomPluginRequest &request);
    DescribeConnectorResponse * describeConnector(const DescribeConnectorRequest &request);
    DescribeCustomPluginResponse * describeCustomPlugin(const DescribeCustomPluginRequest &request);
    DescribeWorkerConfigurationResponse * describeWorkerConfiguration(const DescribeWorkerConfigurationRequest &request);
    ListConnectorsResponse * listConnectors(const ListConnectorsRequest &request);
    ListCustomPluginsResponse * listCustomPlugins(const ListCustomPluginsRequest &request);
    ListWorkerConfigurationsResponse * listWorkerConfigurations(const ListWorkerConfigurationsRequest &request);
    UpdateConnectorResponse * updateConnector(const UpdateConnectorRequest &request);

private:
    Q_DECLARE_PRIVATE(KafkaConnectClient)
    Q_DISABLE_COPY(KafkaConnectClient)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
