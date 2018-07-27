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

#include "stoprunresponse.h"
#include "stoprunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRunResponse
 * \brief The StopRunResponse class provides an interace for DeviceFarm StopRun responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopRun
 */

/*!
 * Constructs a StopRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopRunResponse::StopRunResponse(
        const StopRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopRunResponsePrivate(this), parent)
{
    setRequest(new StopRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopRunRequest * StopRunResponse::request() const
{
    Q_D(const StopRunResponse);
    return static_cast<const StopRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm StopRun \a response.
 */
void StopRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::StopRunResponsePrivate
 * \brief The StopRunResponsePrivate class provides private implementation for StopRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRunResponsePrivate object with public implementation \a q.
 */
StopRunResponsePrivate::StopRunResponsePrivate(
    StopRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm StopRun response element from \a xml.
 */
void StopRunResponsePrivate::parseStopRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
