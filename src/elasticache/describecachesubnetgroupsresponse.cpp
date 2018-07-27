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

#include "describecachesubnetgroupsresponse.h"
#include "describecachesubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheSubnetGroupsResponse
 * \brief The DescribeCacheSubnetGroupsResponse class provides an interace for ElastiCache DescribeCacheSubnetGroups responses.
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
 * \sa ElastiCacheClient::describeCacheSubnetGroups
 */

/*!
 * Constructs a DescribeCacheSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCacheSubnetGroupsResponse::DescribeCacheSubnetGroupsResponse(
        const DescribeCacheSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCacheSubnetGroupsRequest * DescribeCacheSubnetGroupsResponse::request() const
{
    Q_D(const DescribeCacheSubnetGroupsResponse);
    return static_cast<const DescribeCacheSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeCacheSubnetGroups \a response.
 */
void DescribeCacheSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCacheSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheSubnetGroupsResponsePrivate
 * \brief The DescribeCacheSubnetGroupsResponsePrivate class provides private implementation for DescribeCacheSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeCacheSubnetGroupsResponsePrivate::DescribeCacheSubnetGroupsResponsePrivate(
    DescribeCacheSubnetGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeCacheSubnetGroups response element from \a xml.
 */
void DescribeCacheSubnetGroupsResponsePrivate::parseDescribeCacheSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
