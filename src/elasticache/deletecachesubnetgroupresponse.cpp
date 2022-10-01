// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachesubnetgroupresponse.h"
#include "deletecachesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheSubnetGroupResponse
 * \brief The DeleteCacheSubnetGroupResponse class provides an interace for ElastiCache DeleteCacheSubnetGroup responses.
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
 * \sa ElastiCacheClient::deleteCacheSubnetGroup
 */

/*!
 * Constructs a DeleteCacheSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCacheSubnetGroupResponse::DeleteCacheSubnetGroupResponse(
        const DeleteCacheSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCacheSubnetGroupRequest * DeleteCacheSubnetGroupResponse::request() const
{
    Q_D(const DeleteCacheSubnetGroupResponse);
    return static_cast<const DeleteCacheSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DeleteCacheSubnetGroup \a response.
 */
void DeleteCacheSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCacheSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheSubnetGroupResponsePrivate
 * \brief The DeleteCacheSubnetGroupResponsePrivate class provides private implementation for DeleteCacheSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheSubnetGroupResponsePrivate object with public implementation \a q.
 */
DeleteCacheSubnetGroupResponsePrivate::DeleteCacheSubnetGroupResponsePrivate(
    DeleteCacheSubnetGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DeleteCacheSubnetGroup response element from \a xml.
 */
void DeleteCacheSubnetGroupResponsePrivate::parseDeleteCacheSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
