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

#include "updateapnsvoipsandboxchannelresponse.h"
#include "updateapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateApnsVoipSandboxChannelResponse
 *
 * @brief  Handles Pinpoint UpdateApnsVoipSandboxChannel responses.
 *
 * @see    PinpointClient::updateApnsVoipSandboxChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApnsVoipSandboxChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

const UpdateApnsVoipSandboxChannelRequest * UpdateApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipSandboxChannelResponse);
    return static_cast<const UpdateApnsVoipSandboxChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateApnsVoipSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApnsVoipSandboxChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateApnsVoipSandboxChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApnsVoipSandboxChannelResponse instance.
 */
UpdateApnsVoipSandboxChannelResponsePrivate::UpdateApnsVoipSandboxChannelResponsePrivate(
    UpdateApnsVoipSandboxChannelQueueResponse * const q) : UpdateApnsVoipSandboxChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateApnsVoipSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApnsVoipSandboxChannelResponsePrivate::UpdateApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
