// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicestateresponse.h"
#include "updatedevicestateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::UpdateDeviceStateResponse
 * \brief The UpdateDeviceStateResponse class provides an interace for IoT1ClickDevices UpdateDeviceState responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::updateDeviceState
 */

/*!
 * Constructs a UpdateDeviceStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDeviceStateResponse::UpdateDeviceStateResponse(
        const UpdateDeviceStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new UpdateDeviceStateResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDeviceStateRequest * UpdateDeviceStateResponse::request() const
{
    Q_D(const UpdateDeviceStateResponse);
    return static_cast<const UpdateDeviceStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices UpdateDeviceState \a response.
 */
void UpdateDeviceStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDeviceStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::UpdateDeviceStateResponsePrivate
 * \brief The UpdateDeviceStateResponsePrivate class provides private implementation for UpdateDeviceStateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a UpdateDeviceStateResponsePrivate object with public implementation \a q.
 */
UpdateDeviceStateResponsePrivate::UpdateDeviceStateResponsePrivate(
    UpdateDeviceStateResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices UpdateDeviceState response element from \a xml.
 */
void UpdateDeviceStateResponsePrivate::parseUpdateDeviceStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
