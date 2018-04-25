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

#include "describenotificationconfigurationsresponse.h"
#include "describenotificationconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeNotificationConfigurationsResponse
 * \brief The DescribeNotificationConfigurationsResponse class provides an interace for AutoScaling DescribeNotificationConfigurations responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeNotificationConfigurations
 */

/*!
 * Constructs a DescribeNotificationConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotificationConfigurationsResponse::DescribeNotificationConfigurationsResponse(
        const DescribeNotificationConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeNotificationConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotificationConfigurationsRequest * DescribeNotificationConfigurationsResponse::request() const
{
    Q_D(const DescribeNotificationConfigurationsResponse);
    return static_cast<const DescribeNotificationConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeNotificationConfigurations \a response.
 */
void DescribeNotificationConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNotificationConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeNotificationConfigurationsResponsePrivate
 * \brief The DescribeNotificationConfigurationsResponsePrivate class provides private implementation for DescribeNotificationConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeNotificationConfigurationsResponsePrivate object with public implementation \a q.
 */
DescribeNotificationConfigurationsResponsePrivate::DescribeNotificationConfigurationsResponsePrivate(
    DescribeNotificationConfigurationsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeNotificationConfigurations response element from \a xml.
 */
void DescribeNotificationConfigurationsResponsePrivate::parseDescribeNotificationConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationConfigurationsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
