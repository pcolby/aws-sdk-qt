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

#include "describecacheparametergroupsresponse.h"
#include "describecacheparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeCacheParameterGroupsResponse
 *
 * @brief  Handles ElastiCache DescribeCacheParameterGroups responses.
 *
 * @see    ElastiCacheClient::describeCacheParameterGroups
 */

/**
 * @brief  Constructs a new DescribeCacheParameterGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheParameterGroupsResponse::DescribeCacheParameterGroupsResponse(
        const DescribeCacheParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheParameterGroupsRequest(request));
    setReply(reply);
}

const DescribeCacheParameterGroupsRequest * DescribeCacheParameterGroupsResponse::request() const
{
    Q_D(const DescribeCacheParameterGroupsResponse);
    return static_cast<const DescribeCacheParameterGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeCacheParameterGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCacheParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheParameterGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheParameterGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheParameterGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheParameterGroupsResponse instance.
 */
DescribeCacheParameterGroupsResponsePrivate::DescribeCacheParameterGroupsResponsePrivate(
    DescribeCacheParameterGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeCacheParameterGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheParameterGroupsResponsePrivate::parseDescribeCacheParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheParameterGroupsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
