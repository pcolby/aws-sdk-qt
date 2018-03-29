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

#include "detachloadbalancertargetgroupsresponse.h"
#include "detachloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DetachLoadBalancerTargetGroupsResponse
 *
 * @brief  Handles AutoScaling DetachLoadBalancerTargetGroups responses.
 *
 * @see    AutoScalingClient::detachLoadBalancerTargetGroups
 */

/**
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachLoadBalancerTargetGroupsResponse::DetachLoadBalancerTargetGroupsResponse(
        const DetachLoadBalancerTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DetachLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new DetachLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

const DetachLoadBalancerTargetGroupsRequest * DetachLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const DetachLoadBalancerTargetGroupsResponse);
    return static_cast<const DetachLoadBalancerTargetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DetachLoadBalancerTargetGroups response.
 *
 * @param  response  Response to parse.
 */
void DetachLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachLoadBalancerTargetGroupsResponsePrivate
 *
 * @brief  Private implementation for DetachLoadBalancerTargetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachLoadBalancerTargetGroupsResponse instance.
 */
DetachLoadBalancerTargetGroupsResponsePrivate::DetachLoadBalancerTargetGroupsResponsePrivate(
    DetachLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DetachLoadBalancerTargetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachLoadBalancerTargetGroupsResponsePrivate::DetachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachLoadBalancerTargetGroupsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
