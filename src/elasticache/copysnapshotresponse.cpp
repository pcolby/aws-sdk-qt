// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copysnapshotresponse.h"
#include "copysnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CopySnapshotResponse
 * \brief The CopySnapshotResponse class provides an interace for ElastiCache CopySnapshot responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::copySnapshot
 */

/*!
 * Constructs a CopySnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CopySnapshotResponse::CopySnapshotResponse(
        const CopySnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CopySnapshotResponsePrivate(this), parent)
{
    setRequest(new CopySnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopySnapshotRequest * CopySnapshotResponse::request() const
{
    Q_D(const CopySnapshotResponse);
    return static_cast<const CopySnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CopySnapshot \a response.
 */
void CopySnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopySnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CopySnapshotResponsePrivate
 * \brief The CopySnapshotResponsePrivate class provides private implementation for CopySnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CopySnapshotResponsePrivate object with public implementation \a q.
 */
CopySnapshotResponsePrivate::CopySnapshotResponsePrivate(
    CopySnapshotResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CopySnapshot response element from \a xml.
 */
void CopySnapshotResponsePrivate::parseCopySnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopySnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
