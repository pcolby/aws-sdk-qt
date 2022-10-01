// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfuotataskresponse.h"
#include "createfuotataskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateFuotaTaskResponse
 * \brief The CreateFuotaTaskResponse class provides an interace for IoTWireless CreateFuotaTask responses.
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
 * \sa IoTWirelessClient::createFuotaTask
 */

/*!
 * Constructs a CreateFuotaTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFuotaTaskResponse::CreateFuotaTaskResponse(
        const CreateFuotaTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateFuotaTaskResponsePrivate(this), parent)
{
    setRequest(new CreateFuotaTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFuotaTaskRequest * CreateFuotaTaskResponse::request() const
{
    Q_D(const CreateFuotaTaskResponse);
    return static_cast<const CreateFuotaTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateFuotaTask \a response.
 */
void CreateFuotaTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFuotaTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateFuotaTaskResponsePrivate
 * \brief The CreateFuotaTaskResponsePrivate class provides private implementation for CreateFuotaTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateFuotaTaskResponsePrivate object with public implementation \a q.
 */
CreateFuotaTaskResponsePrivate::CreateFuotaTaskResponsePrivate(
    CreateFuotaTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateFuotaTask response element from \a xml.
 */
void CreateFuotaTaskResponsePrivate::parseCreateFuotaTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFuotaTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
