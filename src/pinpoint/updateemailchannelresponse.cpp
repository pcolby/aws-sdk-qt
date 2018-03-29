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

#include "updateemailchannelresponse.h"
#include "updateemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateEmailChannelResponse
 *
 * @brief  Handles Pinpoint UpdateEmailChannel responses.
 *
 * @see    PinpointClient::updateEmailChannel
 */

/**
 * @brief  Constructs a new UpdateEmailChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEmailChannelResponse::UpdateEmailChannelResponse(
        const UpdateEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEmailChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailChannelRequest(request));
    setReply(reply);
}

const UpdateEmailChannelRequest * UpdateEmailChannelResponse::request() const
{
    Q_D(const UpdateEmailChannelResponse);
    return static_cast<const UpdateEmailChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateEmailChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateEmailChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEmailChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateEmailChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEmailChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEmailChannelResponse instance.
 */
UpdateEmailChannelResponsePrivate::UpdateEmailChannelResponsePrivate(
    UpdateEmailChannelQueueResponse * const q) : UpdateEmailChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateEmailChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEmailChannelResponsePrivate::UpdateEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
