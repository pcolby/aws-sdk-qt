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

#include "createdirectconnectgatewayresponse.h"
#include "createdirectconnectgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  CreateDirectConnectGatewayResponse
 *
 * @brief  Handles DirectConnect CreateDirectConnectGateway responses.
 *
 * @see    DirectConnectClient::createDirectConnectGateway
 */

/**
 * @brief  Constructs a new CreateDirectConnectGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectConnectGatewayResponse::CreateDirectConnectGatewayResponse(
        const CreateDirectConnectGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDirectConnectGatewayResponse(new CreateDirectConnectGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateDirectConnectGatewayRequest(request));
    setReply(reply);
}

const CreateDirectConnectGatewayRequest * CreateDirectConnectGatewayResponse::request() const
{
    Q_D(const CreateDirectConnectGatewayResponse);
    return static_cast<const CreateDirectConnectGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreateDirectConnectGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectConnectGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDirectConnectGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDirectConnectGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateDirectConnectGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectConnectGatewayResponse instance.
 */
CreateDirectConnectGatewayResponsePrivate::CreateDirectConnectGatewayResponsePrivate(
    CreateDirectConnectGatewayResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreateDirectConnectGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectConnectGatewayResponsePrivate::parseCreateDirectConnectGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectConnectGatewayResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
