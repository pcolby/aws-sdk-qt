// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalinggroupsresponse.h"
#include "describeautoscalinggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingGroupsResponse
 * \brief The DescribeAutoScalingGroupsResponse class provides an interace for AutoScaling DescribeAutoScalingGroups responses.
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
 * \sa AutoScalingClient::describeAutoScalingGroups
 */

/*!
 * Constructs a DescribeAutoScalingGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoScalingGroupsResponse::DescribeAutoScalingGroupsResponse(
        const DescribeAutoScalingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoScalingGroupsRequest * DescribeAutoScalingGroupsResponse::request() const
{
    Q_D(const DescribeAutoScalingGroupsResponse);
    return static_cast<const DescribeAutoScalingGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAutoScalingGroups \a response.
 */
void DescribeAutoScalingGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoScalingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingGroupsResponsePrivate
 * \brief The DescribeAutoScalingGroupsResponsePrivate class provides private implementation for DescribeAutoScalingGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingGroupsResponsePrivate object with public implementation \a q.
 */
DescribeAutoScalingGroupsResponsePrivate::DescribeAutoScalingGroupsResponsePrivate(
    DescribeAutoScalingGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAutoScalingGroups response element from \a xml.
 */
void DescribeAutoScalingGroupsResponsePrivate::parseDescribeAutoScalingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
