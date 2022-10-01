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

#include "startinputdevicemaintenancewindowresponse.h"
#include "startinputdevicemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowResponse
 * \brief The StartInputDeviceMaintenanceWindowResponse class provides an interace for MediaLive StartInputDeviceMaintenanceWindow responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startInputDeviceMaintenanceWindow
 */

/*!
 * Constructs a StartInputDeviceMaintenanceWindowResponse object for \a reply to \a request, with parent \a parent.
 */
StartInputDeviceMaintenanceWindowResponse::StartInputDeviceMaintenanceWindowResponse(
        const StartInputDeviceMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartInputDeviceMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new StartInputDeviceMaintenanceWindowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartInputDeviceMaintenanceWindowRequest * StartInputDeviceMaintenanceWindowResponse::request() const
{
    Q_D(const StartInputDeviceMaintenanceWindowResponse);
    return static_cast<const StartInputDeviceMaintenanceWindowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive StartInputDeviceMaintenanceWindow \a response.
 */
void StartInputDeviceMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartInputDeviceMaintenanceWindowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowResponsePrivate
 * \brief The StartInputDeviceMaintenanceWindowResponsePrivate class provides private implementation for StartInputDeviceMaintenanceWindowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartInputDeviceMaintenanceWindowResponsePrivate object with public implementation \a q.
 */
StartInputDeviceMaintenanceWindowResponsePrivate::StartInputDeviceMaintenanceWindowResponsePrivate(
    StartInputDeviceMaintenanceWindowResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive StartInputDeviceMaintenanceWindow response element from \a xml.
 */
void StartInputDeviceMaintenanceWindowResponsePrivate::parseStartInputDeviceMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartInputDeviceMaintenanceWindowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
