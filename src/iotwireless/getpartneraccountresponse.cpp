// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartneraccountresponse.h"
#include "getpartneraccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetPartnerAccountResponse
 * \brief The GetPartnerAccountResponse class provides an interace for IoTWireless GetPartnerAccount responses.
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
 * \sa IoTWirelessClient::getPartnerAccount
 */

/*!
 * Constructs a GetPartnerAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartnerAccountResponse::GetPartnerAccountResponse(
        const GetPartnerAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetPartnerAccountResponsePrivate(this), parent)
{
    setRequest(new GetPartnerAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartnerAccountRequest * GetPartnerAccountResponse::request() const
{
    Q_D(const GetPartnerAccountResponse);
    return static_cast<const GetPartnerAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetPartnerAccount \a response.
 */
void GetPartnerAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPartnerAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetPartnerAccountResponsePrivate
 * \brief The GetPartnerAccountResponsePrivate class provides private implementation for GetPartnerAccountResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetPartnerAccountResponsePrivate object with public implementation \a q.
 */
GetPartnerAccountResponsePrivate::GetPartnerAccountResponsePrivate(
    GetPartnerAccountResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetPartnerAccount response element from \a xml.
 */
void GetPartnerAccountResponsePrivate::parseGetPartnerAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartnerAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
