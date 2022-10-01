// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachloadbalancertargetgroupsresponse.h"
#include "detachloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancerTargetGroupsResponse
 * \brief The DetachLoadBalancerTargetGroupsResponse class provides an interace for AutoScaling DetachLoadBalancerTargetGroups responses.
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
 * \sa AutoScalingClient::detachLoadBalancerTargetGroups
 */

/*!
 * Constructs a DetachLoadBalancerTargetGroupsResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DetachLoadBalancerTargetGroupsRequest * DetachLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const DetachLoadBalancerTargetGroupsResponse);
    return static_cast<const DetachLoadBalancerTargetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DetachLoadBalancerTargetGroups \a response.
 */
void DetachLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetachLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancerTargetGroupsResponsePrivate
 * \brief The DetachLoadBalancerTargetGroupsResponsePrivate class provides private implementation for DetachLoadBalancerTargetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachLoadBalancerTargetGroupsResponsePrivate object with public implementation \a q.
 */
DetachLoadBalancerTargetGroupsResponsePrivate::DetachLoadBalancerTargetGroupsResponsePrivate(
    DetachLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DetachLoadBalancerTargetGroups response element from \a xml.
 */
void DetachLoadBalancerTargetGroupsResponsePrivate::parseDetachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachLoadBalancerTargetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
