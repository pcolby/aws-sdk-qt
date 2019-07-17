/*
    Copyright 2013-2019 Paul Colby

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

#include "purchasereservedcachenodesofferingresponse.h"
#include "purchasereservedcachenodesofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::PurchaseReservedCacheNodesOfferingResponse
 * \brief The PurchaseReservedCacheNodesOfferingResponse class provides an interace for ElastiCache PurchaseReservedCacheNodesOffering responses.
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
 * \sa ElastiCacheClient::purchaseReservedCacheNodesOffering
 */

/*!
 * Constructs a PurchaseReservedCacheNodesOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
PurchaseReservedCacheNodesOfferingResponse::PurchaseReservedCacheNodesOfferingResponse(
        const PurchaseReservedCacheNodesOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new PurchaseReservedCacheNodesOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedCacheNodesOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PurchaseReservedCacheNodesOfferingRequest * PurchaseReservedCacheNodesOfferingResponse::request() const
{
    Q_D(const PurchaseReservedCacheNodesOfferingResponse);
    return static_cast<const PurchaseReservedCacheNodesOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache PurchaseReservedCacheNodesOffering \a response.
 */
void PurchaseReservedCacheNodesOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurchaseReservedCacheNodesOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::PurchaseReservedCacheNodesOfferingResponsePrivate
 * \brief The PurchaseReservedCacheNodesOfferingResponsePrivate class provides private implementation for PurchaseReservedCacheNodesOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a PurchaseReservedCacheNodesOfferingResponsePrivate object with public implementation \a q.
 */
PurchaseReservedCacheNodesOfferingResponsePrivate::PurchaseReservedCacheNodesOfferingResponsePrivate(
    PurchaseReservedCacheNodesOfferingResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache PurchaseReservedCacheNodesOffering response element from \a xml.
 */
void PurchaseReservedCacheNodesOfferingResponsePrivate::parsePurchaseReservedCacheNodesOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedCacheNodesOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
