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

#include "updategcmchannelresponse.h"
#include "updategcmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateGcmChannelResponse
 *
 * @brief  Handles Pinpoint UpdateGcmChannel responses.
 *
 * @see    PinpointClient::updateGcmChannel
 */

/**
 * @brief  Constructs a new UpdateGcmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateGcmChannelResponse::UpdateGcmChannelResponse(
        const UpdateGcmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateGcmChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateGcmChannelRequest(request));
    setReply(reply);
}

const UpdateGcmChannelRequest * UpdateGcmChannelResponse::request() const
{
    Q_D(const UpdateGcmChannelResponse);
    return static_cast<const UpdateGcmChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateGcmChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateGcmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateGcmChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateGcmChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGcmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateGcmChannelResponse instance.
 */
UpdateGcmChannelResponsePrivate::UpdateGcmChannelResponsePrivate(
    UpdateGcmChannelQueueResponse * const q) : UpdateGcmChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateGcmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateGcmChannelResponsePrivate::UpdateGcmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGcmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
