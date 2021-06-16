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

#include "deletedeviceprofileresponse.h"
#include "deletedeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileResponse
 * \brief The DeleteDeviceProfileResponse class provides an interace for IoTWireless DeleteDeviceProfile responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteDeviceProfile
 */

/*!
 * Constructs a DeleteDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceProfileResponse::DeleteDeviceProfileResponse(
        const DeleteDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceProfileRequest * DeleteDeviceProfileResponse::request() const
{
    Q_D(const DeleteDeviceProfileResponse);
    return static_cast<const DeleteDeviceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteDeviceProfile \a response.
 */
void DeleteDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileResponsePrivate
 * \brief The DeleteDeviceProfileResponsePrivate class provides private implementation for DeleteDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteDeviceProfileResponsePrivate object with public implementation \a q.
 */
DeleteDeviceProfileResponsePrivate::DeleteDeviceProfileResponsePrivate(
    DeleteDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteDeviceProfile response element from \a xml.
 */
void DeleteDeviceProfileResponsePrivate::parseDeleteDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
