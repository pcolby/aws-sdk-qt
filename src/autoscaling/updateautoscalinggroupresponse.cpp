/*
    Copyright 2013-2019 Paul Colby

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

#include "updateautoscalinggroupresponse.h"
#include "updateautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupResponse
 * \brief The UpdateAutoScalingGroupResponse class provides an interace for AutoScaling UpdateAutoScalingGroup responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto Scaling
 *  User
 *
 * \sa AutoScalingClient::updateAutoScalingGroup
 */

/*!
 * Constructs a UpdateAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAutoScalingGroupResponse::UpdateAutoScalingGroupResponse(
        const UpdateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new UpdateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAutoScalingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAutoScalingGroupRequest * UpdateAutoScalingGroupResponse::request() const
{
    Q_D(const UpdateAutoScalingGroupResponse);
    return static_cast<const UpdateAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling UpdateAutoScalingGroup \a response.
 */
void UpdateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupResponsePrivate
 * \brief The UpdateAutoScalingGroupResponsePrivate class provides private implementation for UpdateAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a UpdateAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
UpdateAutoScalingGroupResponsePrivate::UpdateAutoScalingGroupResponsePrivate(
    UpdateAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling UpdateAutoScalingGroup response element from \a xml.
 */
void UpdateAutoScalingGroupResponsePrivate::parseUpdateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAutoScalingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
