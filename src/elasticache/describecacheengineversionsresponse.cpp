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

#include "describecacheengineversionsresponse.h"
#include "describecacheengineversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeCacheEngineVersionsResponse
 *
 * @brief  Handles ElastiCache DescribeCacheEngineVersions responses.
 *
 * @see    ElastiCacheClient::describeCacheEngineVersions
 */

/**
 * @brief  Constructs a new DescribeCacheEngineVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheEngineVersionsResponse::DescribeCacheEngineVersionsResponse(
        const DescribeCacheEngineVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheEngineVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheEngineVersionsRequest(request));
    setReply(reply);
}

const DescribeCacheEngineVersionsRequest * DescribeCacheEngineVersionsResponse::request() const
{
    Q_D(const DescribeCacheEngineVersionsResponse);
    return static_cast<const DescribeCacheEngineVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeCacheEngineVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheEngineVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCacheEngineVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheEngineVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheEngineVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheEngineVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheEngineVersionsResponse instance.
 */
DescribeCacheEngineVersionsResponsePrivate::DescribeCacheEngineVersionsResponsePrivate(
    DescribeCacheEngineVersionsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeCacheEngineVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheEngineVersionsResponsePrivate::parseDescribeCacheEngineVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheEngineVersionsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
