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

#include "getusageplankeysresponse.h"
#include "getusageplankeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetUsagePlanKeysResponse
 *
 * @brief  Handles APIGateway GetUsagePlanKeys responses.
 *
 * @see    APIGatewayClient::getUsagePlanKeys
 */

/**
 * @brief  Constructs a new GetUsagePlanKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlanKeysResponse::GetUsagePlanKeysResponse(
        const GetUsagePlanKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetUsagePlanKeysResponse(new GetUsagePlanKeysResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanKeysRequest(request));
    setReply(reply);
}

const GetUsagePlanKeysRequest * GetUsagePlanKeysResponse::request() const
{
    Q_D(const GetUsagePlanKeysResponse);
    return static_cast<const GetUsagePlanKeysRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetUsagePlanKeys response.
 *
 * @param  response  Response to parse.
 */
void GetUsagePlanKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetUsagePlanKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUsagePlanKeysResponsePrivate
 *
 * @brief  Private implementation for GetUsagePlanKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUsagePlanKeysResponse instance.
 */
GetUsagePlanKeysResponsePrivate::GetUsagePlanKeysResponsePrivate(
    GetUsagePlanKeysResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetUsagePlanKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUsagePlanKeysResponsePrivate::parseGetUsagePlanKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanKeysResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
