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

#include "deletereplicationgroupresponse.h"
#include "deletereplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteReplicationGroupResponse
 * \brief The DeleteReplicationGroupResponse class provides an interace for ElastiCache DeleteReplicationGroup responses.
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
 * \sa ElastiCacheClient::deleteReplicationGroup
 */

/*!
 * Constructs a DeleteReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationGroupResponse::DeleteReplicationGroupResponse(
        const DeleteReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationGroupRequest * DeleteReplicationGroupResponse::request() const
{
    Q_D(const DeleteReplicationGroupResponse);
    return static_cast<const DeleteReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DeleteReplicationGroup \a response.
 */
void DeleteReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DeleteReplicationGroupResponsePrivate
 * \brief The DeleteReplicationGroupResponsePrivate class provides private implementation for DeleteReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteReplicationGroupResponsePrivate object with public implementation \a q.
 */
DeleteReplicationGroupResponsePrivate::DeleteReplicationGroupResponsePrivate(
    DeleteReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DeleteReplicationGroup response element from \a xml.
 */
void DeleteReplicationGroupResponsePrivate::parseDeleteReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
