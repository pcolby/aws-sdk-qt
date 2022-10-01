// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworkanalyzerconfigurationresponse.h"
#include "deletenetworkanalyzerconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteNetworkAnalyzerConfigurationResponse
 * \brief The DeleteNetworkAnalyzerConfigurationResponse class provides an interace for IoTWireless DeleteNetworkAnalyzerConfiguration responses.
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
 * \sa IoTWirelessClient::deleteNetworkAnalyzerConfiguration
 */

/*!
 * Constructs a DeleteNetworkAnalyzerConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkAnalyzerConfigurationResponse::DeleteNetworkAnalyzerConfigurationResponse(
        const DeleteNetworkAnalyzerConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteNetworkAnalyzerConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkAnalyzerConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkAnalyzerConfigurationRequest * DeleteNetworkAnalyzerConfigurationResponse::request() const
{
    Q_D(const DeleteNetworkAnalyzerConfigurationResponse);
    return static_cast<const DeleteNetworkAnalyzerConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteNetworkAnalyzerConfiguration \a response.
 */
void DeleteNetworkAnalyzerConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkAnalyzerConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteNetworkAnalyzerConfigurationResponsePrivate
 * \brief The DeleteNetworkAnalyzerConfigurationResponsePrivate class provides private implementation for DeleteNetworkAnalyzerConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteNetworkAnalyzerConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteNetworkAnalyzerConfigurationResponsePrivate::DeleteNetworkAnalyzerConfigurationResponsePrivate(
    DeleteNetworkAnalyzerConfigurationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteNetworkAnalyzerConfiguration response element from \a xml.
 */
void DeleteNetworkAnalyzerConfigurationResponsePrivate::parseDeleteNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkAnalyzerConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
