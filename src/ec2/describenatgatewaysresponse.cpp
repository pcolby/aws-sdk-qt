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

#include "describenatgatewaysresponse.h"
#include "describenatgatewaysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeNatGatewaysResponse
 *
 * @brief  Handles EC2 DescribeNatGateways responses.
 *
 * @see    EC2Client::describeNatGateways
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNatGatewaysResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeNatGatewaysResponsePrivate(this), parent)
{
    setRequest(new DescribeNatGatewaysRequest(request));
    setReply(reply);
}

const DescribeNatGatewaysRequest * DescribeNatGatewaysResponse::request() const
{
    Q_D(const DescribeNatGatewaysResponse);
    return static_cast<const DescribeNatGatewaysRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeNatGateways response.
 *
 * @param  response  Response to parse.
 */
void DescribeNatGatewaysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNatGatewaysResponsePrivate
 *
 * @brief  Private implementation for DescribeNatGatewaysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNatGatewaysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNatGatewaysResponse instance.
 */
DescribeNatGatewaysResponsePrivate::DescribeNatGatewaysResponsePrivate(
    DescribeNatGatewaysQueueResponse * const q) : DescribeNatGatewaysPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeNatGatewaysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNatGatewaysResponsePrivate::DescribeNatGatewaysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNatGatewaysResponse"));
    /// @todo
}
