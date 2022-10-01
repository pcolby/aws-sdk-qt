// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateinstanceinautoscalinggroupresponse.h"
#include "terminateinstanceinautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupResponse
 * \brief The TerminateInstanceInAutoScalingGroupResponse class provides an interace for AutoScaling TerminateInstanceInAutoScalingGroup responses.
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
 * \sa AutoScalingClient::terminateInstanceInAutoScalingGroup
 */

/*!
 * Constructs a TerminateInstanceInAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateInstanceInAutoScalingGroupResponse::TerminateInstanceInAutoScalingGroupResponse(
        const TerminateInstanceInAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new TerminateInstanceInAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new TerminateInstanceInAutoScalingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateInstanceInAutoScalingGroupRequest * TerminateInstanceInAutoScalingGroupResponse::request() const
{
    Q_D(const TerminateInstanceInAutoScalingGroupResponse);
    return static_cast<const TerminateInstanceInAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling TerminateInstanceInAutoScalingGroup \a response.
 */
void TerminateInstanceInAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateInstanceInAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupResponsePrivate
 * \brief The TerminateInstanceInAutoScalingGroupResponsePrivate class provides private implementation for TerminateInstanceInAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a TerminateInstanceInAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
TerminateInstanceInAutoScalingGroupResponsePrivate::TerminateInstanceInAutoScalingGroupResponsePrivate(
    TerminateInstanceInAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling TerminateInstanceInAutoScalingGroup response element from \a xml.
 */
void TerminateInstanceInAutoScalingGroupResponsePrivate::parseTerminateInstanceInAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateInstanceInAutoScalingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
