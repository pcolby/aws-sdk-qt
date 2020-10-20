/*
    Copyright 2013-2020 Paul Colby

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

#include "stopjobresponse.h"
#include "stopjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopJobResponse
 * \brief The StopJobResponse class provides an interace for DeviceFarm StopJob responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopJob
 */

/*!
 * Constructs a StopJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopJobResponse::StopJobResponse(
        const StopJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopJobResponsePrivate(this), parent)
{
    setRequest(new StopJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopJobRequest * StopJobResponse::request() const
{
    Q_D(const StopJobResponse);
    return static_cast<const StopJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm StopJob \a response.
 */
void StopJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::StopJobResponsePrivate
 * \brief The StopJobResponsePrivate class provides private implementation for StopJobResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopJobResponsePrivate object with public implementation \a q.
 */
StopJobResponsePrivate::StopJobResponsePrivate(
    StopJobResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm StopJob response element from \a xml.
 */
void StopJobResponsePrivate::parseStopJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
