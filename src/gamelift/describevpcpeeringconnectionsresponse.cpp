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

#include "describevpcpeeringconnectionsresponse.h"
#include "describevpcpeeringconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeVpcPeeringConnectionsResponse
 *
 * @brief  Handles GameLift DescribeVpcPeeringConnections responses.
 *
 * @see    GameLiftClient::describeVpcPeeringConnections
 */

/**
 * @brief  Constructs a new DescribeVpcPeeringConnectionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcPeeringConnectionsResponse::DescribeVpcPeeringConnectionsResponse(
        const DescribeVpcPeeringConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeVpcPeeringConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcPeeringConnectionsRequest(request));
    setReply(reply);
}

const DescribeVpcPeeringConnectionsRequest * DescribeVpcPeeringConnectionsResponse::request() const
{
    Q_D(const DescribeVpcPeeringConnectionsResponse);
    return static_cast<const DescribeVpcPeeringConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeVpcPeeringConnections response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcPeeringConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcPeeringConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcPeeringConnectionsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcPeeringConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcPeeringConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcPeeringConnectionsResponse instance.
 */
DescribeVpcPeeringConnectionsResponsePrivate::DescribeVpcPeeringConnectionsResponsePrivate(
    DescribeVpcPeeringConnectionsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeVpcPeeringConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcPeeringConnectionsResponsePrivate::parseDescribeVpcPeeringConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcPeeringConnectionsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
