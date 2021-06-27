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

#include "updatedevicestateresponse.h"
#include "updatedevicestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::UpdateDeviceStateResponse
 * \brief The UpdateDeviceStateResponse class provides an interace for IoT1ClickDevicesService UpdateDeviceState responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::updateDeviceState
 */

/*!
 * Constructs a UpdateDeviceStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceStateResponse::UpdateDeviceStateResponse(
        const UpdateDeviceStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new UpdateDeviceStateResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceStateRequest * UpdateDeviceStateResponse::request() const
{
    return static_cast<const UpdateDeviceStateRequest *>(IoT1ClickDevicesServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService UpdateDeviceState \a response.
 */
void UpdateDeviceStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::UpdateDeviceStateResponsePrivate
 * \brief The UpdateDeviceStateResponsePrivate class provides private implementation for UpdateDeviceStateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a UpdateDeviceStateResponsePrivate object with public implementation \a q.
 */
UpdateDeviceStateResponsePrivate::UpdateDeviceStateResponsePrivate(
    UpdateDeviceStateResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService UpdateDeviceState response element from \a xml.
 */
void UpdateDeviceStateResponsePrivate::parseUpdateDeviceStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
