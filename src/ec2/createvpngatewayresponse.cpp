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

#include "createvpngatewayresponse.h"
#include "createvpngatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnGatewayResponse
 *
 * @brief  Handles EC2 CreateVpnGateway responses.
 *
 * @see    EC2Client::createVpnGateway
 */

/**
 * @brief  Constructs a new CreateVpnGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpnGatewayResponse::CreateVpnGatewayResponse(
        const CreateVpnGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpnGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateVpnGatewayRequest(request));
    setReply(reply);
}

const CreateVpnGatewayRequest * CreateVpnGatewayResponse::request() const
{
    Q_D(const CreateVpnGatewayResponse);
    return static_cast<const CreateVpnGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpnGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateVpnGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpnGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateVpnGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpnGatewayResponse instance.
 */
CreateVpnGatewayResponsePrivate::CreateVpnGatewayResponsePrivate(
    CreateVpnGatewayQueueResponse * const q) : CreateVpnGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpnGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpnGatewayResponsePrivate::CreateVpnGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpnGatewayResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
