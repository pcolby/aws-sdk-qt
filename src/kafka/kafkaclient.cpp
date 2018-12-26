/*
    Copyright 2013-2018 Paul Colby

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

#include "kafkaclient.h"
#include "kafkaclient_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "getbootstrapbrokersrequest.h"
#include "getbootstrapbrokersresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listnodesrequest.h"
#include "listnodesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Kafka
 * \brief Contains classess for accessing Managed Streaming for Kafka.
 *
 * \inmodule QtAwsKafka
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::KafkaClient
 * \brief The KafkaClient class provides access to the Managed Streaming for Kafka service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 */

/*!
 * \brief Constructs a KafkaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KafkaClient::KafkaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KafkaClientPrivate(this), parent)
{
    Q_D(KafkaClient);
    d->apiVersion = QStringLiteral("2018-11-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kafka");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Managed Streaming for Kafka");
    d->serviceName = QStringLiteral("kafka");
}

/*!
 * \overload KafkaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KafkaClient::KafkaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KafkaClientPrivate(this), parent)
{
    Q_D(KafkaClient);
    d->apiVersion = QStringLiteral("2018-11-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kafka");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Managed Streaming for Kafka");
    d->serviceName = QStringLiteral("kafka");
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new MSK
 */
CreateClusterResponse * KafkaClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the MSK cluster specified by the Amazon Resource Name (ARN) in the
 */
DeleteClusterResponse * KafkaClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * DescribeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the MSK cluster whose Amazon Resource Name (ARN) is specified in the
 */
DescribeClusterResponse * KafkaClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * GetBootstrapBrokersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of brokers that a client application can use to
 */
GetBootstrapBrokersResponse * KafkaClient::getBootstrapBrokers(const GetBootstrapBrokersRequest &request)
{
    return qobject_cast<GetBootstrapBrokersResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of clusters in an
 */
ListClustersResponse * KafkaClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the broker nodes in the
 */
ListNodesResponse * KafkaClient::listNodes(const ListNodesRequest &request)
{
    return qobject_cast<ListNodesResponse *>(send(request));
}

/*!
 * \class QtAws::Kafka::KafkaClientPrivate
 * \brief The KafkaClientPrivate class provides private implementation for KafkaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a KafkaClientPrivate object with public implementation \a q.
 */
KafkaClientPrivate::KafkaClientPrivate(KafkaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Kafka
} // namespace QtAws
