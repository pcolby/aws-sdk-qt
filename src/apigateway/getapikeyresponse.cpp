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

#include "getapikeyresponse.h"
#include "getapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetApiKeyResponse
 *
 * @brief  Handles APIGateway GetApiKey responses.
 *
 * @see    APIGatewayClient::getApiKey
 */

/**
 * @brief  Constructs a new GetApiKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApiKeyResponse::GetApiKeyResponse(
        const GetApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetApiKeyResponse(new GetApiKeyResponsePrivate(this), parent)
{
    setRequest(new GetApiKeyRequest(request));
    setReply(reply);
}

const GetApiKeyRequest * GetApiKeyResponse::request() const
{
    Q_D(const GetApiKeyResponse);
    return static_cast<const GetApiKeyRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetApiKey response.
 *
 * @param  response  Response to parse.
 */
void GetApiKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApiKeyResponsePrivate
 *
 * @brief  Private implementation for GetApiKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApiKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApiKeyResponse instance.
 */
GetApiKeyResponsePrivate::GetApiKeyResponsePrivate(
    GetApiKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetApiKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApiKeyResponsePrivate::parseGetApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
