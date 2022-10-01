// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
    //Q_D(DescribeNotificationConfigurationsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
