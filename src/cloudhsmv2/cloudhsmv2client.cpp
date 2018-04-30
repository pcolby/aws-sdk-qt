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

#include "cloudhsmv2client.h"
#include "cloudhsmv2client_p.h"

#include "core/awssignaturev4.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createhsmrequest.h"
#include "createhsmresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deletehsmrequest.h"
#include "deletehsmresponse.h"
#include "describebackupsrequest.h"
#include "describebackupsresponse.h"
#include "describeclustersrequest.h"
#include "describeclustersresponse.h"
#include "initializeclusterrequest.h"
#include "initializeclusterresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudHSMV2
 * \brief Contains classess for accessing AWS CloudHSM V2.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CloudHSMV2Client
 * \brief The CloudHSMV2Client class provides access to the AWS CloudHSM V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 */

/*!
 * \brief Constructs a CloudHSMV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudHSMV2Client::CloudHSMV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHSMV2ClientPrivate(this), parent)
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

/*!
 * \overload CloudHSMV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudHSMV2Client::CloudHSMV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHSMV2ClientPrivate(this), parent)
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

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new AWS CloudHSM
 */
CreateClusterResponse * CloudHSMV2Client::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * CreateHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new hardware security module (HSM) in the specified AWS CloudHSM
 */
CreateHsmResponse * CloudHSMV2Client::createHsm(const CreateHsmRequest &request)
{
    return qobject_cast<CreateHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster, you must delete all HSMs in the cluster. To
 * see if the cluster contains any HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
 */
DeleteClusterResponse * CloudHSMV2Client::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * DeleteHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified HSM. To specify an HSM, you can use its identifier (ID), the IP address of the HSM's elastic
 * network interface (ENI), or the ID of the HSM's ENI. You need to specify only one of these values. To find these values,
 * use
 */
DeleteHsmResponse * CloudHSMV2Client::deleteHsm(const DeleteHsmRequest &request)
{
    return qobject_cast<DeleteHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * DescribeBackupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about backups of AWS CloudHSM
 *
 * clusters>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the backups. When the
 * response contains only a subset of backups, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>DescribeBackups</code> request to get more backups. When you receive a response with no <code>NextToken</code> (or
 * an empty or null value), that means there are no more backups to
 */
DescribeBackupsResponse * CloudHSMV2Client::describeBackups(const DescribeBackupsRequest &request)
{
    return qobject_cast<DescribeBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * DescribeClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS CloudHSM
 *
 * clusters>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the clusters. When the
 * response contains only a subset of clusters, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>DescribeClusters</code> request to get more clusters. When you receive a response with no <code>NextToken</code>
 * (or an empty or null value), that means there are no more clusters to
 */
DescribeClustersResponse * CloudHSMV2Client::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * InitializeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Claims an AWS CloudHSM cluster by submitting the cluster certificate issued by your issuing certificate authority (CA)
 * and the CA's root certificate. Before you can claim a cluster, you must sign the cluster's certificate signing request
 * (CSR) with your issuing CA. To get the cluster's CSR, use
 */
InitializeClusterResponse * CloudHSMV2Client::initializeCluster(const InitializeClusterRequest &request)
{
    return qobject_cast<InitializeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of tags for the specified AWS CloudHSM
 *
 * cluster>
 *
 * This is a paginated operation, which means that each response might contain only a subset of all the tags. When the
 * response contains only a subset of tags, it includes a <code>NextToken</code> value. Use this value in a subsequent
 * <code>ListTags</code> request to get more tags. When you receive a response with no <code>NextToken</code> (or an empty
 * or null value), that means there are no more tags to
 */
ListTagsResponse * CloudHSMV2Client::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified AWS CloudHSM
 */
TagResourceResponse * CloudHSMV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHSMV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tag or tags from the specified AWS CloudHSM
 */
UntagResourceResponse * CloudHSMV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudHSMV2::CloudHSMV2ClientPrivate
 * \brief The CloudHSMV2ClientPrivate class provides private implementation for CloudHSMV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CloudHSMV2ClientPrivate object with public implementation \a q.
 */
CloudHSMV2ClientPrivate::CloudHSMV2ClientPrivate(CloudHSMV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudHSMV2
} // namespace QtAws
