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

#include "describecachesubnetgroupsresponse.h"
#include "describecachesubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeCacheSubnetGroupsResponse
 *
 * @brief  Handles ElastiCache DescribeCacheSubnetGroups responses.
 *
 * @see    ElastiCacheClient::describeCacheSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeCacheSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DescribeCacheSubnetGroupsRequest * DescribeCacheSubnetGroupsResponse::request() const
{
    Q_D(const DescribeCacheSubnetGroupsResponse);
    return static_cast<const DescribeCacheSubnetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeCacheSubnetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheSubnetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheSubnetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheSubnetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheSubnetGroupsResponse instance.
 */
DescribeCacheSubnetGroupsResponsePrivate::DescribeCacheSubnetGroupsResponsePrivate(
    DescribeCacheSubnetGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeCacheSubnetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheSubnetGroupsResponsePrivate::DescribeCacheSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheSubnetGroupsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
