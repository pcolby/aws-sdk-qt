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

#include "describescalingplansresponse.h"
#include "describescalingplansresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlansResponse
 * \brief The DescribeScalingPlansResponse class provides an interace for AutoScalingPlans DescribeScalingPlans responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling and predictive scaling for your resources using scaling plans. Use this service in conjunction with the Amazon
 *  EC2 Auto Scaling, Application Auto Scaling, Amazon CloudWatch, and AWS CloudFormation services.
 * 
 *  </p
 * 
 *  Currently, predictive scaling is only available for Amazon EC2 Auto Scaling
 * 
 *  groups>
 * 
 *  For more information about AWS Auto Scaling, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *
 * \sa AutoScalingPlansClient::describeScalingPlans
 */

/*!
 * Constructs a DescribeScalingPlansResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingPlansResponse::DescribeScalingPlansResponse(
        const DescribeScalingPlansRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new DescribeScalingPlansResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingPlansRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingPlansRequest * DescribeScalingPlansResponse::request() const
{
    Q_D(const DescribeScalingPlansResponse);
    return static_cast<const DescribeScalingPlansRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans DescribeScalingPlans \a response.
 */
void DescribeScalingPlansResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingPlansResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::DescribeScalingPlansResponsePrivate
 * \brief The DescribeScalingPlansResponsePrivate class provides private implementation for DescribeScalingPlansResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DescribeScalingPlansResponsePrivate object with public implementation \a q.
 */
DescribeScalingPlansResponsePrivate::DescribeScalingPlansResponsePrivate(
    DescribeScalingPlansResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans DescribeScalingPlans response element from \a xml.
 */
void DescribeScalingPlansResponsePrivate::parseDescribeScalingPlansResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingPlansResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
