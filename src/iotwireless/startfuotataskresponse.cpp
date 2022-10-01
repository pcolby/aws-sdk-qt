// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfuotataskresponse.h"
#include "startfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::StartFuotaTaskResponse
 * \brief The StartFuotaTaskResponse class provides an interace for IoTWireless StartFuotaTask responses.
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
 * \sa IoTWirelessClient::startFuotaTask
 */

/*!
 * Constructs a StartFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
StartFuotaTaskResponse::StartFuotaTaskResponse(
        const StartFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new StartFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new StartFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFuotaTaskRequest * StartFuotaTaskResponse::request() const
{
    Q_D(const StartFuotaTaskResponse);
    return static_cast<const StartFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless StartFuotaTask \a response.
 */
void StartFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::StartFuotaTaskResponsePrivate
 * \brief The StartFuotaTaskResponsePrivate class provides private implementation for StartFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a StartFuotaTaskResponsePrivate object with public implementation \a q.
 */
StartFuotaTaskResponsePrivate::StartFuotaTaskResponsePrivate(
    StartFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless StartFuotaTask response element from \a xml.
 */
void StartFuotaTaskResponsePrivate::parseStartFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
