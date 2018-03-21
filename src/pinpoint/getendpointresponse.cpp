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

#include "getendpointresponse.h"
#include "getendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetEndpointResponse
 *
 * @brief  Handles Pinpoint GetEndpoint responses.
 *
 * @see    PinpointClient::getEndpoint
 */

/**
 * @brief  Constructs a new GetEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEndpointResponse::GetEndpointResponse(
        const GetEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEndpointResponsePrivate(this), parent)
{
    setRequest(new GetEndpointRequest(request));
    setReply(reply);
}

const GetEndpointRequest * GetEndpointResponse::request() const
{
    Q_D(const GetEndpointResponse);
    return static_cast<const GetEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetEndpoint response.
 *
 * @param  response  Response to parse.
 */
void GetEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEndpointResponsePrivate
 *
 * @brief  Private implementation for GetEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEndpointResponse instance.
 */
GetEndpointResponsePrivate::GetEndpointResponsePrivate(
    GetEndpointQueueResponse * const q) : GetEndpointPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEndpointResponsePrivate::GetEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEndpointResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
