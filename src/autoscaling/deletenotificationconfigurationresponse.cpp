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

#include "deletenotificationconfigurationresponse.h"
#include "deletenotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DeleteNotificationConfigurationResponse
 *
 * @brief  Handles AutoScaling DeleteNotificationConfiguration responses.
 *
 * @see    AutoScalingClient::deleteNotificationConfiguration
 */

/**
 * @brief  Constructs a new DeleteNotificationConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotificationConfigurationResponse::DeleteNotificationConfigurationResponse(
        const DeleteNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationConfigurationRequest(request));
    setReply(reply);
}

const DeleteNotificationConfigurationRequest * DeleteNotificationConfigurationResponse::request() const
{
    Q_D(const DeleteNotificationConfigurationResponse);
    return static_cast<const DeleteNotificationConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DeleteNotificationConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNotificationConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteNotificationConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotificationConfigurationResponse instance.
 */
DeleteNotificationConfigurationResponsePrivate::DeleteNotificationConfigurationResponsePrivate(
    DeleteNotificationConfigurationQueueResponse * const q) : DeleteNotificationConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DeleteNotificationConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotificationConfigurationResponsePrivate::DeleteNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationConfigurationResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
