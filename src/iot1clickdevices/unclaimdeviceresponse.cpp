// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unclaimdeviceresponse.h"
#include "unclaimdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceResponse
 * \brief The UnclaimDeviceResponse class provides an interace for IoT1ClickDevices UnclaimDevice responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::unclaimDevice
 */

/*!
 * Constructs a UnclaimDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UnclaimDeviceResponse::UnclaimDeviceResponse(
        const UnclaimDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new UnclaimDeviceResponsePrivate(this), parent)
{
    setRequest(new UnclaimDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnclaimDeviceRequest * UnclaimDeviceResponse::request() const
{
    Q_D(const UnclaimDeviceResponse);
    return static_cast<const UnclaimDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices UnclaimDevice \a response.
 */
void UnclaimDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnclaimDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::UnclaimDeviceResponsePrivate
 * \brief The UnclaimDeviceResponsePrivate class provides private implementation for UnclaimDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a UnclaimDeviceResponsePrivate object with public implementation \a q.
 */
UnclaimDeviceResponsePrivate::UnclaimDeviceResponsePrivate(
    UnclaimDeviceResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices UnclaimDevice response element from \a xml.
 */
void UnclaimDeviceResponsePrivate::parseUnclaimDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnclaimDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
