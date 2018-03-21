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

#include "describeloadbalancertargetgroupsresponse.h"
#include "describeloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeLoadBalancerTargetGroupsResponse
 *
 * @brief  Handles AutoScaling DescribeLoadBalancerTargetGroups responses.
 *
 * @see    AutoScalingClient::describeLoadBalancerTargetGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBalancerTargetGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

const DescribeLoadBalancerTargetGroupsRequest * DescribeLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const DescribeLoadBalancerTargetGroupsResponse);
    return static_cast<const DescribeLoadBalancerTargetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeLoadBalancerTargetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerTargetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerTargetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerTargetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBalancerTargetGroupsResponse instance.
 */
DescribeLoadBalancerTargetGroupsResponsePrivate::DescribeLoadBalancerTargetGroupsResponsePrivate(
    DescribeLoadBalancerTargetGroupsQueueResponse * const q) : DescribeLoadBalancerTargetGroupsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeLoadBalancerTargetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBalancerTargetGroupsResponsePrivate::DescribeLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerTargetGroupsResponse"));
    /// @todo
}
