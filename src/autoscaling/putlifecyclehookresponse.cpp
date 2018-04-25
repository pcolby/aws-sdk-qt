/*
    Copyright 2013-2018 Paul Colby

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
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
    Q_D(PutLifecycleHookResponse);
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
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
