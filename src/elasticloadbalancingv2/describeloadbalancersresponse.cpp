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

#include "describeloadbalancersresponse.h"
#include "describeloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeLoadBalancersResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeLoadBalancers responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeLoadBalancers
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBalancersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancersRequest(request));
    setReply(reply);
}

const DescribeLoadBalancersRequest * DescribeLoadBalancersResponse::request() const
{
    Q_D(const DescribeLoadBalancersResponse);
    return static_cast<const DescribeLoadBalancersRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeLoadBalancers response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancersResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBalancersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBalancersResponse instance.
 */
DescribeLoadBalancersResponsePrivate::DescribeLoadBalancersResponsePrivate(
    DescribeLoadBalancersQueueResponse * const q) : DescribeLoadBalancersPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeLoadBalancersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBalancersResponsePrivate::DescribeLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancersResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
