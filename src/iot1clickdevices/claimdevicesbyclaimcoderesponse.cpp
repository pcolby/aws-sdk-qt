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

#include "claimdevicesbyclaimcoderesponse.h"
#include "claimdevicesbyclaimcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::ClaimDevicesByClaimCodeResponse
 * \brief The ClaimDevicesByClaimCodeResponse class provides an interace for IoT1ClickDevices ClaimDevicesByClaimCode responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::claimDevicesByClaimCode
 */

/*!
 * Constructs a ClaimDevicesByClaimCodeResponse object for \a reply to \a request, with parent \a parent.
 */
ClaimDevicesByClaimCodeResponse::ClaimDevicesByClaimCodeResponse(
        const ClaimDevicesByClaimCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new ClaimDevicesByClaimCodeResponsePrivate(this), parent)
{
    setRequest(new ClaimDevicesByClaimCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ClaimDevicesByClaimCodeRequest * ClaimDevicesByClaimCodeResponse::request() const
{
    Q_D(const ClaimDevicesByClaimCodeResponse);
    return static_cast<const ClaimDevicesByClaimCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices ClaimDevicesByClaimCode \a response.
 */
void ClaimDevicesByClaimCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ClaimDevicesByClaimCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::ClaimDevicesByClaimCodeResponsePrivate
 * \brief The ClaimDevicesByClaimCodeResponsePrivate class provides private implementation for ClaimDevicesByClaimCodeResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a ClaimDevicesByClaimCodeResponsePrivate object with public implementation \a q.
 */
ClaimDevicesByClaimCodeResponsePrivate::ClaimDevicesByClaimCodeResponsePrivate(
    ClaimDevicesByClaimCodeResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices ClaimDevicesByClaimCode response element from \a xml.
 */
void ClaimDevicesByClaimCodeResponsePrivate::parseClaimDevicesByClaimCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClaimDevicesByClaimCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
