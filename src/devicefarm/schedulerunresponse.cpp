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

#include "schedulerunresponse.h"
#include "schedulerunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ScheduleRunResponse
 * \brief The ScheduleRunResponse class provides an interace for DeviceFarm ScheduleRun responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::scheduleRun
 */

/*!
 * Constructs a ScheduleRunResponse object for \a reply to \a request, with parent \a parent.
 */
ScheduleRunResponse::ScheduleRunResponse(
        const ScheduleRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ScheduleRunResponsePrivate(this), parent)
{
    setRequest(new ScheduleRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ScheduleRunRequest * ScheduleRunResponse::request() const
{
    Q_D(const ScheduleRunResponse);
    return static_cast<const ScheduleRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ScheduleRun \a response.
 */
void ScheduleRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ScheduleRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ScheduleRunResponsePrivate
 * \brief The ScheduleRunResponsePrivate class provides private implementation for ScheduleRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ScheduleRunResponsePrivate object with public implementation \a q.
 */
ScheduleRunResponsePrivate::ScheduleRunResponsePrivate(
    ScheduleRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ScheduleRun response element from \a xml.
 */
void ScheduleRunResponsePrivate::parseScheduleRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScheduleRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
