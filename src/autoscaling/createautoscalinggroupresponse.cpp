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

#include "createautoscalinggroupresponse.h"
#include "createautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateAutoScalingGroupResponse
 * \brief The CreateAutoScalingGroupResponse class provides an interace for AutoScaling CreateAutoScalingGroup responses.
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
 * \sa AutoScalingClient::createAutoScalingGroup
 */

/*!
 * Constructs a CreateAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAutoScalingGroupResponse::CreateAutoScalingGroupResponse(
        const CreateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new CreateAutoScalingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAutoScalingGroupRequest * CreateAutoScalingGroupResponse::request() const
{
    Q_D(const CreateAutoScalingGroupResponse);
    return static_cast<const CreateAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CreateAutoScalingGroup \a response.
 */
void CreateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CreateAutoScalingGroupResponsePrivate
 * \brief The CreateAutoScalingGroupResponsePrivate class provides private implementation for CreateAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
CreateAutoScalingGroupResponsePrivate::CreateAutoScalingGroupResponsePrivate(
    CreateAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CreateAutoScalingGroup response element from \a xml.
 */
void CreateAutoScalingGroupResponsePrivate::parseCreateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAutoScalingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
