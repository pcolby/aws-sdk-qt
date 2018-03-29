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

#include "getgatewayresponseresponse.h"
#include "getgatewayresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetGatewayResponseResponse
 *
 * @brief  Handles APIGateway GetGatewayResponse responses.
 *
 * @see    APIGatewayClient::getGatewayResponse
 */

/**
 * @brief  Constructs a new GetGatewayResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGatewayResponseResponse::GetGatewayResponseResponse(
        const GetGatewayResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetGatewayResponseResponsePrivate(this), parent)
{
    setRequest(new GetGatewayResponseRequest(request));
    setReply(reply);
}

const GetGatewayResponseRequest * GetGatewayResponseResponse::request() const
{
    Q_D(const GetGatewayResponseResponse);
    return static_cast<const GetGatewayResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetGatewayResponse response.
 *
 * @param  response  Response to parse.
 */
void GetGatewayResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGatewayResponseResponsePrivate
 *
 * @brief  Private implementation for GetGatewayResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGatewayResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGatewayResponseResponse instance.
 */
GetGatewayResponseResponsePrivate::GetGatewayResponseResponsePrivate(
    GetGatewayResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetGatewayResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGatewayResponseResponsePrivate::GetGatewayResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGatewayResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
