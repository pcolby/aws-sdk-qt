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

#include "describeegressonlyinternetgatewaysresponse.h"
#include "describeegressonlyinternetgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeEgressOnlyInternetGatewaysResponse
 *
 * @brief  Handles EC2 DescribeEgressOnlyInternetGateways responses.
 *
 * @see    EC2Client::describeEgressOnlyInternetGateways
 */

/**
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEgressOnlyInternetGatewaysResponse::DescribeEgressOnlyInternetGatewaysResponse(
        const DescribeEgressOnlyInternetGatewaysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeEgressOnlyInternetGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeEgressOnlyInternetGatewaysRequest(request));
    setReply(reply);
}

const DescribeEgressOnlyInternetGatewaysRequest * DescribeEgressOnlyInternetGatewaysResponse::request() const
{
    Q_D(const DescribeEgressOnlyInternetGatewaysResponse);
    return static_cast<const DescribeEgressOnlyInternetGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeEgressOnlyInternetGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeEgressOnlyInternetGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEgressOnlyInternetGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeEgressOnlyInternetGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEgressOnlyInternetGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEgressOnlyInternetGatewaysResponse instance.
 */
DescribeEgressOnlyInternetGatewaysResponsePrivate::DescribeEgressOnlyInternetGatewaysResponsePrivate(
    DescribeEgressOnlyInternetGatewaysResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeEgressOnlyInternetGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEgressOnlyInternetGatewaysResponsePrivate::DescribeEgressOnlyInternetGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEgressOnlyInternetGatewaysResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
