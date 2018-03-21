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

#include "getaccountresponse.h"
#include "getaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetAccountResponse
 *
 * @brief  Handles APIGateway GetAccount responses.
 *
 * @see    APIGatewayClient::getAccount
 */

/**
 * @brief  Constructs a new GetAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountResponse::GetAccountResponse(
        const GetAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetAccountResponsePrivate(this), parent)
{
    setRequest(new GetAccountRequest(request));
    setReply(reply);
}

const GetAccountRequest * GetAccountResponse::request() const
{
    Q_D(const GetAccountResponse);
    return static_cast<const GetAccountRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetAccount response.
 *
 * @param  response  Response to parse.
 */
void GetAccountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountResponsePrivate
 *
 * @brief  Private implementation for GetAccountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountResponse instance.
 */
GetAccountResponsePrivate::GetAccountResponsePrivate(
    GetAccountQueueResponse * const q) : GetAccountPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetAccountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountResponsePrivate::GetAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
