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

#include "getusageplansresponse.h"
#include "getusageplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlansResponse
 *
 * @brief  Handles APIGateway GetUsagePlans responses.
 *
 * @see    APIGatewayClient::getUsagePlans
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlansResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetUsagePlansResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlansRequest(request));
    setReply(reply);
}

const GetUsagePlansRequest * GetUsagePlansResponse::request() const
{
    Q_D(const GetUsagePlansResponse);
    return static_cast<const GetUsagePlansRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetUsagePlans response.
 *
 * @param  response  Response to parse.
 */
void GetUsagePlansResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUsagePlansResponsePrivate
 *
 * @brief  Private implementation for GetUsagePlansResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlansResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUsagePlansResponse instance.
 */
GetUsagePlansResponsePrivate::GetUsagePlansResponsePrivate(
    GetUsagePlansQueueResponse * const q) : GetUsagePlansPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetUsagePlansResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUsagePlansResponsePrivate::GetUsagePlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlansResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
