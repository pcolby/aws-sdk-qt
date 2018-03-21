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

#include "describeclustersubnetgroupsresponse.h"
#include "describeclustersubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterSubnetGroupsResponse
 *
 * @brief  Handles Redshift DescribeClusterSubnetGroups responses.
 *
 * @see    RedshiftClient::describeClusterSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeClusterSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterSubnetGroupsResponse::DescribeClusterSubnetGroupsResponse(
        const DescribeClusterSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterSubnetGroupsRequest(request));
    setReply(reply);
}

const DescribeClusterSubnetGroupsRequest * DescribeClusterSubnetGroupsResponse::request() const
{
    Q_D(const DescribeClusterSubnetGroupsResponse);
    return static_cast<const DescribeClusterSubnetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterSubnetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterSubnetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterSubnetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSubnetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterSubnetGroupsResponse instance.
 */
DescribeClusterSubnetGroupsResponsePrivate::DescribeClusterSubnetGroupsResponsePrivate(
    DescribeClusterSubnetGroupsQueueResponse * const q) : DescribeClusterSubnetGroupsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterSubnetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterSubnetGroupsResponsePrivate::DescribeClusterSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterSubnetGroupsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
