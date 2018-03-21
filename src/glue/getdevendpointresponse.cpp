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

#include "getdevendpointresponse.h"
#include "getdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  GetDevEndpointResponse
 *
 * @brief  Handles Glue GetDevEndpoint responses.
 *
 * @see    GlueClient::getDevEndpoint
 */

/**
 * @brief  Constructs a new GetDevEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDevEndpointResponse::GetDevEndpointResponse(
        const GetDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointRequest(request));
    setReply(reply);
}

const GetDevEndpointRequest * GetDevEndpointResponse::request() const
{
    Q_D(const GetDevEndpointResponse);
    return static_cast<const GetDevEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void GetDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDevEndpointResponsePrivate
 *
 * @brief  Private implementation for GetDevEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDevEndpointResponse instance.
 */
GetDevEndpointResponsePrivate::GetDevEndpointResponsePrivate(
    GetDevEndpointQueueResponse * const q) : GetDevEndpointPrivate(q)
{

}

/**
 * @brief  Parse an Glue GetDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDevEndpointResponsePrivate::GetDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
