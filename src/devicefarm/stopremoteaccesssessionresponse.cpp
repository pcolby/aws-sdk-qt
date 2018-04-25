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

#include "stopremoteaccesssessionresponse.h"
#include "stopremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionResponse
 * \brief The StopRemoteAccessSessionResponse class provides an interace for DeviceFarm StopRemoteAccessSession responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopRemoteAccessSession
 */

/*!
 * Constructs a StopRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
StopRemoteAccessSessionResponse::StopRemoteAccessSessionResponse(
        const StopRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new StopRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopRemoteAccessSessionRequest * StopRemoteAccessSessionResponse::request() const
{
    Q_D(const StopRemoteAccessSessionResponse);
    return static_cast<const StopRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm StopRemoteAccessSession \a response.
 */
void StopRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionResponsePrivate
 * \brief The StopRemoteAccessSessionResponsePrivate class provides private implementation for StopRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
StopRemoteAccessSessionResponsePrivate::StopRemoteAccessSessionResponsePrivate(
    StopRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm StopRemoteAccessSession response element from \a xml.
 */
void StopRemoteAccessSessionResponsePrivate::parseStopRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
