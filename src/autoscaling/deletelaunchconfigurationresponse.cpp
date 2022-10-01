// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
