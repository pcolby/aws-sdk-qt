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

#include "createlaunchconfigurationresponse.h"
#include "createlaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  CreateLaunchConfigurationResponse
 *
 * @brief  Handles AutoScaling CreateLaunchConfiguration responses.
 *
 * @see    AutoScalingClient::createLaunchConfiguration
 */

/**
 * @brief  Constructs a new CreateLaunchConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLaunchConfigurationResponse::CreateLaunchConfigurationResponse(
        const CreateLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchConfigurationRequest(request));
    setReply(reply);
}

const CreateLaunchConfigurationRequest * CreateLaunchConfigurationResponse::request() const
{
    Q_D(const CreateLaunchConfigurationResponse);
    return static_cast<const CreateLaunchConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling CreateLaunchConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLaunchConfigurationResponsePrivate
 *
 * @brief  Private implementation for CreateLaunchConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLaunchConfigurationResponse instance.
 */
CreateLaunchConfigurationResponsePrivate::CreateLaunchConfigurationResponsePrivate(
    CreateLaunchConfigurationQueueResponse * const q) : CreateLaunchConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling CreateLaunchConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLaunchConfigurationResponsePrivate::CreateLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchConfigurationResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
