// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finalizedeviceclaimresponse.h"
#include "finalizedeviceclaimresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::FinalizeDeviceClaimResponse
 * \brief The FinalizeDeviceClaimResponse class provides an interace for IoT1ClickDevices FinalizeDeviceClaim responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::finalizeDeviceClaim
 */

/*!
 * Constructs a FinalizeDeviceClaimResponse object for \a reply to \a request, with parent \a parent.
 */
FinalizeDeviceClaimResponse::FinalizeDeviceClaimResponse(
        const FinalizeDeviceClaimRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new FinalizeDeviceClaimResponsePrivate(this), parent)
{
    setRequest(new FinalizeDeviceClaimRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FinalizeDeviceClaimRequest * FinalizeDeviceClaimResponse::request() const
{
    Q_D(const FinalizeDeviceClaimResponse);
    return static_cast<const FinalizeDeviceClaimRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices FinalizeDeviceClaim \a response.
 */
void FinalizeDeviceClaimResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FinalizeDeviceClaimResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::FinalizeDeviceClaimResponsePrivate
 * \brief The FinalizeDeviceClaimResponsePrivate class provides private implementation for FinalizeDeviceClaimResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a FinalizeDeviceClaimResponsePrivate object with public implementation \a q.
 */
FinalizeDeviceClaimResponsePrivate::FinalizeDeviceClaimResponsePrivate(
    FinalizeDeviceClaimResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices FinalizeDeviceClaim response element from \a xml.
 */
void FinalizeDeviceClaimResponsePrivate::parseFinalizeDeviceClaimResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FinalizeDeviceClaimResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
