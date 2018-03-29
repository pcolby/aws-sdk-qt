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

#include "sendusersmessagesresponse.h"
#include "sendusersmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  SendUsersMessagesResponse
 *
 * @brief  Handles Pinpoint SendUsersMessages responses.
 *
 * @see    PinpointClient::sendUsersMessages
 */

/**
 * @brief  Constructs a new SendUsersMessagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendUsersMessagesResponse::SendUsersMessagesResponse(
        const SendUsersMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new SendUsersMessagesResponsePrivate(this), parent)
{
    setRequest(new SendUsersMessagesRequest(request));
    setReply(reply);
}

const SendUsersMessagesRequest * SendUsersMessagesResponse::request() const
{
    Q_D(const SendUsersMessagesResponse);
    return static_cast<const SendUsersMessagesRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint SendUsersMessages response.
 *
 * @param  response  Response to parse.
 */
void SendUsersMessagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendUsersMessagesResponsePrivate
 *
 * @brief  Private implementation for SendUsersMessagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendUsersMessagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendUsersMessagesResponse instance.
 */
SendUsersMessagesResponsePrivate::SendUsersMessagesResponsePrivate(
    SendUsersMessagesQueueResponse * const q) : SendUsersMessagesPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint SendUsersMessagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendUsersMessagesResponsePrivate::SendUsersMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendUsersMessagesResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS
