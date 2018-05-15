/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The TerminateInstanceInAutoScalingGroupResponse class provides an interace for AutoScaling TerminateInstanceInAutoScalingGroup responses.
 *
 * \inmodule QtAwsAutoScaling
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
 * Constructs a TerminateInstanceInAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const TerminateInstanceInAutoScalingGroupRequest * TerminateInstanceInAutoScalingGroupResponse::request() const
{
    Q_D(const TerminateInstanceInAutoScalingGroupResponse);
    return static_cast<const TerminateInstanceInAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling TerminateInstanceInAutoScalingGroup \a response.
 */
void TerminateInstanceInAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateInstanceInAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupResponsePrivate
 * \brief The TerminateInstanceInAutoScalingGroupResponsePrivate class provides private implementation for TerminateInstanceInAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a TerminateInstanceInAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
TerminateInstanceInAutoScalingGroupResponsePrivate::TerminateInstanceInAutoScalingGroupResponsePrivate(
    TerminateInstanceInAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling TerminateInstanceInAutoScalingGroup response element from \a xml.
 */
void TerminateInstanceInAutoScalingGroupResponsePrivate::parseTerminateInstanceInAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateInstanceInAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
