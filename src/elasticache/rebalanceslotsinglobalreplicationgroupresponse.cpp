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

#include "rebalanceslotsinglobalreplicationgroupresponse.h"
#include "rebalanceslotsinglobalreplicationgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::RebalanceSlotsInGlobalReplicationGroupResponse
 * \brief The RebalanceSlotsInGlobalReplicationGroupResponse class provides an interace for ElastiCache RebalanceSlotsInGlobalReplicationGroup responses.
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
 * \sa ElastiCacheClient::rebalanceSlotsInGlobalReplicationGroup
 */

/*!
 * Constructs a RebalanceSlotsInGlobalReplicationGroupResponse object for \a reply to \a request, with parent \a parent.
 */
RebalanceSlotsInGlobalReplicationGroupResponse::RebalanceSlotsInGlobalReplicationGroupResponse(
        const RebalanceSlotsInGlobalReplicationGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new RebalanceSlotsInGlobalReplicationGroupResponsePrivate(this), parent)
{
    setRequest(new RebalanceSlotsInGlobalReplicationGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebalanceSlotsInGlobalReplicationGroupRequest * RebalanceSlotsInGlobalReplicationGroupResponse::request() const
{
    Q_D(const RebalanceSlotsInGlobalReplicationGroupResponse);
    return static_cast<const RebalanceSlotsInGlobalReplicationGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache RebalanceSlotsInGlobalReplicationGroup \a response.
 */
void RebalanceSlotsInGlobalReplicationGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebalanceSlotsInGlobalReplicationGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::RebalanceSlotsInGlobalReplicationGroupResponsePrivate
 * \brief The RebalanceSlotsInGlobalReplicationGroupResponsePrivate class provides private implementation for RebalanceSlotsInGlobalReplicationGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a RebalanceSlotsInGlobalReplicationGroupResponsePrivate object with public implementation \a q.
 */
RebalanceSlotsInGlobalReplicationGroupResponsePrivate::RebalanceSlotsInGlobalReplicationGroupResponsePrivate(
    RebalanceSlotsInGlobalReplicationGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache RebalanceSlotsInGlobalReplicationGroup response element from \a xml.
 */
void RebalanceSlotsInGlobalReplicationGroupResponsePrivate::parseRebalanceSlotsInGlobalReplicationGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebalanceSlotsInGlobalReplicationGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
