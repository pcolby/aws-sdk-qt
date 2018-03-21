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

#include "sendtesteventnotificationresponse.h"
#include "sendtesteventnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  SendTestEventNotificationResponse
 *
 * @brief  Handles MTurk SendTestEventNotification responses.
 *
 * @see    MTurkClient::sendTestEventNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTestEventNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new SendTestEventNotificationResponsePrivate(this), parent)
{
    setRequest(new SendTestEventNotificationRequest(request));
    setReply(reply);
}

const SendTestEventNotificationRequest * SendTestEventNotificationResponse::request() const
{
    Q_D(const SendTestEventNotificationResponse);
    return static_cast<const SendTestEventNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk SendTestEventNotification response.
 *
 * @param  response  Response to parse.
 */
void SendTestEventNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SendTestEventNotificationResponsePrivate
 *
 * @brief  Private implementation for SendTestEventNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTestEventNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SendTestEventNotificationResponse instance.
 */
SendTestEventNotificationResponsePrivate::SendTestEventNotificationResponsePrivate(
    SendTestEventNotificationQueueResponse * const q) : SendTestEventNotificationPrivate(q)
{

}

/**
 * @brief  Parse an MTurk SendTestEventNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SendTestEventNotificationResponsePrivate::SendTestEventNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTestEventNotificationResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
