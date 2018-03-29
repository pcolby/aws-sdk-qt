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

#include "updatesmschannelresponse.h"
#include "updatesmschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateSmsChannelResponse
 *
 * @brief  Handles Pinpoint UpdateSmsChannel responses.
 *
 * @see    PinpointClient::updateSmsChannel
 */

/**
 * @brief  Constructs a new UpdateSmsChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSmsChannelResponse::UpdateSmsChannelResponse(
        const UpdateSmsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSmsChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateSmsChannelRequest(request));
    setReply(reply);
}

const UpdateSmsChannelRequest * UpdateSmsChannelResponse::request() const
{
    Q_D(const UpdateSmsChannelResponse);
    return static_cast<const UpdateSmsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateSmsChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateSmsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSmsChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateSmsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSmsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSmsChannelResponse instance.
 */
UpdateSmsChannelResponsePrivate::UpdateSmsChannelResponsePrivate(
    UpdateSmsChannelQueueResponse * const q) : UpdateSmsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateSmsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSmsChannelResponsePrivate::UpdateSmsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSmsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
