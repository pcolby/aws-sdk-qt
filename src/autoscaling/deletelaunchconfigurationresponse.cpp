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

#include "deletelaunchconfigurationresponse.h"
#include "deletelaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationResponse
 * \brief The DeleteLaunchConfigurationResponse class provides an interace for AutoScaling DeleteLaunchConfiguration responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto Scaling
 *  User
 *
 * \sa AutoScalingClient::deleteLaunchConfiguration
 */

/*!
 * Constructs a DeleteLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchConfigurationResponse::DeleteLaunchConfigurationResponse(
        const DeleteLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchConfigurationRequest * DeleteLaunchConfigurationResponse::request() const
{
    Q_D(const DeleteLaunchConfigurationResponse);
    return static_cast<const DeleteLaunchConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteLaunchConfiguration \a response.
 */
void DeleteLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationResponsePrivate
 * \brief The DeleteLaunchConfigurationResponsePrivate class provides private implementation for DeleteLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteLaunchConfigurationResponsePrivate::DeleteLaunchConfigurationResponsePrivate(
    DeleteLaunchConfigurationResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteLaunchConfiguration response element from \a xml.
 */
void DeleteLaunchConfigurationResponsePrivate::parseDeleteLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
