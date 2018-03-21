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

#include "getapnsvoipsandboxchannelresponse.h"
#include "getapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsVoipSandboxChannelResponse
 *
 * @brief  Handles Pinpoint GetApnsVoipSandboxChannel responses.
 *
 * @see    PinpointClient::getApnsVoipSandboxChannel
 */

/**
 * @brief  Constructs a new GetApnsVoipSandboxChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsVoipSandboxChannelResponse::GetApnsVoipSandboxChannelResponse(
        const GetApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

const GetApnsVoipSandboxChannelRequest * GetApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const GetApnsVoipSandboxChannelResponse);
    return static_cast<const GetApnsVoipSandboxChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApnsVoipSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void GetApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApnsVoipSandboxChannelResponsePrivate
 *
 * @brief  Private implementation for GetApnsVoipSandboxChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApnsVoipSandboxChannelResponse instance.
 */
GetApnsVoipSandboxChannelResponsePrivate::GetApnsVoipSandboxChannelResponsePrivate(
    GetApnsVoipSandboxChannelQueueResponse * const q) : GetApnsVoipSandboxChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetApnsVoipSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApnsVoipSandboxChannelResponsePrivate::GetApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
