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

#include "updatedeviceinstanceresponse.h"
#include "updatedeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceResponse
 * \brief The UpdateDeviceInstanceResponse class provides an interace for DeviceFarm UpdateDeviceInstance responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDeviceInstance
 */

/*!
 * Constructs a UpdateDeviceInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceInstanceResponse::UpdateDeviceInstanceResponse(
        const UpdateDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceInstanceRequest * UpdateDeviceInstanceResponse::request() const
{
    Q_D(const UpdateDeviceInstanceResponse);
    return static_cast<const UpdateDeviceInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateDeviceInstance \a response.
 */
void UpdateDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateDeviceInstanceResponsePrivate
 * \brief The UpdateDeviceInstanceResponsePrivate class provides private implementation for UpdateDeviceInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDeviceInstanceResponsePrivate object with public implementation \a q.
 */
UpdateDeviceInstanceResponsePrivate::UpdateDeviceInstanceResponsePrivate(
    UpdateDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateDeviceInstance response element from \a xml.
 */
void UpdateDeviceInstanceResponsePrivate::parseUpdateDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceInstanceResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
