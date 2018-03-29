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

#include "getbasepathmappingresponse.h"
#include "getbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetBasePathMappingResponse
 *
 * @brief  Handles APIGateway GetBasePathMapping responses.
 *
 * @see    APIGatewayClient::getBasePathMapping
 */

/**
 * @brief  Constructs a new GetBasePathMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBasePathMappingResponse::GetBasePathMappingResponse(
        const GetBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new GetBasePathMappingRequest(request));
    setReply(reply);
}

const GetBasePathMappingRequest * GetBasePathMappingResponse::request() const
{
    Q_D(const GetBasePathMappingResponse);
    return static_cast<const GetBasePathMappingRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetBasePathMapping response.
 *
 * @param  response  Response to parse.
 */
void GetBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBasePathMappingResponsePrivate
 *
 * @brief  Private implementation for GetBasePathMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBasePathMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBasePathMappingResponse instance.
 */
GetBasePathMappingResponsePrivate::GetBasePathMappingResponsePrivate(
    GetBasePathMappingResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetBasePathMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBasePathMappingResponsePrivate::GetBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
