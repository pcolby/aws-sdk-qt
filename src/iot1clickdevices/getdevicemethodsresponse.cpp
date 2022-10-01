// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicemethodsresponse.h"
#include "getdevicemethodsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::GetDeviceMethodsResponse
 * \brief The GetDeviceMethodsResponse class provides an interace for IoT1ClickDevices GetDeviceMethods responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::getDeviceMethods
 */

/*!
 * Constructs a GetDeviceMethodsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceMethodsResponse::GetDeviceMethodsResponse(
        const GetDeviceMethodsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new GetDeviceMethodsResponsePrivate(this), parent)
{
    setRequest(new GetDeviceMethodsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceMethodsRequest * GetDeviceMethodsResponse::request() const
{
    Q_D(const GetDeviceMethodsResponse);
    return static_cast<const GetDeviceMethodsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices GetDeviceMethods \a response.
 */
void GetDeviceMethodsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceMethodsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::GetDeviceMethodsResponsePrivate
 * \brief The GetDeviceMethodsResponsePrivate class provides private implementation for GetDeviceMethodsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a GetDeviceMethodsResponsePrivate object with public implementation \a q.
 */
GetDeviceMethodsResponsePrivate::GetDeviceMethodsResponsePrivate(
    GetDeviceMethodsResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices GetDeviceMethods response element from \a xml.
 */
void GetDeviceMethodsResponsePrivate::parseGetDeviceMethodsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceMethodsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
