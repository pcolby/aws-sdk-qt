// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdestinationresponse.h"
#include "createdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDestinationResponse
 * \brief The CreateDestinationResponse class provides an interace for IoTWireless CreateDestination responses.
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
 * \sa IoTWirelessClient::createDestination
 */

/*!
 * Constructs a CreateDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDestinationResponse::CreateDestinationResponse(
        const CreateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDestinationRequest * CreateDestinationResponse::request() const
{
    Q_D(const CreateDestinationResponse);
    return static_cast<const CreateDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateDestination \a response.
 */
void CreateDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateDestinationResponsePrivate
 * \brief The CreateDestinationResponsePrivate class provides private implementation for CreateDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDestinationResponsePrivate object with public implementation \a q.
 */
CreateDestinationResponsePrivate::CreateDestinationResponsePrivate(
    CreateDestinationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateDestination response element from \a xml.
 */
void CreateDestinationResponsePrivate::parseCreateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
