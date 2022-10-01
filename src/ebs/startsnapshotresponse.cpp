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

#include "startsnapshotresponse.h"
#include "startsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ebs {

/*!
 * \class QtAws::Ebs::StartSnapshotResponse
 * \brief The StartSnapshotResponse class provides an interace for Ebs StartSnapshot responses.
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
 * \sa EbsClient::startSnapshot
 */

/*!
 * Constructs a StartSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
StartSnapshotResponse::StartSnapshotResponse(
        const StartSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EbsResponse(new StartSnapshotResponsePrivate(this), parent)
{
    setRequest(new StartSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSnapshotRequest * StartSnapshotResponse::request() const
{
    Q_D(const StartSnapshotResponse);
    return static_cast<const StartSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ebs StartSnapshot \a response.
 */
void StartSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ebs::StartSnapshotResponsePrivate
 * \brief The StartSnapshotResponsePrivate class provides private implementation for StartSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsEbs
 */

/*!
 * Constructs a StartSnapshotResponsePrivate object with public implementation \a q.
 */
StartSnapshotResponsePrivate::StartSnapshotResponsePrivate(
    StartSnapshotResponse * const q) : EbsResponsePrivate(q)
{

}

/*!
 * Parses a Ebs StartSnapshot response element from \a xml.
 */
void StartSnapshotResponsePrivate::parseStartSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ebs
} // namespace QtAws
