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
 * \namespace QtAws::EBS
 * \brief Contains classess for accessing Amazon Elastic Block Store ( EBS).
 *
 * \inmodule QtAwsEbs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EBS {

/*!
 * \class QtAws::EBS::EbsClient
 * \brief The EbsClient class provides access to the Amazon Elastic Block Store ( EBS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEBS
 *
 *  You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create EBS snapshots, write data directly to your
 *  snapshots, read data on your snapshots, and identify the differences or changes between two snapshots. If you’re an
 *  independent software vendor (ISV) who offers backup services for Amazon EBS, the EBS direct APIs make it more efficient
 *  and cost-effective to track incremental changes on your EBS volumes through snapshots. This can be done without having
 *  to create new volumes from snapshots, and then use Amazon Elastic Compute Cloud (Amazon EC2) instances to compare the
 * 
 *  differences>
 * 
 *  You can create incremental snapshots directly from data on-premises into EBS volumes and the cloud to use for quick
 *  disaster recovery. With the ability to write and read snapshots, you can write your on-premises data to an EBS snapshot
 *  during a disaster. Then after recovery, you can restore it back to AWS or on-premises from the snapshot. You no longer
 *  need to build and maintain complex mechanisms to copy data to and from Amazon
 * 
 *  EBS>
 * 
 *  This API reference provides detailed information about the actions, data types, parameters, and errors of the EBS direct
 *  APIs. For more information about the elements that make up the EBS direct APIs, and examples of how to use them
 *  effectively, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing the
 *  Contents of an EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more information about the
 *  supported AWS Regions, endpoints, and service quotas for the EBS direct APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon Elastic Block Store Endpoints and
 *  Quotas</a> in the <i>AWS General
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-11-02"),
    QStringLiteral("ebs"),
    QStringLiteral("Amazon Elastic Block Store"),
    QStringLiteral("ebs"),
    parent), d_ptr(new EbsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-11-02"),
    QStringLiteral("ebs"),
    QStringLiteral("Amazon Elastic Block Store"),
    QStringLiteral("ebs"),
    parent), d_ptr(new EbsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * Data written to a snapshot must be aligned with 512-byte
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
 * \class QtAws::EBS::EbsClientPrivate
 * \brief The EbsClientPrivate class provides private implementation for EbsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a EbsClientPrivate object with public implementation \a q.
 */
EbsClientPrivate::EbsClientPrivate(EbsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace EBS
} // namespace QtAws
