// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefuotataskresponse.h"
#include "updatefuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateFuotaTaskResponse
 * \brief The UpdateFuotaTaskResponse class provides an interace for IoTWireless UpdateFuotaTask responses.
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
 * \sa IoTWirelessClient::updateFuotaTask
 */

/*!
 * Constructs a UpdateFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFuotaTaskResponse::UpdateFuotaTaskResponse(
        const UpdateFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new UpdateFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFuotaTaskRequest * UpdateFuotaTaskResponse::request() const
{
    Q_D(const UpdateFuotaTaskResponse);
    return static_cast<const UpdateFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateFuotaTask \a response.
 */
void UpdateFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateFuotaTaskResponsePrivate
 * \brief The UpdateFuotaTaskResponsePrivate class provides private implementation for UpdateFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateFuotaTaskResponsePrivate object with public implementation \a q.
 */
UpdateFuotaTaskResponsePrivate::UpdateFuotaTaskResponsePrivate(
    UpdateFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateFuotaTask response element from \a xml.
 */
void UpdateFuotaTaskResponsePrivate::parseUpdateFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
