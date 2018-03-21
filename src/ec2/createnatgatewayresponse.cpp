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

#include "createnatgatewayresponse.h"
#include "createnatgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateNatGatewayResponse
 *
 * @brief  Handles EC2 CreateNatGateway responses.
 *
 * @see    EC2Client::createNatGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNatGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateNatGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateNatGatewayRequest(request));
    setReply(reply);
}

const CreateNatGatewayRequest * CreateNatGatewayResponse::request() const
{
    Q_D(const CreateNatGatewayResponse);
    return static_cast<const CreateNatGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateNatGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateNatGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNatGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateNatGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNatGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNatGatewayResponse instance.
 */
CreateNatGatewayResponsePrivate::CreateNatGatewayResponsePrivate(
    CreateNatGatewayQueueResponse * const q) : CreateNatGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateNatGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNatGatewayResponsePrivate::CreateNatGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNatGatewayResponse"));
    /// @todo
}
