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

#include "describedbsubnetgroupsresponse.h"
#include "describedbsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBSubnetGroupsResponse
 *
 * @brief  Handles RDS DescribeDBSubnetGroups responses.
 *
 * @see    RDSClient::describeDBSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeDBSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBSubnetGroupsResponse::DescribeDBSubnetGroupsResponse(
        const DescribeDBSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSubnetGroupsRequest(request));
    setReply(reply);
}

const DescribeDBSubnetGroupsRequest * DescribeDBSubnetGroupsResponse::request() const
{
    Q_D(const DescribeDBSubnetGroupsResponse);
    return static_cast<const DescribeDBSubnetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBSubnetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDBSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBSubnetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBSubnetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSubnetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBSubnetGroupsResponse instance.
 */
DescribeDBSubnetGroupsResponsePrivate::DescribeDBSubnetGroupsResponsePrivate(
    DescribeDBSubnetGroupsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBSubnetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBSubnetGroupsResponsePrivate::parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSubnetGroupsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
