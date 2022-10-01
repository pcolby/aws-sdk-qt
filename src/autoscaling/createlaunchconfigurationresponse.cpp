// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchconfigurationresponse.h"
#include "createlaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateLaunchConfigurationResponse
 * \brief The CreateLaunchConfigurationResponse class provides an interace for AutoScaling CreateLaunchConfiguration responses.
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
 * \sa AutoScalingClient::createLaunchConfiguration
 */

/*!
 * Constructs a CreateLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLaunchConfigurationResponse::CreateLaunchConfigurationResponse(
        const CreateLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLaunchConfigurationRequest * CreateLaunchConfigurationResponse::request() const
{
    Q_D(const CreateLaunchConfigurationResponse);
    return static_cast<const CreateLaunchConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CreateLaunchConfiguration \a response.
 */
void CreateLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CreateLaunchConfigurationResponsePrivate
 * \brief The CreateLaunchConfigurationResponsePrivate class provides private implementation for CreateLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
CreateLaunchConfigurationResponsePrivate::CreateLaunchConfigurationResponsePrivate(
    CreateLaunchConfigurationResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CreateLaunchConfiguration response element from \a xml.
 */
void CreateLaunchConfigurationResponsePrivate::parseCreateLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
