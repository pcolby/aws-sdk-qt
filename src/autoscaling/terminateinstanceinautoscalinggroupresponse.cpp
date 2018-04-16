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

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupResponse
 *
 * \brief The TerminateInstanceInAutoScalingGroupResponse class encapsulates AutoScaling TerminateInstanceInAutoScalingGroup responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::terminateInstanceInAutoScalingGroup
 */

/*!
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

/*!
 * @brief  Parse a AutoScaling TerminateInstanceInAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void TerminateInstanceInAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(TerminateInstanceInAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TerminateInstanceInAutoScalingGroupResponsePrivate
 *
 * \brief Private implementation for TerminateInstanceInAutoScalingGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateInstanceInAutoScalingGroupResponse instance.
 */
TerminateInstanceInAutoScalingGroupResponsePrivate::TerminateInstanceInAutoScalingGroupResponsePrivate(
    TerminateInstanceInAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling TerminateInstanceInAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateInstanceInAutoScalingGroupResponsePrivate::parseTerminateInstanceInAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateInstanceInAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
