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

#include "detachvpngatewayresponse.h"
#include "detachvpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DetachVpnGatewayResponse
 *
 * @brief  Handles EC2 DetachVpnGateway responses.
 *
 * @see    EC2Client::detachVpnGateway
 */

/**
 * @brief  Constructs a new DetachVpnGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachVpnGatewayResponse::DetachVpnGatewayResponse(
        const DetachVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new DetachVpnGatewayRequest(request));
    setReply(reply);
}

const DetachVpnGatewayRequest * DetachVpnGatewayResponse::request() const
{
    Q_D(const DetachVpnGatewayResponse);
    return static_cast<const DetachVpnGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DetachVpnGateway response.
 *
 * @param  response  Response to parse.
 */
void DetachVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachVpnGatewayResponsePrivate
 *
 * @brief  Private implementation for DetachVpnGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachVpnGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachVpnGatewayResponse instance.
 */
DetachVpnGatewayResponsePrivate::DetachVpnGatewayResponsePrivate(
    DetachVpnGatewayQueueResponse * const q) : DetachVpnGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DetachVpnGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachVpnGatewayResponsePrivate::DetachVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
