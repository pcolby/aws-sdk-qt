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

#include "createinternetgatewayresponse.h"
#include "createinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateInternetGatewayResponse
 *
 * @brief  Handles EC2 CreateInternetGateway responses.
 *
 * @see    EC2Client::createInternetGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInternetGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateInternetGatewayRequest(request));
    setReply(reply);
}

const CreateInternetGatewayRequest * CreateInternetGatewayResponse::request() const
{
    Q_D(const CreateInternetGatewayResponse);
    return static_cast<const CreateInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void CreateInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for CreateInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInternetGatewayResponse instance.
 */
CreateInternetGatewayResponsePrivate::CreateInternetGatewayResponsePrivate(
    CreateInternetGatewayQueueResponse * const q) : CreateInternetGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInternetGatewayResponsePrivate::CreateInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInternetGatewayResponse"));
    /// @todo
}
