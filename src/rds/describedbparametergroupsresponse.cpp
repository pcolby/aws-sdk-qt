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

#include "describedbparametergroupsresponse.h"
#include "describedbparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBParameterGroupsResponse
 *
 * @brief  Handles RDS DescribeDBParameterGroups responses.
 *
 * @see    RDSClient::describeDBParameterGroups
 */

/**
 * @brief  Constructs a new DescribeDBParameterGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBParameterGroupsResponse::DescribeDBParameterGroupsResponse(
        const DescribeDBParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBParameterGroupsRequest(request));
    setReply(reply);
}

const DescribeDBParameterGroupsRequest * DescribeDBParameterGroupsResponse::request() const
{
    Q_D(const DescribeDBParameterGroupsResponse);
    return static_cast<const DescribeDBParameterGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBParameterGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBParameterGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBParameterGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBParameterGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBParameterGroupsResponse instance.
 */
DescribeDBParameterGroupsResponsePrivate::DescribeDBParameterGroupsResponsePrivate(
    DescribeDBParameterGroupsQueueResponse * const q) : DescribeDBParameterGroupsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBParameterGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBParameterGroupsResponsePrivate::DescribeDBParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBParameterGroupsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
