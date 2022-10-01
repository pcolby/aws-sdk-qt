// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnapshotblocksresponse.h"
#include "listsnapshotblocksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ebs {

/*!
 * \class QtAws::Ebs::ListSnapshotBlocksResponse
 * \brief The ListSnapshotBlocksResponse class provides an interace for Ebs ListSnapshotBlocks responses.
 *
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
 *
 * \sa EbsClient::listSnapshotBlocks
 */

/*!
 * Constructs a ListSnapshotBlocksResponse object for \a reply to \a request, with parent \a parent.
 */
ListSnapshotBlocksResponse::ListSnapshotBlocksResponse(
        const ListSnapshotBlocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EbsResponse(new ListSnapshotBlocksResponsePrivate(this), parent)
{
    setRequest(new ListSnapshotBlocksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSnapshotBlocksRequest * ListSnapshotBlocksResponse::request() const
{
    Q_D(const ListSnapshotBlocksResponse);
    return static_cast<const ListSnapshotBlocksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ebs ListSnapshotBlocks \a response.
 */
void ListSnapshotBlocksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSnapshotBlocksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ebs::ListSnapshotBlocksResponsePrivate
 * \brief The ListSnapshotBlocksResponsePrivate class provides private implementation for ListSnapshotBlocksResponse.
 * \internal
 *
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a ListSnapshotBlocksResponsePrivate object with public implementation \a q.
 */
ListSnapshotBlocksResponsePrivate::ListSnapshotBlocksResponsePrivate(
    ListSnapshotBlocksResponse * const q) : EbsResponsePrivate(q)
{

}

/*!
 * Parses a Ebs ListSnapshotBlocks response element from \a xml.
 */
void ListSnapshotBlocksResponsePrivate::parseListSnapshotBlocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSnapshotBlocksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ebs
} // namespace QtAws
