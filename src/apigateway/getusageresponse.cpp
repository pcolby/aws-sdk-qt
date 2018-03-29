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

#include "getusageresponse.h"
#include "getusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetUsageResponse
 *
 * @brief  Handles APIGateway GetUsage responses.
 *
 * @see    APIGatewayClient::getUsage
 */

/**
 * @brief  Constructs a new GetUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsageResponse::GetUsageResponse(
        const GetUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetUsageResponsePrivate(this), parent)
{
    setRequest(new GetUsageRequest(request));
    setReply(reply);
}

const GetUsageRequest * GetUsageResponse::request() const
{
    Q_D(const GetUsageResponse);
    return static_cast<const GetUsageRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetUsage response.
 *
 * @param  response  Response to parse.
 */
void GetUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUsageResponsePrivate
 *
 * @brief  Private implementation for GetUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUsageResponse instance.
 */
GetUsageResponsePrivate::GetUsageResponsePrivate(
    GetUsageResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUsageResponsePrivate::GetUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
