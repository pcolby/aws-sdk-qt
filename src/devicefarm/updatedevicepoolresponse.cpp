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

#include "updatedevicepoolresponse.h"
#include "updatedevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolResponse
 * \brief The UpdateDevicePoolResponse class provides an interace for DeviceFarm UpdateDevicePool responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateDevicePool
 */

/*!
 * Constructs a UpdateDevicePoolResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevicePoolResponse::UpdateDevicePoolResponse(
        const UpdateDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateDevicePoolResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicePoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevicePoolRequest * UpdateDevicePoolResponse::request() const
{
    Q_D(const UpdateDevicePoolResponse);
    return static_cast<const UpdateDevicePoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateDevicePool \a response.
 */
void UpdateDevicePoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateDevicePoolResponsePrivate
 * \brief The UpdateDevicePoolResponsePrivate class provides private implementation for UpdateDevicePoolResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateDevicePoolResponsePrivate object with public implementation \a q.
 */
UpdateDevicePoolResponsePrivate::UpdateDevicePoolResponsePrivate(
    UpdateDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateDevicePool response element from \a xml.
 */
void UpdateDevicePoolResponsePrivate::parseUpdateDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicePoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
