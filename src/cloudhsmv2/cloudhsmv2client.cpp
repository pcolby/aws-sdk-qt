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

#include "cloudhsmv2client.h"
#include "cloudhsmv2client_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  CloudHSMV2Client
 *
 * @brief  Client for AWS CloudHSM V2
 *
 * For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 */

/**
 * @brief  Constructs a new CloudHSMV2Client object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudHSMV2Client::CloudHSMV2Client(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudHSMV2ClientPrivate(this), parent)
{
    Q_D(CloudHSMV2Client);
    d->apiVersion = QStringLiteral("2017-04-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudhsmv2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CloudHSM V2");
    d->serviceName = QStringLiteral("cloudhsm");
}

/**
 * @brief  Constructs a new CloudHSMV2Client object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CloudHSMV2Client::CloudHSMV2Client(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudHSMV2ClientPrivate(this), parent)
{
    Q_D(CloudHSMV2Client);
    d->apiVersion = QStringLiteral("2017-04-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudhsmv2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CloudHSM V2");
    d->serviceName = QStringLiteral("cloudhsm");
}

/**
 * Creates a new AWS CloudHSM
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterResponse * CloudHSMV2Client::createCluster(const CreateClusterRequest &request)
{

}

/**
 * Creates a new hardware security module (HSM) in the specified AWS CloudHSM
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateHsmResponse * CloudHSMV2Client::createHsm(const CreateHsmRequest &request)
{

}

/**
 * Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster, you must delete all HSMs in the cluster. To
 * see if the cluster contains any HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClusterResponse * CloudHSMV2Client::deleteCluster(const DeleteClusterRequest &request)
{

}

/**
 * Deletes the specified HSM. To specify an HSM, you can use its identifier (ID), the IP address of the HSM's elastic
 * network interface (ENI), or the ID of the HSM's ENI. You need to specify only one of these values. To find these values,
 * use
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteHsmResponse * CloudHSMV2Client::deleteHsm(const DeleteHsmRequest &request)
{

}

/**
 * Gets information about backups of AWS CloudHSM
 *
 * clusters>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the backups. When the
 * response contains only a subset of backups, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>DescribeBackups</code> request to get more backups. When you receive a response with no <code>NextToken</code> (or
 * an empty or null value), that means there are no more backups to
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeBackupsResponse * CloudHSMV2Client::describeBackups(const DescribeBackupsRequest &request)
{

}

/**
 * Gets information about AWS CloudHSM
 *
 * clusters>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the clusters. When the
 * response contains only a subset of clusters, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>DescribeClusters</code> request to get more clusters. When you receive a response with no <code>NextToken</code>
 * (or an empty or null value), that means there are no more clusters to
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClustersResponse * CloudHSMV2Client::describeClusters(const DescribeClustersRequest &request)
{

}

/**
 * Claims an AWS CloudHSM cluster by submitting the cluster certificate issued by your issuing certificate authority (CA)
 * and the CA's root certificate. Before you can claim a cluster, you must sign the cluster's certificate signing request
 * (CSR) with your issuing CA. To get the cluster's CSR, use
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InitializeClusterResponse * CloudHSMV2Client::initializeCluster(const InitializeClusterRequest &request)
{

}

/**
 * Gets a list of tags for the specified AWS CloudHSM
 *
 * cluster>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the tags. When the
 * response contains only a subset of tags, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>ListTags</code> request to get more tags. When you receive a response with no <code>NextToken</code> (or an empty
 * or null value), that means there are no more tags to
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * CloudHSMV2Client::listTags(const ListTagsRequest &request)
{

}

/**
 * Adds or overwrites one or more tags for the specified AWS CloudHSM
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * CloudHSMV2Client::tagResource(const TagResourceRequest &request)
{

}

/**
 * Removes the specified tag or tags from the specified AWS CloudHSM
 *
 * @param  request Request to send to AWS CloudHSM V2.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * CloudHSMV2Client::untagResource(const UntagResourceRequest &request)
{

}

/**
 * @internal
 *
 * @class  CloudHSMV2ClientPrivate
 *
 * @brief  Private implementation for CloudHSMV2Client.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMV2ClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudHSMV2Client instance.
 */
CloudHSMV2ClientPrivate::CloudHSMV2ClientPrivate(CloudHSMV2Client * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudHSMV2
} // namespace AWS
