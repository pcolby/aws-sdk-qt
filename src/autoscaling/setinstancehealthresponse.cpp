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

#include "setinstancehealthresponse.h"
#include "setinstancehealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetInstanceHealthResponse
 * \brief The SetInstanceHealthResponse class provides an interace for AutoScaling SetInstanceHealth responses.
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
 * \sa AutoScalingClient::setInstanceHealth
 */

/*!
 * Constructs a SetInstanceHealthResponse object for \a reply to \a request, with parent \a parent.
 */
SetInstanceHealthResponse::SetInstanceHealthResponse(
        const SetInstanceHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SetInstanceHealthResponsePrivate(this), parent)
{
    setRequest(new SetInstanceHealthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetInstanceHealthRequest * SetInstanceHealthResponse::request() const
{
    Q_D(const SetInstanceHealthResponse);
    return static_cast<const SetInstanceHealthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling SetInstanceHealth \a response.
 */
void SetInstanceHealthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetInstanceHealthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::SetInstanceHealthResponsePrivate
 * \brief The SetInstanceHealthResponsePrivate class provides private implementation for SetInstanceHealthResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetInstanceHealthResponsePrivate object with public implementation \a q.
 */
SetInstanceHealthResponsePrivate::SetInstanceHealthResponsePrivate(
    SetInstanceHealthResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling SetInstanceHealth response element from \a xml.
 */
void SetInstanceHealthResponsePrivate::parseSetInstanceHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetInstanceHealthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
