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

#include "updateapnsvoipchannelresponse.h"
#include "updateapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateApnsVoipChannelResponse
 *
 * @brief  Handles Pinpoint UpdateApnsVoipChannel responses.
 *
 * @see    PinpointClient::updateApnsVoipChannel
 */

/**
 * @brief  Constructs a new UpdateApnsVoipChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApnsVoipChannelResponse::UpdateApnsVoipChannelResponse(
        const UpdateApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsVoipChannelRequest(request));
    setReply(reply);
}

const UpdateApnsVoipChannelRequest * UpdateApnsVoipChannelResponse::request() const
{
    Q_D(const UpdateApnsVoipChannelResponse);
    return static_cast<const UpdateApnsVoipChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateApnsVoipChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApnsVoipChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateApnsVoipChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApnsVoipChannelResponse instance.
 */
UpdateApnsVoipChannelResponsePrivate::UpdateApnsVoipChannelResponsePrivate(
    UpdateApnsVoipChannelQueueResponse * const q) : UpdateApnsVoipChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateApnsVoipChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApnsVoipChannelResponsePrivate::UpdateApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsVoipChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
