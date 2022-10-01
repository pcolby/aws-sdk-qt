// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putnotificationconfigurationresponse.h"
#include "putnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutNotificationConfigurationResponse
 * \brief The PutNotificationConfigurationResponse class provides an interace for AutoScaling PutNotificationConfiguration responses.
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
 * \sa AutoScalingClient::putNotificationConfiguration
 */

/*!
 * Constructs a PutNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutNotificationConfigurationResponse::PutNotificationConfigurationResponse(
        const PutNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutNotificationConfigurationRequest * PutNotificationConfigurationResponse::request() const
{
    Q_D(const PutNotificationConfigurationResponse);
    return static_cast<const PutNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutNotificationConfiguration \a response.
 */
void PutNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutNotificationConfigurationResponsePrivate
 * \brief The PutNotificationConfigurationResponsePrivate class provides private implementation for PutNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
PutNotificationConfigurationResponsePrivate::PutNotificationConfigurationResponsePrivate(
    PutNotificationConfigurationResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutNotificationConfiguration response element from \a xml.
 */
void PutNotificationConfigurationResponsePrivate::parsePutNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
