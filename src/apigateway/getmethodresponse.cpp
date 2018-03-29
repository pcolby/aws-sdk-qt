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

#include "getmethodresponse.h"
#include "getmethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetMethodResponse
 *
 * @brief  Handles APIGateway GetMethod responses.
 *
 * @see    APIGatewayClient::getMethod
 */

/**
 * @brief  Constructs a new GetMethodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMethodResponse::GetMethodResponse(
        const GetMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetMethodResponse(new GetMethodResponsePrivate(this), parent)
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
    Q_D(GetMethodResponse);
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
    GetMethodResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMethodResponsePrivate::parseGetMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMethodResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
