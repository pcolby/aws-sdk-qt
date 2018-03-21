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

#include "getusageplanresponse.h"
#include "getusageplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlanResponse
 *
 * @brief  Handles APIGateway GetUsagePlan responses.
 *
 * @see    APIGatewayClient::getUsagePlan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetUsagePlanResponsePrivate(this), parent)
{
    setRequest(new GetUsagePlanRequest(request));
    setReply(reply);
}

const GetUsagePlanRequest * GetUsagePlanResponse::request() const
{
    Q_D(const GetUsagePlanResponse);
    return static_cast<const GetUsagePlanRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetUsagePlan response.
 *
 * @param  response  Response to parse.
 */
void GetUsagePlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetUsagePlanResponsePrivate
 *
 * @brief  Private implementation for GetUsagePlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetUsagePlanResponse instance.
 */
GetUsagePlanResponsePrivate::GetUsagePlanResponsePrivate(
    GetUsagePlanQueueResponse * const q) : GetUsagePlanPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetUsagePlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetUsagePlanResponsePrivate::GetUsagePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUsagePlanResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
