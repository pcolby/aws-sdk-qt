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

#include "describevpcendpointservicepermissionsresponse.h"
#include "describevpcendpointservicepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServicePermissionsResponse
 *
 * @brief  Handles EC2 DescribeVpcEndpointServicePermissions responses.
 *
 * @see    EC2Client::describeVpcEndpointServicePermissions
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointServicePermissionsResponse::DescribeVpcEndpointServicePermissionsResponse(
        const DescribeVpcEndpointServicePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcEndpointServicePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServicePermissionsRequest(request));
    setReply(reply);
}

const DescribeVpcEndpointServicePermissionsRequest * DescribeVpcEndpointServicePermissionsResponse::request() const
{
    Q_D(const DescribeVpcEndpointServicePermissionsResponse);
    return static_cast<const DescribeVpcEndpointServicePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcEndpointServicePermissions response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcEndpointServicePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServicePermissionsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServicePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcEndpointServicePermissionsResponse instance.
 */
DescribeVpcEndpointServicePermissionsResponsePrivate::DescribeVpcEndpointServicePermissionsResponsePrivate(
    DescribeVpcEndpointServicePermissionsQueueResponse * const q) : DescribeVpcEndpointServicePermissionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcEndpointServicePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcEndpointServicePermissionsResponsePrivate::DescribeVpcEndpointServicePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServicePermissionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
