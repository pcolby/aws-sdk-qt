/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "suspendprocessesresponse.h"
#include "suspendprocessesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SuspendProcessesResponse
 * \brief The SuspendProcessesResponse class provides an interace for AutoScaling SuspendProcesses responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::suspendProcesses
 */

/*!
 * Constructs a SuspendProcessesResponse object for \a reply to \a request, with parent \a parent.
 */
SuspendProcessesResponse::SuspendProcessesResponse(
        const SuspendProcessesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new SuspendProcessesResponsePrivate(this), parent)
{
    setRequest(new SuspendProcessesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SuspendProcessesRequest * SuspendProcessesResponse::request() const
{
    Q_D(const SuspendProcessesResponse);
    return static_cast<const SuspendProcessesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling SuspendProcesses \a response.
 */
void SuspendProcessesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SuspendProcessesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::SuspendProcessesResponsePrivate
 * \brief The SuspendProcessesResponsePrivate class provides private implementation for SuspendProcessesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SuspendProcessesResponsePrivate object with public implementation \a q.
 */
SuspendProcessesResponsePrivate::SuspendProcessesResponsePrivate(
    SuspendProcessesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling SuspendProcesses response element from \a xml.
 */
void SuspendProcessesResponsePrivate::parseSuspendProcessesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuspendProcessesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
