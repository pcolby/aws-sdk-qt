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

#include "describereplicationgroupsresponse.h"
#include "describereplicationgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  DescribeReplicationGroupsResponse
 *
 * @brief  Handles ElastiCache DescribeReplicationGroups responses.
 *
 * @see    ElastiCacheClient::describeReplicationGroups
 */

/**
 * @brief  Constructs a new DescribeReplicationGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationGroupsResponse::DescribeReplicationGroupsResponse(
        const DescribeReplicationGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeReplicationGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationGroupsRequest(request));
    setReply(reply);
}

const DescribeReplicationGroupsRequest * DescribeReplicationGroupsResponse::request() const
{
    Q_D(const DescribeReplicationGroupsResponse);
    return static_cast<const DescribeReplicationGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache DescribeReplicationGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationGroupsResponse instance.
 */
DescribeReplicationGroupsResponsePrivate::DescribeReplicationGroupsResponsePrivate(
    DescribeReplicationGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache DescribeReplicationGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationGroupsResponsePrivate::DescribeReplicationGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationGroupsResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
