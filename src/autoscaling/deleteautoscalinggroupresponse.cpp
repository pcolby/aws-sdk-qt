// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteautoscalinggroupresponse.h"
#include "deleteautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteAutoScalingGroupResponse
 * \brief The DeleteAutoScalingGroupResponse class provides an interace for AutoScaling DeleteAutoScalingGroup responses.
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
 * \sa AutoScalingClient::deleteAutoScalingGroup
 */

/*!
 * Constructs a DeleteAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAutoScalingGroupResponse::DeleteAutoScalingGroupResponse(
        const DeleteAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteAutoScalingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAutoScalingGroupRequest * DeleteAutoScalingGroupResponse::request() const
{
    Q_D(const DeleteAutoScalingGroupResponse);
    return static_cast<const DeleteAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteAutoScalingGroup \a response.
 */
void DeleteAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteAutoScalingGroupResponsePrivate
 * \brief The DeleteAutoScalingGroupResponsePrivate class provides private implementation for DeleteAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
DeleteAutoScalingGroupResponsePrivate::DeleteAutoScalingGroupResponsePrivate(
    DeleteAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteAutoScalingGroup response element from \a xml.
 */
void DeleteAutoScalingGroupResponsePrivate::parseDeleteAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAutoScalingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
