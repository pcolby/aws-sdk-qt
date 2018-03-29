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

#include "deletevpcendpointserviceconfigurationsresponse.h"
#include "deletevpcendpointserviceconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointServiceConfigurationsResponse
 *
 * @brief  Handles EC2 DeleteVpcEndpointServiceConfigurations responses.
 *
 * @see    EC2Client::deleteVpcEndpointServiceConfigurations
 */

/**
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcEndpointServiceConfigurationsResponse::DeleteVpcEndpointServiceConfigurationsResponse(
        const DeleteVpcEndpointServiceConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcEndpointServiceConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointServiceConfigurationsRequest(request));
    setReply(reply);
}

const DeleteVpcEndpointServiceConfigurationsRequest * DeleteVpcEndpointServiceConfigurationsResponse::request() const
{
    Q_D(const DeleteVpcEndpointServiceConfigurationsResponse);
    return static_cast<const DeleteVpcEndpointServiceConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpcEndpointServiceConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcEndpointServiceConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointServiceConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointServiceConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointServiceConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcEndpointServiceConfigurationsResponse instance.
 */
DeleteVpcEndpointServiceConfigurationsResponsePrivate::DeleteVpcEndpointServiceConfigurationsResponsePrivate(
    DeleteVpcEndpointServiceConfigurationsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpcEndpointServiceConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcEndpointServiceConfigurationsResponsePrivate::DeleteVpcEndpointServiceConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointServiceConfigurationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
