// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completelifecycleactionresponse.h"
#include "completelifecycleactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CompleteLifecycleActionResponse
 * \brief The CompleteLifecycleActionResponse class provides an interace for AutoScaling CompleteLifecycleAction responses.
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
 * \sa AutoScalingClient::completeLifecycleAction
 */

/*!
 * Constructs a CompleteLifecycleActionResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteLifecycleActionResponse::CompleteLifecycleActionResponse(
        const CompleteLifecycleActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CompleteLifecycleActionResponsePrivate(this), parent)
{
    setRequest(new CompleteLifecycleActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteLifecycleActionRequest * CompleteLifecycleActionResponse::request() const
{
    Q_D(const CompleteLifecycleActionResponse);
    return static_cast<const CompleteLifecycleActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling CompleteLifecycleAction \a response.
 */
void CompleteLifecycleActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteLifecycleActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::CompleteLifecycleActionResponsePrivate
 * \brief The CompleteLifecycleActionResponsePrivate class provides private implementation for CompleteLifecycleActionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CompleteLifecycleActionResponsePrivate object with public implementation \a q.
 */
CompleteLifecycleActionResponsePrivate::CompleteLifecycleActionResponsePrivate(
    CompleteLifecycleActionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling CompleteLifecycleAction response element from \a xml.
 */
void CompleteLifecycleActionResponsePrivate::parseCompleteLifecycleActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLifecycleActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
