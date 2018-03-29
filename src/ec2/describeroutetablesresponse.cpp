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

#include "describeroutetablesresponse.h"
#include "describeroutetablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeRouteTablesResponse
 *
 * @brief  Handles EC2 DescribeRouteTables responses.
 *
 * @see    EC2Client::describeRouteTables
 */

/**
 * @brief  Constructs a new DescribeRouteTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRouteTablesResponse::DescribeRouteTablesResponse(
        const DescribeRouteTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeRouteTablesResponsePrivate(this), parent)
{
    setRequest(new DescribeRouteTablesRequest(request));
    setReply(reply);
}

const DescribeRouteTablesRequest * DescribeRouteTablesResponse::request() const
{
    Q_D(const DescribeRouteTablesResponse);
    return static_cast<const DescribeRouteTablesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeRouteTables response.
 *
 * @param  response  Response to parse.
 */
void DescribeRouteTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRouteTablesResponsePrivate
 *
 * @brief  Private implementation for DescribeRouteTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRouteTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRouteTablesResponse instance.
 */
DescribeRouteTablesResponsePrivate::DescribeRouteTablesResponsePrivate(
    DescribeRouteTablesQueueResponse * const q) : DescribeRouteTablesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeRouteTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRouteTablesResponsePrivate::DescribeRouteTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRouteTablesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
