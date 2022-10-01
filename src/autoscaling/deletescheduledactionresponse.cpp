// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescheduledactionresponse.h"
#include "deletescheduledactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteScheduledActionResponse
 * \brief The DeleteScheduledActionResponse class provides an interace for AutoScaling DeleteScheduledAction responses.
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
 * \sa AutoScalingClient::deleteScheduledAction
 */

/*!
 * Constructs a DeleteScheduledActionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScheduledActionResponse::DeleteScheduledActionResponse(
        const DeleteScheduledActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteScheduledActionResponsePrivate(this), parent)
{
    setRequest(new DeleteScheduledActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteScheduledActionRequest * DeleteScheduledActionResponse::request() const
{
    Q_D(const DeleteScheduledActionResponse);
    return static_cast<const DeleteScheduledActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteScheduledAction \a response.
 */
void DeleteScheduledActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScheduledActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteScheduledActionResponsePrivate
 * \brief The DeleteScheduledActionResponsePrivate class provides private implementation for DeleteScheduledActionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteScheduledActionResponsePrivate object with public implementation \a q.
 */
DeleteScheduledActionResponsePrivate::DeleteScheduledActionResponsePrivate(
    DeleteScheduledActionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteScheduledAction response element from \a xml.
 */
void DeleteScheduledActionResponsePrivate::parseDeleteScheduledActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduledActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
