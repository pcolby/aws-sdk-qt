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

#include "getinstancestateresponse.h"
#include "getinstancestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceStateResponse
 *
 * @brief  Handles Lightsail GetInstanceState responses.
 *
 * @see    LightsailClient::getInstanceState
 */

/**
 * @brief  Constructs a new GetInstanceStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceStateResponse::GetInstanceStateResponse(
        const GetInstanceStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceStateResponsePrivate(this), parent)
{
    setRequest(new GetInstanceStateRequest(request));
    setReply(reply);
}

const GetInstanceStateRequest * GetInstanceStateResponse::request() const
{
    Q_D(const GetInstanceStateResponse);
    return static_cast<const GetInstanceStateRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstanceState response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceStateResponsePrivate
 *
 * @brief  Private implementation for GetInstanceStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceStateResponse instance.
 */
GetInstanceStateResponsePrivate::GetInstanceStateResponsePrivate(
    GetInstanceStateQueueResponse * const q) : GetInstanceStatePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstanceStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceStateResponsePrivate::GetInstanceStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceStateResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
