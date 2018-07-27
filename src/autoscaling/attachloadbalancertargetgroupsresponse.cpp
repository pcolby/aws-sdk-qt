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

#include "attachloadbalancertargetgroupsresponse.h"
#include "attachloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsResponse
 * \brief The AttachLoadBalancerTargetGroupsResponse class provides an interace for AutoScaling AttachLoadBalancerTargetGroups responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::attachLoadBalancerTargetGroups
 */

/*!
 * Constructs a AttachLoadBalancerTargetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
AttachLoadBalancerTargetGroupsResponse::AttachLoadBalancerTargetGroupsResponse(
        const AttachLoadBalancerTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachLoadBalancerTargetGroupsRequest * AttachLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const AttachLoadBalancerTargetGroupsResponse);
    return static_cast<const AttachLoadBalancerTargetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling AttachLoadBalancerTargetGroups \a response.
 */
void AttachLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsResponsePrivate
 * \brief The AttachLoadBalancerTargetGroupsResponsePrivate class provides private implementation for AttachLoadBalancerTargetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachLoadBalancerTargetGroupsResponsePrivate object with public implementation \a q.
 */
AttachLoadBalancerTargetGroupsResponsePrivate::AttachLoadBalancerTargetGroupsResponsePrivate(
    AttachLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling AttachLoadBalancerTargetGroups response element from \a xml.
 */
void AttachLoadBalancerTargetGroupsResponsePrivate::parseAttachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerTargetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
