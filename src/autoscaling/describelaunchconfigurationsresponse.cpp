// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
    //Q_D(DescribeLaunchConfigurationsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
