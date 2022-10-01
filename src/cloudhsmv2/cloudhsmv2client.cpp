// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudhsmv2client.h"
#include "cloudhsmv2client_p.h"

#include "core/awssignaturev4.h"
#include "copybackuptoregionrequest.h"
#include "copybackuptoregionresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createhsmrequest.h"
#include "createhsmresponse.h"
#include "deletebackuprequest.h"
#include "deletebackupresponse.h"
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
#include "modifybackupattributesrequest.h"
#include "modifybackupattributesresponse.h"
#include "modifyclusterrequest.h"
#include "modifyclusterresponse.h"
#include "restorebackuprequest.h"
#include "restorebackupresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudHsmV2
 * \brief Contains classess for accessing AWS CloudHSM V2.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CloudHsmV2Client
 * \brief The CloudHsmV2Client class provides access to the AWS CloudHSM V2 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 */

/*!
 * \brief Constructs a CloudHsmV2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudHsmV2Client::CloudHsmV2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHsmV2ClientPrivate(this), parent)
{
    Q_D(CloudHsmV2Client);
    d->apiVersion = QStringLiteral("2017-04-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudhsmv2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CloudHSM V2");
    d->serviceName = QStringLiteral("cloudhsm");
}

/*!
 * \overload CloudHsmV2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudHsmV2Client::CloudHsmV2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHsmV2ClientPrivate(this), parent)
{
    Q_D(CloudHsmV2Client);
    d->apiVersion = QStringLiteral("2017-04-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudhsmv2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CloudHSM V2");
    d->serviceName = QStringLiteral("cloudhsm");
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * CopyBackupToRegionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copy an AWS CloudHSM cluster backup to a different
 */
CopyBackupToRegionResponse * CloudHsmV2Client::copyBackupToRegion(const CopyBackupToRegionRequest &request)
{
    return qobject_cast<CopyBackupToRegionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new AWS CloudHSM
 */
CreateClusterResponse * CloudHsmV2Client::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * CreateHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new hardware security module (HSM) in the specified AWS CloudHSM
 */
CreateHsmResponse * CloudHsmV2Client::createHsm(const CreateHsmRequest &request)
{
    return qobject_cast<CreateHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * DeleteBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified AWS CloudHSM backup. A backup can be restored up to 7 days after the DeleteBackup request is made.
 * For more information on restoring a backup, see
 */
DeleteBackupResponse * CloudHsmV2Client::deleteBackup(const DeleteBackupRequest &request)
{
    return qobject_cast<DeleteBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified AWS CloudHSM cluster. Before you can delete a cluster, you must delete all HSMs in the cluster. To
 * see if the cluster contains any HSMs, use <a>DescribeClusters</a>. To delete an HSM, use
 */
DeleteClusterResponse * CloudHsmV2Client::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * DeleteHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified HSM. To specify an HSM, you can use its identifier (ID), the IP address of the HSM's elastic
 * network interface (ENI), or the ID of the HSM's ENI. You need to specify only one of these values. To find these values,
 * use
 */
DeleteHsmResponse * CloudHsmV2Client::deleteHsm(const DeleteHsmRequest &request)
{
    return qobject_cast<DeleteHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
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
DescribeBackupsResponse * CloudHsmV2Client::describeBackups(const DescribeBackupsRequest &request)
{
    return qobject_cast<DescribeBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
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
DescribeClustersResponse * CloudHsmV2Client::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * InitializeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Claims an AWS CloudHSM cluster by submitting the cluster certificate issued by your issuing certificate authority (CA)
 * and the CA's root certificate. Before you can claim a cluster, you must sign the cluster's certificate signing request
 * (CSR) with your issuing CA. To get the cluster's CSR, use
 */
InitializeClusterResponse * CloudHsmV2Client::initializeCluster(const InitializeClusterRequest &request)
{
    return qobject_cast<InitializeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
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
ListTagsResponse * CloudHsmV2Client::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * ModifyBackupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies attributes for AWS CloudHSM
 */
ModifyBackupAttributesResponse * CloudHsmV2Client::modifyBackupAttributes(const ModifyBackupAttributesRequest &request)
{
    return qobject_cast<ModifyBackupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * ModifyClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies AWS CloudHSM
 */
ModifyClusterResponse * CloudHsmV2Client::modifyCluster(const ModifyClusterRequest &request)
{
    return qobject_cast<ModifyClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * RestoreBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a specified AWS CloudHSM backup that is in the <code>PENDING_DELETION</code> state. For mor information on
 * deleting a backup, see
 */
RestoreBackupResponse * CloudHsmV2Client::restoreBackup(const RestoreBackupRequest &request)
{
    return qobject_cast<RestoreBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified AWS CloudHSM
 */
TagResourceResponse * CloudHsmV2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmV2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tag or tags from the specified AWS CloudHSM
 */
UntagResourceResponse * CloudHsmV2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudHsmV2::CloudHsmV2ClientPrivate
 * \brief The CloudHsmV2ClientPrivate class provides private implementation for CloudHsmV2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CloudHsmV2ClientPrivate object with public implementation \a q.
 */
CloudHsmV2ClientPrivate::CloudHsmV2ClientPrivate(CloudHsmV2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudHsmV2
} // namespace QtAws
