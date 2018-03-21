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

#include "getintegrationresponseresponse.h"
#include "getintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetIntegrationResponseResponse
 *
 * @brief  Handles APIGateway GetIntegrationResponse responses.
 *
 * @see    APIGatewayClient::getIntegrationResponse
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIntegrationResponseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationResponseRequest(request));
    setReply(reply);
}

const GetIntegrationResponseRequest * GetIntegrationResponseResponse::request() const
{
    Q_D(const GetIntegrationResponseResponse);
    return static_cast<const GetIntegrationResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetIntegrationResponse response.
 *
 * @param  response  Response to parse.
 */
void GetIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIntegrationResponseResponsePrivate
 *
 * @brief  Private implementation for GetIntegrationResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntegrationResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIntegrationResponseResponse instance.
 */
GetIntegrationResponseResponsePrivate::GetIntegrationResponseResponsePrivate(
    GetIntegrationResponseQueueResponse * const q) : GetIntegrationResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetIntegrationResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIntegrationResponseResponsePrivate::GetIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponseResponse"));
    /// @todo
}
