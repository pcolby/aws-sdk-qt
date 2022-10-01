// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ebsclient.h"
#include "ebsclient_p.h"

#include "core/awssignaturev4.h"
#include "completesnapshotrequest.h"
#include "completesnapshotresponse.h"
#include "getsnapshotblockrequest.h"
#include "getsnapshotblockresponse.h"
#include "listchangedblocksrequest.h"
#include "listchangedblocksresponse.h"
#include "listsnapshotblocksrequest.h"
#include "listsnapshotblocksresponse.h"
#include "putsnapshotblockrequest.h"
#include "putsnapshotblockresponse.h"
#include "startsnapshotrequest.h"
#include "startsnapshotresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Ebs
 * \brief Contains classess for accessing Amazon Elastic Block Store.
 *
 * \inmodule QtAwsEbs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Ebs {

/*!
 * \class QtAws::Ebs::EbsClient
 * \brief The EbsClient class provides access to the Amazon Elastic Block Store service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEbs
 *
 *  You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create Amazon EBS snapshots, write data directly
 *  to your snapshots, read data on your snapshots, and identify the differences or changes between two snapshots. If you’re
 *  an independent software vendor (ISV) who offers backup services for Amazon EBS, the EBS direct APIs make it more
 *  efficient and cost-effective to track incremental changes on your Amazon EBS volumes through snapshots. This can be done
 *  without having to create new volumes from snapshots, and then use Amazon Elastic Compute Cloud (Amazon EC2) instances to
 *  compare the
 * 
 *  differences>
 * 
 *  You can create incremental snapshots directly from data on-premises into volumes and the cloud to use for quick disaster
 *  recovery. With the ability to write and read snapshots, you can write your on-premises data to an snapshot during a
 *  disaster. Then after recovery, you can restore it back to Amazon Web Services or on-premises from the snapshot. You no
 *  longer need to build and maintain complex mechanisms to copy data to and from Amazon
 * 
 *  EBS>
 * 
 *  This API reference provides detailed information about the actions, data types, parameters, and errors of the EBS direct
 *  APIs. For more information about the elements that make up the EBS direct APIs, and examples of how to use them
 *  effectively, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing the
 *  Contents of an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more information about
 *  the supported Amazon Web Services Regions, endpoints, and service quotas for the EBS direct APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon Elastic Block Store Endpoints and
 *  Quotas</a> in the <i>Amazon Web Services General
 */

/*!
 * \brief Constructs a EbsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EbsClient::EbsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EbsClientPrivate(this), parent)
{
    Q_D(EbsClient);
    d->apiVersion = QStringLiteral("2019-11-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ebs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic Block Store");
    d->serviceName = QStringLiteral("ebs");
}

/*!
 * \overload EbsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EbsClient::EbsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EbsClientPrivate(this), parent)
{
    Q_D(EbsClient);
    d->apiVersion = QStringLiteral("2019-11-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ebs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic Block Store");
    d->serviceName = QStringLiteral("ebs");
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * CompleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Seals and completes the snapshot after all of the required blocks of data have been written to it. Completing the
 * snapshot changes the status to <code>completed</code>. You cannot write new blocks to a snapshot after it has been
 */
CompleteSnapshotResponse * EbsClient::completeSnapshot(const CompleteSnapshotRequest &request)
{
    return qobject_cast<CompleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * GetSnapshotBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data in a block in an Amazon Elastic Block Store
 */
GetSnapshotBlockResponse * EbsClient::getSnapshotBlock(const GetSnapshotBlockRequest &request)
{
    return qobject_cast<GetSnapshotBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * ListChangedBlocksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the blocks that are different between two Amazon Elastic Block Store snapshots of the same
 * volume/snapshot
 */
ListChangedBlocksResponse * EbsClient::listChangedBlocks(const ListChangedBlocksRequest &request)
{
    return qobject_cast<ListChangedBlocksResponse *>(send(request));
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * ListSnapshotBlocksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the blocks in an Amazon Elastic Block Store
 */
ListSnapshotBlocksResponse * EbsClient::listSnapshotBlocks(const ListSnapshotBlocksRequest &request)
{
    return qobject_cast<ListSnapshotBlocksResponse *>(send(request));
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * PutSnapshotBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes a block of data to a snapshot. If the specified block contains data, the existing data is overwritten. The target
 * snapshot must be in the <code>pending</code>
 *
 * state>
 *
 * Data written to a snapshot must be aligned with 512-KiB
 */
PutSnapshotBlockResponse * EbsClient::putSnapshotBlock(const PutSnapshotBlockRequest &request)
{
    return qobject_cast<PutSnapshotBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the EbsClient service, and returns a pointer to an
 * StartSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon EBS snapshot. The new snapshot enters the <code>pending</code> state after the request completes.
 *
 * </p
 *
 * After creating the snapshot, use <a
 * href="https://docs.aws.amazon.com/ebs/latest/APIReference/API_PutSnapshotBlock.html"> PutSnapshotBlock</a> to write
 * blocks of data to the
 */
StartSnapshotResponse * EbsClient::startSnapshot(const StartSnapshotRequest &request)
{
    return qobject_cast<StartSnapshotResponse *>(send(request));
}

/*!
 * \class QtAws::Ebs::EbsClientPrivate
 * \brief The EbsClientPrivate class provides private implementation for EbsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a EbsClientPrivate object with public implementation \a q.
 */
EbsClientPrivate::EbsClientPrivate(EbsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Ebs
} // namespace QtAws
