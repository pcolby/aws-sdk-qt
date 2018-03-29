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

#include "terminateinstanceinautoscalinggroupresponse.h"
#include "terminateinstanceinautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  TerminateInstanceInAutoScalingGroupResponse
 *
 * @brief  Handles AutoScaling TerminateInstanceInAutoScalingGroup responses.
 *
 * @see    AutoScalingClient::terminateInstanceInAutoScalingGroup
 */

/**
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateInstanceInAutoScalingGroupResponse::TerminateInstanceInAutoScalingGroupResponse(
        const TerminateInstanceInAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new TerminateInstanceInAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new TerminateInstanceInAutoScalingGroupRequest(request));
    setReply(reply);
}

const TerminateInstanceInAutoScalingGroupRequest * TerminateInstanceInAutoScalingGroupResponse::request() const
{
    Q_D(const TerminateInstanceInAutoScalingGroupResponse);
    return static_cast<const TerminateInstanceInAutoScalingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling TerminateInstanceInAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void TerminateInstanceInAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateInstanceInAutoScalingGroupResponsePrivate
 *
 * @brief  Private implementation for TerminateInstanceInAutoScalingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateInstanceInAutoScalingGroupResponse instance.
 */
TerminateInstanceInAutoScalingGroupResponsePrivate::TerminateInstanceInAutoScalingGroupResponsePrivate(
    TerminateInstanceInAutoScalingGroupQueueResponse * const q) : TerminateInstanceInAutoScalingGroupPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling TerminateInstanceInAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateInstanceInAutoScalingGroupResponsePrivate::TerminateInstanceInAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateInstanceInAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
