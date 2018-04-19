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

#include "describelaunchconfigurationsresponse.h"
#include "describelaunchconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLaunchConfigurationsResponse
 * \brief The DescribeLaunchConfigurationsResponse class provides an interace for AutoScaling DescribeLaunchConfigurations responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeLaunchConfigurations
 */

/*!
 * Constructs a DescribeLaunchConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLaunchConfigurationsResponse::DescribeLaunchConfigurationsResponse(
        const DescribeLaunchConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLaunchConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLaunchConfigurationsRequest * DescribeLaunchConfigurationsResponse::request() const
{
    Q_D(const DescribeLaunchConfigurationsResponse);
    return static_cast<const DescribeLaunchConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLaunchConfigurations \a response.
 */
void DescribeLaunchConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLaunchConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLaunchConfigurationsResponsePrivate
 * \brief The DescribeLaunchConfigurationsResponsePrivate class provides private implementation for DescribeLaunchConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLaunchConfigurationsResponsePrivate object with public implementation \a q.
 */
DescribeLaunchConfigurationsResponsePrivate::DescribeLaunchConfigurationsResponsePrivate(
    DescribeLaunchConfigurationsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLaunchConfigurations response element from \a xml.
 */
void DescribeLaunchConfigurationsResponsePrivate::parseDescribeLaunchConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchConfigurationsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
