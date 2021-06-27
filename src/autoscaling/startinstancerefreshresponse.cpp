/*
    Copyright 2013-2021 Paul Colby

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

#include "startinstancerefreshresponse.h"
#include "startinstancerefreshresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::StartInstanceRefreshResponse
 * \brief The StartInstanceRefreshResponse class provides an interace for AutoScaling StartInstanceRefresh responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::startInstanceRefresh
 */

/*!
 * Constructs a StartInstanceRefreshResponse object for \a reply to \a request, with parent \a parent.
 */
StartInstanceRefreshResponse::StartInstanceRefreshResponse(
        const StartInstanceRefreshRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new StartInstanceRefreshResponsePrivate(this), parent)
{
    setRequest(new StartInstanceRefreshRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInstanceRefreshRequest * StartInstanceRefreshResponse::request() const
{
    return static_cast<const StartInstanceRefreshRequest *>(AutoScalingResponse::request());
}

/*!
 * \reimp
 * Parses a successful AutoScaling StartInstanceRefresh \a response.
 */
void StartInstanceRefreshResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartInstanceRefreshResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::StartInstanceRefreshResponsePrivate
 * \brief The StartInstanceRefreshResponsePrivate class provides private implementation for StartInstanceRefreshResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a StartInstanceRefreshResponsePrivate object with public implementation \a q.
 */
StartInstanceRefreshResponsePrivate::StartInstanceRefreshResponsePrivate(
    StartInstanceRefreshResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling StartInstanceRefresh response element from \a xml.
 */
void StartInstanceRefreshResponsePrivate::parseStartInstanceRefreshResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInstanceRefreshResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
