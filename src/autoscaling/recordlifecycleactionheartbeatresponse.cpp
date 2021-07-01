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

#include "recordlifecycleactionheartbeatresponse.h"
#include "recordlifecycleactionheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::RecordLifecycleActionHeartbeatResponse
 * \brief The RecordLifecycleActionHeartbeatResponse class provides an interace for AutoScaling RecordLifecycleActionHeartbeat responses.
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
 * \sa AutoScalingClient::recordLifecycleActionHeartbeat
 */

/*!
 * Constructs a RecordLifecycleActionHeartbeatResponse object for \a reply to \a request, with parent \a parent.
 */
RecordLifecycleActionHeartbeatResponse::RecordLifecycleActionHeartbeatResponse(
        const RecordLifecycleActionHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new RecordLifecycleActionHeartbeatResponsePrivate(this), parent)
{
    setRequest(new RecordLifecycleActionHeartbeatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecordLifecycleActionHeartbeatRequest * RecordLifecycleActionHeartbeatResponse::request() const
{
    Q_D(const RecordLifecycleActionHeartbeatResponse);
    return static_cast<const RecordLifecycleActionHeartbeatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling RecordLifecycleActionHeartbeat \a response.
 */
void RecordLifecycleActionHeartbeatResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecordLifecycleActionHeartbeatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::RecordLifecycleActionHeartbeatResponsePrivate
 * \brief The RecordLifecycleActionHeartbeatResponsePrivate class provides private implementation for RecordLifecycleActionHeartbeatResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a RecordLifecycleActionHeartbeatResponsePrivate object with public implementation \a q.
 */
RecordLifecycleActionHeartbeatResponsePrivate::RecordLifecycleActionHeartbeatResponsePrivate(
    RecordLifecycleActionHeartbeatResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling RecordLifecycleActionHeartbeat response element from \a xml.
 */
void RecordLifecycleActionHeartbeatResponsePrivate::parseRecordLifecycleActionHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecordLifecycleActionHeartbeatResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
