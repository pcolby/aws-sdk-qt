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

#include "kafkaclient.h"
#include "kafkaclient_p.h"

#include "core/awssignaturev4.h"
#include "batchassociatescramsecretrequest.h"
#include "batchassociatescramsecretresponse.h"
#include "batchdisassociatescramsecretrequest.h"
#include "batchdisassociatescramsecretresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createclusterv2request.h"
#include "createclusterv2response.h"
#include "createconfigurationrequest.h"
#include "createconfigurationresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deleteconfigurationrequest.h"
#include "deleteconfigurationresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describeclusteroperationrequest.h"
#include "describeclusteroperationresponse.h"
#include "describeclusterv2request.h"
#include "describeclusterv2response.h"
#include "describeconfigurationrequest.h"
#include "describeconfigurationresponse.h"
#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionresponse.h"
#include "getbootstrapbrokersrequest.h"
#include "getbootstrapbrokersresponse.h"
#include "getcompatiblekafkaversionsrequest.h"
#include "getcompatiblekafkaversionsresponse.h"
#include "listclusteroperationsrequest.h"
#include "listclusteroperationsresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listclustersv2request.h"
#include "listclustersv2response.h"
#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationsrequest.h"
#include "listconfigurationsresponse.h"
#include "listkafkaversionsrequest.h"
#include "listkafkaversionsresponse.h"
#include "listnodesrequest.h"
#include "listnodesresponse.h"
#include "listscramsecretsrequest.h"
#include "listscramsecretsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "rebootbrokerrequest.h"
#include "rebootbrokerresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebrokercountrequest.h"
#include "updatebrokercountresponse.h"
#include "updatebrokerstoragerequest.h"
#include "updatebrokerstorageresponse.h"
#include "updatebrokertyperequest.h"
#include "updatebrokertyperesponse.h"
#include "updateclusterconfigurationrequest.h"
#include "updateclusterconfigurationresponse.h"
#include "updateclusterkafkaversionrequest.h"
#include "updateclusterkafkaversionresponse.h"
#include "updateconfigurationrequest.h"
#include "updateconfigurationresponse.h"
#include "updateconnectivityrequest.h"
#include "updateconnectivityresponse.h"
#include "updatemonitoringrequest.h"
#include "updatemonitoringresponse.h"
#include "updatesecurityrequest.h"
#include "updatesecurityresponse.h"

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
 * BatchAssociateScramSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates one or more Scram Secrets with an Amazon MSK
 */
