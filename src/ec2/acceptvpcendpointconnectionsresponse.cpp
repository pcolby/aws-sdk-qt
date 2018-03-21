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

#include "acceptvpcendpointconnectionsresponse.h"
#include "acceptvpcendpointconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AcceptVpcEndpointConnectionsResponse
 *
 * @brief  Handles EC2 AcceptVpcEndpointConnections responses.
 *
 * @see    EC2Client::acceptVpcEndpointConnections
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AcceptVpcEndpointConnectionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AcceptVpcEndpointConnectionsResponsePrivate(this), parent)
{
    setRequest(new AcceptVpcEndpointConnectionsRequest(request));
    setReply(reply);
}

const AcceptVpcEndpointConnectionsRequest * AcceptVpcEndpointConnectionsResponse::request() const
{
    Q_D(const AcceptVpcEndpointConnectionsResponse);
    return static_cast<const AcceptVpcEndpointConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AcceptVpcEndpointConnections response.
 *
 * @param  response  Response to parse.
 */
void AcceptVpcEndpointConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AcceptVpcEndpointConnectionsResponsePrivate
 *
 * @brief  Private implementation for AcceptVpcEndpointConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptVpcEndpointConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AcceptVpcEndpointConnectionsResponse instance.
 */
AcceptVpcEndpointConnectionsResponsePrivate::AcceptVpcEndpointConnectionsResponsePrivate(
    AcceptVpcEndpointConnectionsQueueResponse * const q) : AcceptVpcEndpointConnectionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AcceptVpcEndpointConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AcceptVpcEndpointConnectionsResponsePrivate::AcceptVpcEndpointConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptVpcEndpointConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
