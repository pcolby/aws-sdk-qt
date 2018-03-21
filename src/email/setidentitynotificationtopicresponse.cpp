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

#include "setidentitynotificationtopicresponse.h"
#include "setidentitynotificationtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SetIdentityNotificationTopicResponse
 *
 * @brief  Handles SES SetIdentityNotificationTopic responses.
 *
 * @see    SESClient::setIdentityNotificationTopic
 */

/**
 * @brief  Constructs a new SetIdentityNotificationTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityNotificationTopicResponse::SetIdentityNotificationTopicResponse(
        const SetIdentityNotificationTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityNotificationTopicResponsePrivate(this), parent)
{
    setRequest(new SetIdentityNotificationTopicRequest(request));
    setReply(reply);
}

const SetIdentityNotificationTopicRequest * SetIdentityNotificationTopicResponse::request() const
{
    Q_D(const SetIdentityNotificationTopicResponse);
    return static_cast<const SetIdentityNotificationTopicRequest *>(d->request);
}

/**
 * @brief  Parse a SES SetIdentityNotificationTopic response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityNotificationTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIdentityNotificationTopicResponsePrivate
 *
 * @brief  Private implementation for SetIdentityNotificationTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIdentityNotificationTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityNotificationTopicResponse instance.
 */
SetIdentityNotificationTopicResponsePrivate::SetIdentityNotificationTopicResponsePrivate(
    SetIdentityNotificationTopicQueueResponse * const q) : SetIdentityNotificationTopicPrivate(q)
{

}

/**
 * @brief  Parse an SES SetIdentityNotificationTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityNotificationTopicResponsePrivate::SetIdentityNotificationTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityNotificationTopicResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
