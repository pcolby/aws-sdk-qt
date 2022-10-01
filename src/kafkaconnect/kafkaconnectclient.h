// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
