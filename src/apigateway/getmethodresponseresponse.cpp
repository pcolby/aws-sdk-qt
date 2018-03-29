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

#include "getmethodresponseresponse.h"
#include "getmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetMethodResponseResponse
 *
 * @brief  Handles APIGateway GetMethodResponse responses.
 *
 * @see    APIGatewayClient::getMethodResponse
 */

/**
 * @brief  Constructs a new GetMethodResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMethodResponseResponse::GetMethodResponseResponse(
        const GetMethodResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetMethodResponseResponsePrivate(this), parent)
{
    setRequest(new GetMethodResponseRequest(request));
    setReply(reply);
}

const GetMethodResponseRequest * GetMethodResponseResponse::request() const
{
    Q_D(const GetMethodResponseResponse);
    return static_cast<const GetMethodResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetMethodResponse response.
 *
 * @param  response  Response to parse.
 */
void GetMethodResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMethodResponseResponsePrivate
 *
 * @brief  Private implementation for GetMethodResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMethodResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMethodResponseResponse instance.
 */
GetMethodResponseResponsePrivate::GetMethodResponseResponsePrivate(
    GetMethodResponseResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetMethodResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMethodResponseResponsePrivate::GetMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMethodResponseResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
