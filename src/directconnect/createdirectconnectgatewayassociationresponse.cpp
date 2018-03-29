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

#include "createdirectconnectgatewayassociationresponse.h"
#include "createdirectconnectgatewayassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateDirectConnectGatewayAssociationResponse
 *
 * @brief  Handles DirectConnect CreateDirectConnectGatewayAssociation responses.
 *
 * @see    DirectConnectClient::createDirectConnectGatewayAssociation
 */

/**
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectConnectGatewayAssociationResponse::CreateDirectConnectGatewayAssociationResponse(
        const CreateDirectConnectGatewayAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateDirectConnectGatewayAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateDirectConnectGatewayAssociationRequest(request));
    setReply(reply);
}

const CreateDirectConnectGatewayAssociationRequest * CreateDirectConnectGatewayAssociationResponse::request() const
{
    Q_D(const CreateDirectConnectGatewayAssociationResponse);
    return static_cast<const CreateDirectConnectGatewayAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreateDirectConnectGatewayAssociation response.
 *
 * @param  response  Response to parse.
 */
void CreateDirectConnectGatewayAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDirectConnectGatewayAssociationResponsePrivate
 *
 * @brief  Private implementation for CreateDirectConnectGatewayAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDirectConnectGatewayAssociationResponse instance.
 */
CreateDirectConnectGatewayAssociationResponsePrivate::CreateDirectConnectGatewayAssociationResponsePrivate(
    CreateDirectConnectGatewayAssociationQueueResponse * const q) : CreateDirectConnectGatewayAssociationPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreateDirectConnectGatewayAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDirectConnectGatewayAssociationResponsePrivate::CreateDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectConnectGatewayAssociationResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
