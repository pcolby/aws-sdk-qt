// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteglobalreplicationgroupresponse.h"
#include "deleteglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteGlobalReplicationGroupResponse
 * \brief The DeleteGlobalReplicationGroupResponse class provides an interace for ElastiCache DeleteGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::deleteGlobalReplicationGroup
 */

/*!
 * Constructs a DeleteGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGlobalReplicationGroupResponse::DeleteGlobalReplicationGroupResponse(
        const DeleteGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGlobalReplicationGroupRequest * DeleteGlobalReplicationGroupResponse::request() const
{
    Q_D(const DeleteGlobalReplicationGroupResponse);
    return static_cast<const DeleteGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DeleteGlobalReplicationGroup \a response.
 */
void DeleteGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DeleteGlobalReplicationGroupResponsePrivate
 * \brief The DeleteGlobalReplicationGroupResponsePrivate class provides private implementation for DeleteGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
DeleteGlobalReplicationGroupResponsePrivate::DeleteGlobalReplicationGroupResponsePrivate(
    DeleteGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DeleteGlobalReplicationGroup response element from \a xml.
 */
void DeleteGlobalReplicationGroupResponsePrivate::parseDeleteGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
