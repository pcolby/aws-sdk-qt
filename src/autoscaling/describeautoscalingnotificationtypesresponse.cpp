/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeAutoScalingNotificationTypes
 */

/*!
 * Constructs a DescribeAutoScalingNotificationTypesResponse object for \a reply, with parent \a parent.
 */
DescribeAutoScalingNotificationTypesResponse::DescribeAutoScalingNotificationTypesResponse(
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingNotificationTypesResponsePrivate(this), parent)
{
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
    Q_D(DescribeAutoScalingNotificationTypesResponse);
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
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
