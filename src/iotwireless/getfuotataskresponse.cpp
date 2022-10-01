// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfuotataskresponse.h"
#include "getfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetFuotaTaskResponse
 * \brief The GetFuotaTaskResponse class provides an interace for IoTWireless GetFuotaTask responses.
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
 * \sa IoTWirelessClient::getFuotaTask
 */

/*!
 * Constructs a GetFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetFuotaTaskResponse::GetFuotaTaskResponse(
        const GetFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new GetFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFuotaTaskRequest * GetFuotaTaskResponse::request() const
{
    Q_D(const GetFuotaTaskResponse);
    return static_cast<const GetFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetFuotaTask \a response.
 */
void GetFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetFuotaTaskResponsePrivate
 * \brief The GetFuotaTaskResponsePrivate class provides private implementation for GetFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetFuotaTaskResponsePrivate object with public implementation \a q.
 */
GetFuotaTaskResponsePrivate::GetFuotaTaskResponsePrivate(
    GetFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetFuotaTask response element from \a xml.
 */
void GetFuotaTaskResponsePrivate::parseGetFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
