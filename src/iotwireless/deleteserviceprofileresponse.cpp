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

#include "deleteserviceprofileresponse.h"
#include "deleteserviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileResponse
 * \brief The DeleteServiceProfileResponse class provides an interace for IoTWireless DeleteServiceProfile responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
 *
 * \sa IoTWirelessClient::deleteServiceProfile
 */

/*!
 * Constructs a DeleteServiceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceProfileResponse::DeleteServiceProfileResponse(
        const DeleteServiceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteServiceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceProfileRequest * DeleteServiceProfileResponse::request() const
{
    Q_D(const DeleteServiceProfileResponse);
    return static_cast<const DeleteServiceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteServiceProfile \a response.
 */
void DeleteServiceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileResponsePrivate
 * \brief The DeleteServiceProfileResponsePrivate class provides private implementation for DeleteServiceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteServiceProfileResponsePrivate object with public implementation \a q.
 */
DeleteServiceProfileResponsePrivate::DeleteServiceProfileResponsePrivate(
    DeleteServiceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteServiceProfile response element from \a xml.
 */
void DeleteServiceProfileResponsePrivate::parseDeleteServiceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
