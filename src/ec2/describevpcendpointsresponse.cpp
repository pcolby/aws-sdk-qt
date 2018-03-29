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

#include "describevpcendpointsresponse.h"
#include "describevpcendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointsResponse
 *
 * @brief  Handles EC2 DescribeVpcEndpoints responses.
 *
 * @see    EC2Client::describeVpcEndpoints
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointsResponse::DescribeVpcEndpointsResponse(
        const DescribeVpcEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeVpcEndpointsResponse(new DescribeVpcEndpointsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointsRequest(request));
    setReply(reply);
}

const DescribeVpcEndpointsRequest * DescribeVpcEndpointsResponse::request() const
{
    Q_D(const DescribeVpcEndpointsResponse);
    return static_cast<const DescribeVpcEndpointsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpcEndpoints response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpcEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointsResponsePrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpcEndpointsResponse instance.
 */
DescribeVpcEndpointsResponsePrivate::DescribeVpcEndpointsResponsePrivate(
    DescribeVpcEndpointsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpcEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpcEndpointsResponsePrivate::parseDescribeVpcEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
