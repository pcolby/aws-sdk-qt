// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalingnotificationtypesresponse.h"
#include "describeautoscalingnotificationtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingNotificationTypesResponse
 * \brief The DescribeAutoScalingNotificationTypesResponse class provides an interace for AutoScaling DescribeAutoScalingNotificationTypes responses.
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
 * \sa AutoScalingClient::describeAutoScalingNotificationTypes
 */

/*!
 * Constructs a DescribeAutoScalingNotificationTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoScalingNotificationTypesResponse::DescribeAutoScalingNotificationTypesResponse(
        const DescribeAutoScalingNotificationTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingNotificationTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingNotificationTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoScalingNotificationTypesRequest * DescribeAutoScalingNotificationTypesResponse::request() const
{
    Q_D(const DescribeAutoScalingNotificationTypesResponse);
    return static_cast<const DescribeAutoScalingNotificationTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAutoScalingNotificationTypes \a response.
 */
void DescribeAutoScalingNotificationTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoScalingNotificationTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingNotificationTypesResponsePrivate
 * \brief The DescribeAutoScalingNotificationTypesResponsePrivate class provides private implementation for DescribeAutoScalingNotificationTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingNotificationTypesResponsePrivate object with public implementation \a q.
 */
DescribeAutoScalingNotificationTypesResponsePrivate::DescribeAutoScalingNotificationTypesResponsePrivate(
    DescribeAutoScalingNotificationTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAutoScalingNotificationTypes response element from \a xml.
 */
void DescribeAutoScalingNotificationTypesResponsePrivate::parseDescribeAutoScalingNotificationTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingNotificationTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
