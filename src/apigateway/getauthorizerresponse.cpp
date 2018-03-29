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

#include "getauthorizerresponse.h"
#include "getauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetAuthorizerResponse
 *
 * @brief  Handles APIGateway GetAuthorizer responses.
 *
 * @see    APIGatewayClient::getAuthorizer
 */

/**
 * @brief  Constructs a new GetAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAuthorizerResponse::GetAuthorizerResponse(
        const GetAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetAuthorizerResponse(new GetAuthorizerResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizerRequest(request));
    setReply(reply);
}

const GetAuthorizerRequest * GetAuthorizerResponse::request() const
{
    Q_D(const GetAuthorizerResponse);
    return static_cast<const GetAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void GetAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAuthorizerResponsePrivate
 *
 * @brief  Private implementation for GetAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAuthorizerResponse instance.
 */
GetAuthorizerResponsePrivate::GetAuthorizerResponsePrivate(
    GetAuthorizerResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAuthorizerResponsePrivate::parseGetAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizerResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
