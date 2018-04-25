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

#include "enterstandbyresponse.h"
#include "enterstandbyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnterStandbyResponse
 * \brief The EnterStandbyResponse class provides an interace for AutoScaling EnterStandby responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::enterStandby
 */

/*!
 * Constructs a EnterStandbyResponse object for \a reply to \a request, with parent \a parent.
 */
EnterStandbyResponse::EnterStandbyResponse(
        const EnterStandbyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new EnterStandbyResponsePrivate(this), parent)
{
    setRequest(new EnterStandbyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnterStandbyRequest * EnterStandbyResponse::request() const
{
    Q_D(const EnterStandbyResponse);
    return static_cast<const EnterStandbyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling EnterStandby \a response.
 */
void EnterStandbyResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnterStandbyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::EnterStandbyResponsePrivate
 * \brief The EnterStandbyResponsePrivate class provides private implementation for EnterStandbyResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnterStandbyResponsePrivate object with public implementation \a q.
 */
EnterStandbyResponsePrivate::EnterStandbyResponsePrivate(
    EnterStandbyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling EnterStandby response element from \a xml.
 */
void EnterStandbyResponsePrivate::parseEnterStandbyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnterStandbyResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
