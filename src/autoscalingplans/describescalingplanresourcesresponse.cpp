/*
    Copyright 2013-2021 Paul Colby

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

#include "describescalingplanresourcesresponse.h"
#include "describescalingplanresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlanResourcesResponse
 * \brief The DescribeScalingPlanResourcesResponse class provides an interace for AutoScalingPlans DescribeScalingPlanResources responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to create scaling plans for your applications to automatically scale your scalable AWS resources.
 * 
 *  </p
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  You can use the AWS Auto Scaling service API to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Create and manage scaling
 * 
 *  plan> </li> <li>
 * 
 *  Define target tracking scaling policies to dynamically scale your resources based on
 * 
 *  utilizatio> </li> <li>
 * 
 *  Scale Amazon EC2 Auto Scaling groups using predictive scaling and dynamic scaling to scale your Amazon EC2 capacity
 * 
 *  faste> </li> <li>
 * 
 *  Set minimum and maximum capacity
 * 
 *  limit> </li> <li>
 * 
 *  Retrieve information on existing scaling
 * 
 *  plan> </li> <li>
 * 
 *  Access current forecast data and historical forecast data for up to 56 days
 * 
 *  previou> </li> </ul>
 * 
 *  To learn more about AWS Auto Scaling, including information about granting IAM users required permissions for AWS Auto
 *  Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *  Guide</a>.
 *
 * \sa AutoScalingPlansClient::describeScalingPlanResources
 */

/*!
 * Constructs a DescribeScalingPlanResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingPlanResourcesResponse::DescribeScalingPlanResourcesResponse(
        const DescribeScalingPlanResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new DescribeScalingPlanResourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingPlanResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingPlanResourcesRequest * DescribeScalingPlanResourcesResponse::request() const
{
    Q_D(const DescribeScalingPlanResourcesResponse);
    return static_cast<const DescribeScalingPlanResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans DescribeScalingPlanResources \a response.
 */
void DescribeScalingPlanResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingPlanResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlanResourcesResponsePrivate
 * \brief The DescribeScalingPlanResourcesResponsePrivate class provides private implementation for DescribeScalingPlanResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DescribeScalingPlanResourcesResponsePrivate object with public implementation \a q.
 */
DescribeScalingPlanResourcesResponsePrivate::DescribeScalingPlanResourcesResponsePrivate(
    DescribeScalingPlanResourcesResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans DescribeScalingPlanResources response element from \a xml.
 */
void DescribeScalingPlanResourcesResponsePrivate::parseDescribeScalingPlanResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingPlanResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
