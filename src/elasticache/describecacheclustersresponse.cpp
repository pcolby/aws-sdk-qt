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

#include "describecacheclustersresponse.h"
#include "describecacheclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheClustersResponse
 *
 * @brief  Handles ElastiCache DescribeCacheClusters responses.
 *
 * @see    ElastiCacheClient::describeCacheClusters
 */

/**
 * @brief  Constructs a new DescribeCacheClustersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheClustersResponse::DescribeCacheClustersResponse(
        const DescribeCacheClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheClustersRequest(request));
    setReply(reply);
}

const DescribeCacheClustersRequest * DescribeCacheClustersResponse::request() const
{
    Q_D(const DescribeCacheClustersResponse);
    return static_cast<const DescribeCacheClustersRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeCacheClusters response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheClustersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheClustersResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheClustersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheClustersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheClustersResponse instance.
 */
DescribeCacheClustersResponsePrivate::DescribeCacheClustersResponsePrivate(
    DescribeCacheClustersQueueResponse * const q) : DescribeCacheClustersPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeCacheClustersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheClustersResponsePrivate::DescribeCacheClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheClustersResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
