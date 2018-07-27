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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
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
