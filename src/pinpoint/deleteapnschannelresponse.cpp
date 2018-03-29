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

#include "deleteapnschannelresponse.h"
#include "deleteapnschannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteApnsChannelResponse
 *
 * @brief  Handles Pinpoint DeleteApnsChannel responses.
 *
 * @see    PinpointClient::deleteApnsChannel
 */

/**
 * @brief  Constructs a new DeleteApnsChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApnsChannelResponse::DeleteApnsChannelResponse(
        const DeleteApnsChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsChannelRequest(request));
    setReply(reply);
}

const DeleteApnsChannelRequest * DeleteApnsChannelResponse::request() const
{
    Q_D(const DeleteApnsChannelResponse);
    return static_cast<const DeleteApnsChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint DeleteApnsChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteApnsChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApnsChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteApnsChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApnsChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApnsChannelResponse instance.
 */
DeleteApnsChannelResponsePrivate::DeleteApnsChannelResponsePrivate(
    DeleteApnsChannelQueueResponse * const q) : DeleteApnsChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint DeleteApnsChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApnsChannelResponsePrivate::DeleteApnsChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