BatchAssociateScramSecretResponse * KafkaClient::batchAssociateScramSecret(const BatchAssociateScramSecretRequest &request)
{
    return qobject_cast<BatchAssociateScramSecretResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * BatchDisassociateScramSecretResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates one or more Scram Secrets from an Amazon MSK
 */
BatchDisassociateScramSecretResponse * KafkaClient::batchDisassociateScramSecret(const BatchDisassociateScramSecretRequest &request)
{
    return qobject_cast<BatchDisassociateScramSecretResponse *>(send(request));
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
 * CreateClusterV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new MSK
 */
CreateClusterV2Response * KafkaClient::createClusterV2(const CreateClusterV2Request &request)
{
    return qobject_cast<CreateClusterV2Response *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * CreateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new MSK
 */
CreateConfigurationResponse * KafkaClient::createConfiguration(const CreateConfigurationRequest &request)
{
    return qobject_cast<CreateConfigurationResponse *>(send(request));
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
 * DeleteConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an MSK
 */
DeleteConfigurationResponse * KafkaClient::deleteConfiguration(const DeleteConfigurationRequest &request)
{
    return qobject_cast<DeleteConfigurationResponse *>(send(request));
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
 * DescribeClusterOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the cluster operation specified by the
 */
DescribeClusterOperationResponse * KafkaClient::describeClusterOperation(const DescribeClusterOperationRequest &request)
{
    return qobject_cast<DescribeClusterOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * DescribeClusterV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the MSK cluster whose Amazon Resource Name (ARN) is specified in the
 */
DescribeClusterV2Response * KafkaClient::describeClusterV2(const DescribeClusterV2Request &request)
{
    return qobject_cast<DescribeClusterV2Response *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * DescribeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of this MSK
 */
DescribeConfigurationResponse * KafkaClient::describeConfiguration(const DescribeConfigurationRequest &request)
{
    return qobject_cast<DescribeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * DescribeConfigurationRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of this revision of the
 */
DescribeConfigurationRevisionResponse * KafkaClient::describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request)
{
    return qobject_cast<DescribeConfigurationRevisionResponse *>(send(request));
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
 * GetCompatibleKafkaVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Apache Kafka versions to which you can update the MSK
 */
GetCompatibleKafkaVersionsResponse * KafkaClient::getCompatibleKafkaVersions(const GetCompatibleKafkaVersionsRequest &request)
{
    return qobject_cast<GetCompatibleKafkaVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListClusterOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the operations that have been performed on the specified MSK
 */
ListClusterOperationsResponse * KafkaClient::listClusterOperations(const ListClusterOperationsRequest &request)
{
    return qobject_cast<ListClusterOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the MSK clusters in the current
 */
ListClustersResponse * KafkaClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListClustersV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the MSK clusters in the current
 */
ListClustersV2Response * KafkaClient::listClustersV2(const ListClustersV2Request &request)
{
    return qobject_cast<ListClustersV2Response *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListConfigurationRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the MSK configurations in this
 */
ListConfigurationRevisionsResponse * KafkaClient::listConfigurationRevisions(const ListConfigurationRevisionsRequest &request)
{
    return qobject_cast<ListConfigurationRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the MSK configurations in this
 */
ListConfigurationsResponse * KafkaClient::listConfigurations(const ListConfigurationsRequest &request)
{
    return qobject_cast<ListConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListKafkaVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Apache Kafka
 */
ListKafkaVersionsResponse * KafkaClient::listKafkaVersions(const ListKafkaVersionsRequest &request)
{
    return qobject_cast<ListKafkaVersionsResponse *>(send(request));
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
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListScramSecretsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Scram Secrets associated with an Amazon MSK
 */
ListScramSecretsResponse * KafkaClient::listScramSecrets(const ListScramSecretsRequest &request)
{
    return qobject_cast<ListScramSecretsResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags associated with the specified
 */
ListTagsForResourceResponse * KafkaClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * RebootBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
RebootBrokerResponse * KafkaClient::rebootBroker(const RebootBrokerRequest &request)
{
    return qobject_cast<RebootBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified MSK
 */
TagResourceResponse * KafkaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the tags associated with the keys that are provided in the
 */
UntagResourceResponse * KafkaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateBrokerCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the number of broker nodes in the
 */
UpdateBrokerCountResponse * KafkaClient::updateBrokerCount(const UpdateBrokerCountRequest &request)
{
    return qobject_cast<UpdateBrokerCountResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateBrokerStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the EBS storage associated with MSK
 */
UpdateBrokerStorageResponse * KafkaClient::updateBrokerStorage(const UpdateBrokerStorageRequest &request)
{
    return qobject_cast<UpdateBrokerStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateBrokerTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates EC2 instance
 */
UpdateBrokerTypeResponse * KafkaClient::updateBrokerType(const UpdateBrokerTypeRequest &request)
{
    return qobject_cast<UpdateBrokerTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateClusterConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the cluster with the configuration that is specified in the request
 */
UpdateClusterConfigurationResponse * KafkaClient::updateClusterConfiguration(const UpdateClusterConfigurationRequest &request)
{
    return qobject_cast<UpdateClusterConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateClusterKafkaVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Apache Kafka version for the
 */
UpdateClusterKafkaVersionResponse * KafkaClient::updateClusterKafkaVersion(const UpdateClusterKafkaVersionRequest &request)
{
    return qobject_cast<UpdateClusterKafkaVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an MSK
 */
UpdateConfigurationResponse * KafkaClient::updateConfiguration(const UpdateConfigurationRequest &request)
{
    return qobject_cast<UpdateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateConnectivityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the cluster's connectivity
 */
UpdateConnectivityResponse * KafkaClient::updateConnectivity(const UpdateConnectivityRequest &request)
{
    return qobject_cast<UpdateConnectivityResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateMonitoringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the monitoring settings for the cluster. You can use this operation to specify which Apache Kafka metrics you
 * want Amazon MSK to send to Amazon CloudWatch. You can also specify settings for open monitoring with
 */
UpdateMonitoringResponse * KafkaClient::updateMonitoring(const UpdateMonitoringRequest &request)
{
    return qobject_cast<UpdateMonitoringResponse *>(send(request));
}

/*!
 * Sends \a request to the KafkaClient service, and returns a pointer to an
 * UpdateSecurityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the security settings for the cluster. You can use this operation to specify encryption and authentication on
 * existing
 */
UpdateSecurityResponse * KafkaClient::updateSecurity(const UpdateSecurityRequest &request)
{
    return qobject_cast<UpdateSecurityResponse *>(send(request));
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
