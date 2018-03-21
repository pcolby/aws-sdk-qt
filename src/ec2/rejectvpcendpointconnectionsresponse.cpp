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

#include "rejectvpcendpointconnectionsresponse.h"
#include "rejectvpcendpointconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  RejectVpcEndpointConnectionsResponse
 *
 * @brief  Handles EC2 RejectVpcEndpointConnections responses.
 *
 * @see    EC2Client::rejectVpcEndpointConnections
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectVpcEndpointConnectionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RejectVpcEndpointConnectionsResponsePrivate(this), parent)
{
    setRequest(new RejectVpcEndpointConnectionsRequest(request));
    setReply(reply);
}

const RejectVpcEndpointConnectionsRequest * RejectVpcEndpointConnectionsResponse::request() const
{
    Q_D(const RejectVpcEndpointConnectionsResponse);
    return static_cast<const RejectVpcEndpointConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RejectVpcEndpointConnections response.
 *
 * @param  response  Response to parse.
 */
void RejectVpcEndpointConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RejectVpcEndpointConnectionsResponsePrivate
 *
 * @brief  Private implementation for RejectVpcEndpointConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectVpcEndpointConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RejectVpcEndpointConnectionsResponse instance.
 */
RejectVpcEndpointConnectionsResponsePrivate::RejectVpcEndpointConnectionsResponsePrivate(
    RejectVpcEndpointConnectionsQueueResponse * const q) : RejectVpcEndpointConnectionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 RejectVpcEndpointConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RejectVpcEndpointConnectionsResponsePrivate::RejectVpcEndpointConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectVpcEndpointConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
