/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereservedcachenodesresponse.h"
#include "describereservedcachenodesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesResponse
 *
 * \brief The DescribeReservedCacheNodesResponse class provides an interace for ElastiCache DescribeReservedCacheNodes responses.
 *
 * \ingroup ElastiCache
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
 * \sa ElastiCacheClient::describeReservedCacheNodes
 */

/*!
 * @brief  Constructs a new DescribeReservedCacheNodesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedCacheNodesResponse::DescribeReservedCacheNodesResponse(
        const DescribeReservedCacheNodesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeReservedCacheNodesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedCacheNodesRequest(request));
    setReply(reply);
}

const DescribeReservedCacheNodesRequest * DescribeReservedCacheNodesResponse::request() const
{
    Q_D(const DescribeReservedCacheNodesResponse);
    return static_cast<const DescribeReservedCacheNodesRequest *>(d->request);
}

/*!
 * @brief  Parse a ElastiCache DescribeReservedCacheNodes response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedCacheNodesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedCacheNodesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeReservedCacheNodesResponsePrivate
 *
 * \brief Private implementation for DescribeReservedCacheNodesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReservedCacheNodesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedCacheNodesResponse instance.
 */
DescribeReservedCacheNodesResponsePrivate::DescribeReservedCacheNodesResponsePrivate(
    DescribeReservedCacheNodesResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElastiCache DescribeReservedCacheNodesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedCacheNodesResponsePrivate::parseDescribeReservedCacheNodesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedCacheNodesResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
