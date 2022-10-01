// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiatedeviceclaimresponse.h"
#include "initiatedeviceclaimresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimResponse
 * \brief The InitiateDeviceClaimResponse class provides an interace for IoT1ClickDevices InitiateDeviceClaim responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::initiateDeviceClaim
 */

/*!
 * Constructs a InitiateDeviceClaimResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateDeviceClaimResponse::InitiateDeviceClaimResponse(
        const InitiateDeviceClaimRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new InitiateDeviceClaimResponsePrivate(this), parent)
{
    setRequest(new InitiateDeviceClaimRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateDeviceClaimRequest * InitiateDeviceClaimResponse::request() const
{
    Q_D(const InitiateDeviceClaimResponse);
    return static_cast<const InitiateDeviceClaimRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices InitiateDeviceClaim \a response.
 */
void InitiateDeviceClaimResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateDeviceClaimResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::InitiateDeviceClaimResponsePrivate
 * \brief The InitiateDeviceClaimResponsePrivate class provides private implementation for InitiateDeviceClaimResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a InitiateDeviceClaimResponsePrivate object with public implementation \a q.
 */
InitiateDeviceClaimResponsePrivate::InitiateDeviceClaimResponsePrivate(
    InitiateDeviceClaimResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices InitiateDeviceClaim response element from \a xml.
 */
void InitiateDeviceClaimResponsePrivate::parseInitiateDeviceClaimResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateDeviceClaimResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
