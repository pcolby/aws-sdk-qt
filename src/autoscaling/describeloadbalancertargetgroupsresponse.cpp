// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloadbalancertargetgroupsresponse.h"
#include "describeloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsResponse
 * \brief The DescribeLoadBalancerTargetGroupsResponse class provides an interace for AutoScaling DescribeLoadBalancerTargetGroups responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::describeLoadBalancerTargetGroups
 */

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoadBalancerTargetGroupsResponse::DescribeLoadBalancerTargetGroupsResponse(
        const DescribeLoadBalancerTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoadBalancerTargetGroupsRequest * DescribeLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const DescribeLoadBalancerTargetGroupsResponse);
    return static_cast<const DescribeLoadBalancerTargetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLoadBalancerTargetGroups \a response.
 */
void DescribeLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsResponsePrivate
 * \brief The DescribeLoadBalancerTargetGroupsResponsePrivate class provides private implementation for DescribeLoadBalancerTargetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeLoadBalancerTargetGroupsResponsePrivate::DescribeLoadBalancerTargetGroupsResponsePrivate(
    DescribeLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLoadBalancerTargetGroups response element from \a xml.
 */
void DescribeLoadBalancerTargetGroupsResponsePrivate::parseDescribeLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerTargetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
