// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalinginstancesresponse.h"
#include "describeautoscalinginstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesResponse
 * \brief The DescribeAutoScalingInstancesResponse class provides an interace for AutoScaling DescribeAutoScalingInstances responses.
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
 * \sa AutoScalingClient::describeAutoScalingInstances
 */

/*!
 * Constructs a DescribeAutoScalingInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoScalingInstancesResponse::DescribeAutoScalingInstancesResponse(
        const DescribeAutoScalingInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoScalingInstancesRequest * DescribeAutoScalingInstancesResponse::request() const
{
    Q_D(const DescribeAutoScalingInstancesResponse);
    return static_cast<const DescribeAutoScalingInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAutoScalingInstances \a response.
 */
void DescribeAutoScalingInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoScalingInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesResponsePrivate
 * \brief The DescribeAutoScalingInstancesResponsePrivate class provides private implementation for DescribeAutoScalingInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingInstancesResponsePrivate object with public implementation \a q.
 */
DescribeAutoScalingInstancesResponsePrivate::DescribeAutoScalingInstancesResponsePrivate(
    DescribeAutoScalingInstancesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAutoScalingInstances response element from \a xml.
 */
void DescribeAutoScalingInstancesResponsePrivate::parseDescribeAutoScalingInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
