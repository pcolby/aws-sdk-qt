// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingactivitiesresponse.h"
#include "describescalingactivitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScalingActivitiesResponse
 * \brief The DescribeScalingActivitiesResponse class provides an interace for AutoScaling DescribeScalingActivities responses.
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
 * \sa AutoScalingClient::describeScalingActivities
 */

/*!
 * Constructs a DescribeScalingActivitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingActivitiesResponse::DescribeScalingActivitiesResponse(
        const DescribeScalingActivitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScalingActivitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingActivitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingActivitiesRequest * DescribeScalingActivitiesResponse::request() const
{
    Q_D(const DescribeScalingActivitiesResponse);
    return static_cast<const DescribeScalingActivitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeScalingActivities \a response.
 */
void DescribeScalingActivitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingActivitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeScalingActivitiesResponsePrivate
 * \brief The DescribeScalingActivitiesResponsePrivate class provides private implementation for DescribeScalingActivitiesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScalingActivitiesResponsePrivate object with public implementation \a q.
 */
DescribeScalingActivitiesResponsePrivate::DescribeScalingActivitiesResponsePrivate(
    DescribeScalingActivitiesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeScalingActivities response element from \a xml.
 */
void DescribeScalingActivitiesResponsePrivate::parseDescribeScalingActivitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingActivitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
