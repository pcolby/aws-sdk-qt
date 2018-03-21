/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecacheparametersresponse.h"
#include "describecacheparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  DescribeCacheParametersResponse
 *
 * @brief  Handles ElastiCache DescribeCacheParameters responses.
 *
 * @see    ElastiCacheClient::describeCacheParameters
 */

/**
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

/**
 * @brief  Parse a ElastiCache DescribeCacheParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheParametersResponse instance.
 */
DescribeCacheParametersResponsePrivate::DescribeCacheParametersResponsePrivate(
    DescribeCacheParametersQueueResponse * const q) : DescribeCacheParametersPrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeCacheParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheParametersResponsePrivate::DescribeCacheParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheParametersResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace AWS
