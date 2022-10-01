// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kafkaconnectclient.h"
#include "kafkaconnectclient_p.h"

#include "core/awssignaturev4.h"
#include "createconnectorrequest.h"
#include "createconnectorresponse.h"
#include "createcustompluginrequest.h"
#include "createcustompluginresponse.h"
#include "createworkerconfigurationrequest.h"
#include "createworkerconfigurationresponse.h"
#include "deleteconnectorrequest.h"
#include "deleteconnectorresponse.h"
#include "deletecustompluginrequest.h"
#include "deletecustompluginresponse.h"
#include "describeconnectorrequest.h"
#include "describeconnectorresponse.h"
#include "describecustompluginrequest.h"
#include "describecustompluginresponse.h"
#include "describeworkerconfigurationrequest.h"
#include "describeworkerconfigurationresponse.h"
#include "listconnectorsrequest.h"
#include "listconnectorsresponse.h"
#include "listcustompluginsrequest.h"
#include "listcustompluginsresponse.h"
#include "listworkerconfigurationsrequest.h"
#include "listworkerconfigurationsresponse.h"
#include "updateconnectorrequest.h"
#include "updateconnectorresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KafkaConnect
 * \brief Contains classess for accessing Managed Streaming for Kafka Connect.
 *
 * \inmodule QtAwsKafkaConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::KafkaConnectClient
 * \brief The KafkaConnectClient class provides access to the Managed Streaming for Kafka Connect service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKafkaConnect
 *
 */

/*!
 * \brief Constructs a KafkaConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KafkaConnectClient::KafkaConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KafkaConnectClientPrivate(this), parent)
{
    Q_D(KafkaConnectClient);
    d->apiVersion = QStringLiteral("2021-09-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kafkaconnect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Managed Streaming for Kafka Connect");
    d->serviceName = QStringLiteral("kafkaconnect");
}

/*!
 * \overload KafkaConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KafkaConnectClient::KafkaConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KafkaConnectClientPrivate(this), parent)
{
    Q_D(KafkaConnectClient);
    d->apiVersion = QStringLiteral("2021-09-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kafkaconnect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Managed Streaming for Kafka Connect");
    d->serviceName = QStringLiteral("kafkaconnect");
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * CreateConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connector using the specified
 */
CreateConnectorResponse * KafkaConnectClient::createConnector(const CreateConnectorRequest &request)
{
    return qobject_cast<CreateConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * CreateCustomPluginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom plugin using the specified
 */
CreateCustomPluginResponse * KafkaConnectClient::createCustomPlugin(const CreateCustomPluginRequest &request)
{
    return qobject_cast<CreateCustomPluginResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * CreateWorkerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a worker configuration using the specified
 */
CreateWorkerConfigurationResponse * KafkaConnectClient::createWorkerConfiguration(const CreateWorkerConfigurationRequest &request)
{
    return qobject_cast<CreateWorkerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * DeleteConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteConnectorResponse * KafkaConnectClient::deleteConnector(const DeleteConnectorRequest &request)
{
    return qobject_cast<DeleteConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * DeleteCustomPluginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom
 */
DeleteCustomPluginResponse * KafkaConnectClient::deleteCustomPlugin(const DeleteCustomPluginRequest &request)
{
    return qobject_cast<DeleteCustomPluginResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * DescribeConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about the
 */
DescribeConnectorResponse * KafkaConnectClient::describeConnector(const DescribeConnectorRequest &request)
{
    return qobject_cast<DescribeConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * DescribeCustomPluginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A summary description of the custom
 */
DescribeCustomPluginResponse * KafkaConnectClient::describeCustomPlugin(const DescribeCustomPluginRequest &request)
{
    return qobject_cast<DescribeCustomPluginResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * DescribeWorkerConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a worker
 */
DescribeWorkerConfigurationResponse * KafkaConnectClient::describeWorkerConfiguration(const DescribeWorkerConfigurationRequest &request)
{
    return qobject_cast<DescribeWorkerConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * ListConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the connectors in this account and Region. The list is limited to connectors whose name starts
 * with the specified prefix. The response also includes a description of each of the listed
 */
ListConnectorsResponse * KafkaConnectClient::listConnectors(const ListConnectorsRequest &request)
{
    return qobject_cast<ListConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * ListCustomPluginsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the custom plugins in this account and
 */
ListCustomPluginsResponse * KafkaConnectClient::listCustomPlugins(const ListCustomPluginsRequest &request)
{
    return qobject_cast<ListCustomPluginsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * ListWorkerConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the worker configurations in this account and
 */
ListWorkerConfigurationsResponse * KafkaConnectClient::listWorkerConfigurations(const ListWorkerConfigurationsRequest &request)
{
    return qobject_cast<ListWorkerConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaConnectClient service, and returns a pointer to an
 * UpdateConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateConnectorResponse * KafkaConnectClient::updateConnector(const UpdateConnectorRequest &request)
{
    return qobject_cast<UpdateConnectorResponse *>(send(request));
}

/*!
 * \class QtAws::KafkaConnect::KafkaConnectClientPrivate
 * \brief The KafkaConnectClientPrivate class provides private implementation for KafkaConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a KafkaConnectClientPrivate object with public implementation \a q.
 */
KafkaConnectClientPrivate::KafkaConnectClientPrivate(KafkaConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KafkaConnect
} // namespace QtAws
