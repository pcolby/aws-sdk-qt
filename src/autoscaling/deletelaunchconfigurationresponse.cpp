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

#include "deletelaunchconfigurationresponse.h"
#include "deletelaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DeleteLaunchConfigurationResponse
 *
 * @brief  Handles AutoScaling DeleteLaunchConfiguration responses.
 *
 * @see    AutoScalingClient::deleteLaunchConfiguration
 */

/**
 * @brief  Constructs a new DeleteLaunchConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLaunchConfigurationResponse::DeleteLaunchConfigurationResponse(
        const DeleteLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchConfigurationRequest(request));
    setReply(reply);
}

const DeleteLaunchConfigurationRequest * DeleteLaunchConfigurationResponse::request() const
{
    Q_D(const DeleteLaunchConfigurationResponse);
    return static_cast<const DeleteLaunchConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DeleteLaunchConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLaunchConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteLaunchConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLaunchConfigurationResponse instance.
 */
DeleteLaunchConfigurationResponsePrivate::DeleteLaunchConfigurationResponsePrivate(
    DeleteLaunchConfigurationQueueResponse * const q) : DeleteLaunchConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DeleteLaunchConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLaunchConfigurationResponsePrivate::DeleteLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchConfigurationResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
