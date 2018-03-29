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

#include "createvpcendpointserviceconfigurationresponse.h"
#include "createvpcendpointserviceconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcEndpointServiceConfigurationResponse
 *
 * @brief  Handles EC2 CreateVpcEndpointServiceConfiguration responses.
 *
 * @see    EC2Client::createVpcEndpointServiceConfiguration
 */

/**
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcEndpointServiceConfigurationResponse::CreateVpcEndpointServiceConfigurationResponse(
        const CreateVpcEndpointServiceConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcEndpointServiceConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointServiceConfigurationRequest(request));
    setReply(reply);
}

const CreateVpcEndpointServiceConfigurationRequest * CreateVpcEndpointServiceConfigurationResponse::request() const
{
    Q_D(const CreateVpcEndpointServiceConfigurationResponse);
    return static_cast<const CreateVpcEndpointServiceConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpcEndpointServiceConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcEndpointServiceConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpcEndpointServiceConfigurationResponsePrivate
 *
 * @brief  Private implementation for CreateVpcEndpointServiceConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointServiceConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcEndpointServiceConfigurationResponse instance.
 */
CreateVpcEndpointServiceConfigurationResponsePrivate::CreateVpcEndpointServiceConfigurationResponsePrivate(
    CreateVpcEndpointServiceConfigurationQueueResponse * const q) : CreateVpcEndpointServiceConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpcEndpointServiceConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcEndpointServiceConfigurationResponsePrivate::CreateVpcEndpointServiceConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointServiceConfigurationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
