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

#include "attachloadbalancertargetgroupsresponse.h"
#include "attachloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  AttachLoadBalancerTargetGroupsResponse
 *
 * @brief  Handles AutoScaling AttachLoadBalancerTargetGroups responses.
 *
 * @see    AutoScalingClient::attachLoadBalancerTargetGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachLoadBalancerTargetGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

const AttachLoadBalancerTargetGroupsRequest * AttachLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const AttachLoadBalancerTargetGroupsResponse);
    return static_cast<const AttachLoadBalancerTargetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling AttachLoadBalancerTargetGroups response.
 *
 * @param  response  Response to parse.
 */
void AttachLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerTargetGroupsResponsePrivate
 *
 * @brief  Private implementation for AttachLoadBalancerTargetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachLoadBalancerTargetGroupsResponse instance.
 */
AttachLoadBalancerTargetGroupsResponsePrivate::AttachLoadBalancerTargetGroupsResponsePrivate(
    AttachLoadBalancerTargetGroupsQueueResponse * const q) : AttachLoadBalancerTargetGroupsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling AttachLoadBalancerTargetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachLoadBalancerTargetGroupsResponsePrivate::AttachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerTargetGroupsResponse"));
    /// @todo
}
