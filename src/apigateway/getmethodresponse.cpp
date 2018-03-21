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

#include "getmethodresponse.h"
#include "getmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetMethodResponse
 *
 * @brief  Handles APIGateway GetMethod responses.
 *
 * @see    APIGatewayClient::getMethod
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMethodResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetMethodResponsePrivate(this), parent)
{
    setRequest(new GetMethodRequest(request));
    setReply(reply);
}

const GetMethodRequest * GetMethodResponse::request() const
{
    Q_D(const GetMethodResponse);
    return static_cast<const GetMethodRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetMethod response.
 *
 * @param  response  Response to parse.
 */
void GetMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMethodResponsePrivate
 *
 * @brief  Private implementation for GetMethodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMethodResponse instance.
 */
GetMethodResponsePrivate::GetMethodResponsePrivate(
    GetMethodQueueResponse * const q) : GetMethodPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMethodResponsePrivate::GetMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
