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

#include "startchannelresponse.h"
#include "startchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  StartChannelResponse
 *
 * @brief  Handles MediaLive StartChannel responses.
 *
 * @see    MediaLiveClient::startChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartChannelResponsePrivate(this), parent)
{
    setRequest(new StartChannelRequest(request));
    setReply(reply);
}

const StartChannelRequest * StartChannelResponse::request() const
{
    Q_D(const StartChannelResponse);
    return static_cast<const StartChannelRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive StartChannel response.
 *
 * @param  response  Response to parse.
 */
void StartChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartChannelResponsePrivate
 *
 * @brief  Private implementation for StartChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartChannelResponse instance.
 */
StartChannelResponsePrivate::StartChannelResponsePrivate(
    StartChannelQueueResponse * const q) : StartChannelPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive StartChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartChannelResponsePrivate::StartChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartChannelResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace AWS
