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

#include "describeloadbalancerpoliciesresponse.h"
#include "describeloadbalancerpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeLoadBalancerPoliciesResponse
 *
 * @brief  Handles ElasticLoadBalancing DescribeLoadBalancerPolicies responses.
 *
 * @see    ElasticLoadBalancingClient::describeLoadBalancerPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBalancerPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeLoadBalancerPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerPoliciesRequest(request));
    setReply(reply);
}

const DescribeLoadBalancerPoliciesRequest * DescribeLoadBalancerPoliciesResponse::request() const
{
    Q_D(const DescribeLoadBalancerPoliciesResponse);
    return static_cast<const DescribeLoadBalancerPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DescribeLoadBalancerPolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBalancerPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerPoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBalancerPoliciesResponse instance.
 */
DescribeLoadBalancerPoliciesResponsePrivate::DescribeLoadBalancerPoliciesResponsePrivate(
    DescribeLoadBalancerPoliciesQueueResponse * const q) : DescribeLoadBalancerPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DescribeLoadBalancerPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBalancerPoliciesResponsePrivate::DescribeLoadBalancerPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerPoliciesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
