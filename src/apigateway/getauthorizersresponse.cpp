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

#include "getauthorizersresponse.h"
#include "getauthorizersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetAuthorizersResponse
 *
 * @brief  Handles APIGateway GetAuthorizers responses.
 *
 * @see    APIGatewayClient::getAuthorizers
 */

/**
 * @brief  Constructs a new GetAuthorizersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAuthorizersResponse::GetAuthorizersResponse(
        const GetAuthorizersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetAuthorizersResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizersRequest(request));
    setReply(reply);
}

const GetAuthorizersRequest * GetAuthorizersResponse::request() const
{
    Q_D(const GetAuthorizersResponse);
    return static_cast<const GetAuthorizersRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetAuthorizers response.
 *
 * @param  response  Response to parse.
 */
void GetAuthorizersResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAuthorizersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAuthorizersResponsePrivate
 *
 * @brief  Private implementation for GetAuthorizersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAuthorizersResponse instance.
 */
GetAuthorizersResponsePrivate::GetAuthorizersResponsePrivate(
    GetAuthorizersResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetAuthorizersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAuthorizersResponsePrivate::GetAuthorizersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizersResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
