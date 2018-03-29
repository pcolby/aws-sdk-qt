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

#include "describevpcendpointserviceconfigurationsresponse.h"
#include "describevpcendpointserviceconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServiceConfigurationsResponse
 *
 * @brief  Handles EC2 DescribeVpcEndpointServiceConfigurations responses.
 *
 * @see    EC2Client::describeVpcEndpointServiceConfigurations
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointServiceConfigurationsResponse::DescribeVpcEndpointServiceConfigurationsResponse(
        const DescribeVpcEndpointServiceConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcEndpointServiceConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServiceConfigurationsRequest(request));
    setReply(reply);
}

const DescribeVpcEndpointServiceConfigurationsRequest * DescribeVpcEndpointServiceConfigurationsResponse::request() const
{
    Q_D(const DescribeVpcEndpointServiceConfigurationsResponse);
    return static_cast<const DescribeVpcEndpointServiceConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcEndpointServiceConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcEndpointServiceConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServiceConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServiceConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServiceConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcEndpointServiceConfigurationsResponse instance.
 */
DescribeVpcEndpointServiceConfigurationsResponsePrivate::DescribeVpcEndpointServiceConfigurationsResponsePrivate(
    DescribeVpcEndpointServiceConfigurationsQueueResponse * const q) : DescribeVpcEndpointServiceConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcEndpointServiceConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcEndpointServiceConfigurationsResponsePrivate::DescribeVpcEndpointServiceConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServiceConfigurationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
