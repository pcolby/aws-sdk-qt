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

#include "describereservedcachenodesofferingsresponse.h"
#include "describereservedcachenodesofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesOfferingsResponse
 * \brief The DescribeReservedCacheNodesOfferingsResponse class provides an interace for ElastiCache DescribeReservedCacheNodesOfferings responses.
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
 * \sa ElastiCacheClient::describeReservedCacheNodesOfferings
 */

/*!
 * Constructs a DescribeReservedCacheNodesOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedCacheNodesOfferingsResponse::DescribeReservedCacheNodesOfferingsResponse(
        const DescribeReservedCacheNodesOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeReservedCacheNodesOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedCacheNodesOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedCacheNodesOfferingsRequest * DescribeReservedCacheNodesOfferingsResponse::request() const
{
    Q_D(const DescribeReservedCacheNodesOfferingsResponse);
    return static_cast<const DescribeReservedCacheNodesOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeReservedCacheNodesOfferings \a response.
 */
void DescribeReservedCacheNodesOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedCacheNodesOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesOfferingsResponsePrivate
 * \brief The DescribeReservedCacheNodesOfferingsResponsePrivate class provides private implementation for DescribeReservedCacheNodesOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeReservedCacheNodesOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeReservedCacheNodesOfferingsResponsePrivate::DescribeReservedCacheNodesOfferingsResponsePrivate(
    DescribeReservedCacheNodesOfferingsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeReservedCacheNodesOfferings response element from \a xml.
 */
void DescribeReservedCacheNodesOfferingsResponsePrivate::parseDescribeReservedCacheNodesOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedCacheNodesOfferingsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
