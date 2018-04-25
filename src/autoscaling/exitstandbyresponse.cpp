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

#include "exitstandbyresponse.h"
#include "exitstandbyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExitStandbyResponse
 * \brief The ExitStandbyResponse class provides an interace for AutoScaling ExitStandby responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::exitStandby
 */

/*!
 * Constructs a ExitStandbyResponse object for \a reply to \a request, with parent \a parent.
 */
ExitStandbyResponse::ExitStandbyResponse(
        const ExitStandbyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new ExitStandbyResponsePrivate(this), parent)
{
    setRequest(new ExitStandbyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExitStandbyRequest * ExitStandbyResponse::request() const
{
    Q_D(const ExitStandbyResponse);
    return static_cast<const ExitStandbyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling ExitStandby \a response.
 */
void ExitStandbyResponse::parseSuccess(QIODevice &response)
{
    Q_D(ExitStandbyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::ExitStandbyResponsePrivate
 * \brief The ExitStandbyResponsePrivate class provides private implementation for ExitStandbyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExitStandbyResponsePrivate object with public implementation \a q.
 */
ExitStandbyResponsePrivate::ExitStandbyResponsePrivate(
    ExitStandbyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling ExitStandby response element from \a xml.
 */
void ExitStandbyResponsePrivate::parseExitStandbyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExitStandbyResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
