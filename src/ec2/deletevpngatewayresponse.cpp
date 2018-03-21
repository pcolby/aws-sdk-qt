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

#include "deletevpngatewayresponse.h"
#include "deletevpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpnGatewayResponse
 *
 * @brief  Handles EC2 DeleteVpnGateway responses.
 *
 * @see    EC2Client::deleteVpnGateway
 */

/**
 * @brief  Constructs a new DeleteVpnGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpnGatewayResponse::DeleteVpnGatewayResponse(
        const DeleteVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteVpnGatewayRequest(request));
    setReply(reply);
}

const DeleteVpnGatewayRequest * DeleteVpnGatewayResponse::request() const
{
    Q_D(const DeleteVpnGatewayResponse);
    return static_cast<const DeleteVpnGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpnGateway response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpnGatewayResponsePrivate
 *
 * @brief  Private implementation for DeleteVpnGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpnGatewayResponse instance.
 */
DeleteVpnGatewayResponsePrivate::DeleteVpnGatewayResponsePrivate(
    DeleteVpnGatewayQueueResponse * const q) : DeleteVpnGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpnGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpnGatewayResponsePrivate::DeleteVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
