// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
