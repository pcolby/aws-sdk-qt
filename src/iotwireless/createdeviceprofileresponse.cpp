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

#include "createdeviceprofileresponse.h"
#include "createdeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileResponse
 * \brief The CreateDeviceProfileResponse class provides an interace for IoTWireless CreateDeviceProfile responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createDeviceProfile
 */

/*!
 * Constructs a CreateDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceProfileResponse::CreateDeviceProfileResponse(
        const CreateDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceProfileRequest * CreateDeviceProfileResponse::request() const
{
    return static_cast<const CreateDeviceProfileRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateDeviceProfile \a response.
 */
void CreateDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileResponsePrivate
 * \brief The CreateDeviceProfileResponsePrivate class provides private implementation for CreateDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDeviceProfileResponsePrivate object with public implementation \a q.
 */
CreateDeviceProfileResponsePrivate::CreateDeviceProfileResponsePrivate(
    CreateDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateDeviceProfile response element from \a xml.
 */
void CreateDeviceProfileResponsePrivate::parseCreateDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
