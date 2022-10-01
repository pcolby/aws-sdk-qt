// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecyclehookresponse.h"
#include "putlifecyclehookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutLifecycleHookResponse
 * \brief The PutLifecycleHookResponse class provides an interace for AutoScaling PutLifecycleHook responses.
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
 * \sa AutoScalingClient::putLifecycleHook
 */

/*!
 * Constructs a PutLifecycleHookResponse object for \a reply to \a request, with parent \a parent.
 */
PutLifecycleHookResponse::PutLifecycleHookResponse(
        const PutLifecycleHookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutLifecycleHookResponsePrivate(this), parent)
{
    setRequest(new PutLifecycleHookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLifecycleHookRequest * PutLifecycleHookResponse::request() const
{
    Q_D(const PutLifecycleHookResponse);
    return static_cast<const PutLifecycleHookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutLifecycleHook \a response.
 */
void PutLifecycleHookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutLifecycleHookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutLifecycleHookResponsePrivate
 * \brief The PutLifecycleHookResponsePrivate class provides private implementation for PutLifecycleHookResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutLifecycleHookResponsePrivate object with public implementation \a q.
 */
PutLifecycleHookResponsePrivate::PutLifecycleHookResponsePrivate(
    PutLifecycleHookResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutLifecycleHook response element from \a xml.
 */
void PutLifecycleHookResponsePrivate::parsePutLifecycleHookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecycleHookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
