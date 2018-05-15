/*
    Copyright 2013-2018 Paul Colby

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

#include "finalizedeviceclaimresponse.h"
#include "finalizedeviceclaimresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::FinalizeDeviceClaimResponse
 * \brief The FinalizeDeviceClaimResponse class provides an interace for IoT1ClickDevicesService FinalizeDeviceClaim responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::finalizeDeviceClaim
 */

/*!
 * Constructs a FinalizeDeviceClaimResponse object for \a reply to \a request, with parent \a parent.
 */
FinalizeDeviceClaimResponse::FinalizeDeviceClaimResponse(
        const FinalizeDeviceClaimRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new FinalizeDeviceClaimResponsePrivate(this), parent)
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
 * Parses a successful IoT1ClickDevicesService FinalizeDeviceClaim \a response.
 */
void FinalizeDeviceClaimResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FinalizeDeviceClaimResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::FinalizeDeviceClaimResponsePrivate
 * \brief The FinalizeDeviceClaimResponsePrivate class provides private implementation for FinalizeDeviceClaimResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a FinalizeDeviceClaimResponsePrivate object with public implementation \a q.
 */
FinalizeDeviceClaimResponsePrivate::FinalizeDeviceClaimResponsePrivate(
    FinalizeDeviceClaimResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService FinalizeDeviceClaim response element from \a xml.
 */
void FinalizeDeviceClaimResponsePrivate::parseFinalizeDeviceClaimResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FinalizeDeviceClaimResponse"));
    /// @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
