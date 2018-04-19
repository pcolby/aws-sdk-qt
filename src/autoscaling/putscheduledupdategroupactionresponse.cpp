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

#include "putscheduledupdategroupactionresponse.h"
#include "putscheduledupdategroupactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionResponse
 * \brief The PutScheduledUpdateGroupActionResponse class provides an interace for AutoScaling PutScheduledUpdateGroupAction responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::putScheduledUpdateGroupAction
 */

/*!
 * Constructs a PutScheduledUpdateGroupActionResponse object for \a reply to \a request, with parent \a parent.
 */
PutScheduledUpdateGroupActionResponse::PutScheduledUpdateGroupActionResponse(
        const PutScheduledUpdateGroupActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutScheduledUpdateGroupActionResponsePrivate(this), parent)
{
    setRequest(new PutScheduledUpdateGroupActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutScheduledUpdateGroupActionRequest * PutScheduledUpdateGroupActionResponse::request() const
{
    Q_D(const PutScheduledUpdateGroupActionResponse);
    return static_cast<const PutScheduledUpdateGroupActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutScheduledUpdateGroupAction \a response.
 */
void PutScheduledUpdateGroupActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutScheduledUpdateGroupActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionResponsePrivate
 * \brief The PutScheduledUpdateGroupActionResponsePrivate class provides private implementation for PutScheduledUpdateGroupActionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutScheduledUpdateGroupActionResponsePrivate object with public implementation \a q.
 */
PutScheduledUpdateGroupActionResponsePrivate::PutScheduledUpdateGroupActionResponsePrivate(
    PutScheduledUpdateGroupActionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutScheduledUpdateGroupAction response element from \a xml.
 */
void PutScheduledUpdateGroupActionResponsePrivate::parsePutScheduledUpdateGroupActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutScheduledUpdateGroupActionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
