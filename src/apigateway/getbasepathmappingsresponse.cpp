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

#include "getbasepathmappingsresponse.h"
#include "getbasepathmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetBasePathMappingsResponse
 *
 * @brief  Handles APIGateway GetBasePathMappings responses.
 *
 * @see    APIGatewayClient::getBasePathMappings
 */

/**
 * @brief  Constructs a new GetBasePathMappingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBasePathMappingsResponse::GetBasePathMappingsResponse(
        const GetBasePathMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetBasePathMappingsResponse(new GetBasePathMappingsResponsePrivate(this), parent)
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
    Q_D(GetBasePathMappingsResponse);
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
    GetBasePathMappingsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetBasePathMappingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBasePathMappingsResponsePrivate::parseGetBasePathMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBasePathMappingsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
