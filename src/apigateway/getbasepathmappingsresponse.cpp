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

#include "getbasepathmappingsresponse.h"
#include "getbasepathmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetBasePathMappingsResponse
 *
 * @brief  Handles APIGateway GetBasePathMappings responses.
 *
 * @see    APIGatewayClient::getBasePathMappings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBasePathMappingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetBasePathMappingsResponsePrivate(this), parent)
{
    setRequest(new GetBasePathMappingsRequest(request));
    setReply(reply);
}

const GetBasePathMappingsRequest * GetBasePathMappingsResponse::request() const
{
    Q_D(const GetBasePathMappingsResponse);
    return static_cast<const GetBasePathMappingsRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetBasePathMappings response.
 *
 * @param  response  Response to parse.
 */
void GetBasePathMappingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBasePathMappingsResponsePrivate
 *
 * @brief  Private implementation for GetBasePathMappingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBasePathMappingsResponse instance.
 */
GetBasePathMappingsResponsePrivate::GetBasePathMappingsResponsePrivate(
    GetBasePathMappingsQueueResponse * const q) : GetBasePathMappingsPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetBasePathMappingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBasePathMappingsResponsePrivate::GetBasePathMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingsResponse"));
    /// @todo
}
