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

#include "putnotificationconfigurationresponse.h"
#include "putnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  PutNotificationConfigurationResponse
 *
 * @brief  Handles AutoScaling PutNotificationConfiguration responses.
 *
 * @see    AutoScalingClient::putNotificationConfiguration
 */

/**
 * @brief  Constructs a new PutNotificationConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutNotificationConfigurationResponse::PutNotificationConfigurationResponse(
        const PutNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutNotificationConfigurationRequest(request));
    setReply(reply);
}

const PutNotificationConfigurationRequest * PutNotificationConfigurationResponse::request() const
{
    Q_D(const PutNotificationConfigurationResponse);
    return static_cast<const PutNotificationConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling PutNotificationConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutNotificationConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutNotificationConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutNotificationConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutNotificationConfigurationResponse instance.
 */
PutNotificationConfigurationResponsePrivate::PutNotificationConfigurationResponsePrivate(
    PutNotificationConfigurationQueueResponse * const q) : PutNotificationConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling PutNotificationConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutNotificationConfigurationResponsePrivate::PutNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutNotificationConfigurationResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
