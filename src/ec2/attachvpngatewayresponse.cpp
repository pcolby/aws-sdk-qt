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

#include "attachvpngatewayresponse.h"
#include "attachvpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  AttachVpnGatewayResponse
 *
 * @brief  Handles EC2 AttachVpnGateway responses.
 *
 * @see    EC2Client::attachVpnGateway
 */

/**
 * @brief  Constructs a new AttachVpnGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachVpnGatewayResponse::AttachVpnGatewayResponse(
        const AttachVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AttachVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new AttachVpnGatewayRequest(request));
    setReply(reply);
}

const AttachVpnGatewayRequest * AttachVpnGatewayResponse::request() const
{
    Q_D(const AttachVpnGatewayResponse);
    return static_cast<const AttachVpnGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AttachVpnGateway response.
 *
 * @param  response  Response to parse.
 */
void AttachVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachVpnGatewayResponsePrivate
 *
 * @brief  Private implementation for AttachVpnGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachVpnGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachVpnGatewayResponse instance.
 */
AttachVpnGatewayResponsePrivate::AttachVpnGatewayResponsePrivate(
    AttachVpnGatewayQueueResponse * const q) : AttachVpnGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AttachVpnGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachVpnGatewayResponsePrivate::AttachVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
