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

#include "describevpngatewaysresponse.h"
#include "describevpngatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpnGatewaysResponse
 *
 * @brief  Handles EC2 DescribeVpnGateways responses.
 *
 * @see    EC2Client::describeVpnGateways
 */

/**
 * @brief  Constructs a new DescribeVpnGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpnGatewaysResponse::DescribeVpnGatewaysResponse(
        const DescribeVpnGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpnGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeVpnGatewaysRequest(request));
    setReply(reply);
}

const DescribeVpnGatewaysRequest * DescribeVpnGatewaysResponse::request() const
{
    Q_D(const DescribeVpnGatewaysResponse);
    return static_cast<const DescribeVpnGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVpnGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeVpnGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVpnGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeVpnGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpnGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVpnGatewaysResponse instance.
 */
DescribeVpnGatewaysResponsePrivate::DescribeVpnGatewaysResponsePrivate(
    DescribeVpnGatewaysQueueResponse * const q) : DescribeVpnGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVpnGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVpnGatewaysResponsePrivate::DescribeVpnGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpnGatewaysResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
