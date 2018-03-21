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

#include "updateapnschannelresponse.h"
#include "updateapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateApnsChannelResponse
 *
 * @brief  Handles Pinpoint UpdateApnsChannel responses.
 *
 * @see    PinpointClient::updateApnsChannel
 */

/**
 * @brief  Constructs a new UpdateApnsChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApnsChannelResponse::UpdateApnsChannelResponse(
        const UpdateApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsChannelRequest(request));
    setReply(reply);
}

const UpdateApnsChannelRequest * UpdateApnsChannelResponse::request() const
{
    Q_D(const UpdateApnsChannelResponse);
    return static_cast<const UpdateApnsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateApnsChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateApnsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApnsChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateApnsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApnsChannelResponse instance.
 */
UpdateApnsChannelResponsePrivate::UpdateApnsChannelResponsePrivate(
    UpdateApnsChannelQueueResponse * const q) : UpdateApnsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateApnsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApnsChannelResponsePrivate::UpdateApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
