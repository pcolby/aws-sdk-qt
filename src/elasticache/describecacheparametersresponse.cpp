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

#include "describecacheparametersresponse.h"
#include "describecacheparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheParametersResponse
 *
 * \brief The DescribeCacheParametersResponse class provides an interace for ElastiCache DescribeCacheParameters responses.
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
 * \sa ElastiCacheClient::describeCacheParameters
 */

/*!
 * @brief  Constructs a new DescribeCacheParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheParametersResponse::DescribeCacheParametersResponse(
        const DescribeCacheParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheParametersRequest(request));
    setReply(reply);
}

const DescribeCacheParametersRequest * DescribeCacheParametersResponse::request() const
{
    Q_D(const DescribeCacheParametersResponse);
    return static_cast<const DescribeCacheParametersRequest *>(d->request);
}

/*!
 * @brief  Parse a ElastiCache DescribeCacheParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCacheParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeCacheParametersResponsePrivate
 *
 * \brief Private implementation for DescribeCacheParametersResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheParametersResponse instance.
 */
DescribeCacheParametersResponsePrivate::DescribeCacheParametersResponsePrivate(
    DescribeCacheParametersResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElastiCache DescribeCacheParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheParametersResponsePrivate::parseDescribeCacheParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheParametersResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
