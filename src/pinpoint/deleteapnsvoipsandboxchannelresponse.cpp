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

#include "deleteapnsvoipsandboxchannelresponse.h"
#include "deleteapnsvoipsandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteApnsVoipSandboxChannelResponse
 *
 * @brief  Handles Pinpoint DeleteApnsVoipSandboxChannel responses.
 *
 * @see    PinpointClient::deleteApnsVoipSandboxChannel
 */

/**
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApnsVoipSandboxChannelResponse::DeleteApnsVoipSandboxChannelResponse(
        const DeleteApnsVoipSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipSandboxChannelRequest(request));
    setReply(reply);
}

const DeleteApnsVoipSandboxChannelRequest * DeleteApnsVoipSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipSandboxChannelResponse);
    return static_cast<const DeleteApnsVoipSandboxChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteApnsVoipSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteApnsVoipSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApnsVoipSandboxChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteApnsVoipSandboxChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApnsVoipSandboxChannelResponse instance.
 */
DeleteApnsVoipSandboxChannelResponsePrivate::DeleteApnsVoipSandboxChannelResponsePrivate(
    DeleteApnsVoipSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteApnsVoipSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApnsVoipSandboxChannelResponsePrivate::DeleteApnsVoipSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
