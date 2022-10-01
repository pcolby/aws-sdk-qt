// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloadbalancersresponse.h"
#include "describeloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancersResponse
 * \brief The DescribeLoadBalancersResponse class provides an interace for AutoScaling DescribeLoadBalancers responses.
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
 * \sa AutoScalingClient::describeLoadBalancers
 */

/*!
 * Constructs a DescribeLoadBalancersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoadBalancersResponse::DescribeLoadBalancersResponse(
        const DescribeLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoadBalancersRequest * DescribeLoadBalancersResponse::request() const
{
    Q_D(const DescribeLoadBalancersResponse);
    return static_cast<const DescribeLoadBalancersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLoadBalancers \a response.
 */
void DescribeLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoadBalancersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancersResponsePrivate
 * \brief The DescribeLoadBalancersResponsePrivate class provides private implementation for DescribeLoadBalancersResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLoadBalancersResponsePrivate object with public implementation \a q.
 */
DescribeLoadBalancersResponsePrivate::DescribeLoadBalancersResponsePrivate(
    DescribeLoadBalancersResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLoadBalancers response element from \a xml.
 */
void DescribeLoadBalancersResponsePrivate::parseDescribeLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
