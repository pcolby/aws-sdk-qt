/*
    Copyright 2013-2019 Paul Colby

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

#include "invokedevicemethodresponse.h"
#include "invokedevicemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::InvokeDeviceMethodResponse
 * \brief The InvokeDeviceMethodResponse class provides an interace for IoT1ClickDevicesService InvokeDeviceMethod responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::invokeDeviceMethod
 */

/*!
 * Constructs a InvokeDeviceMethodResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeDeviceMethodResponse::InvokeDeviceMethodResponse(
        const InvokeDeviceMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new InvokeDeviceMethodResponsePrivate(this), parent)
{
    setRequest(new InvokeDeviceMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InvokeDeviceMethodRequest * InvokeDeviceMethodResponse::request() const
{
    Q_D(const InvokeDeviceMethodResponse);
    return static_cast<const InvokeDeviceMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService InvokeDeviceMethod \a response.
 */
void InvokeDeviceMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeDeviceMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::InvokeDeviceMethodResponsePrivate
 * \brief The InvokeDeviceMethodResponsePrivate class provides private implementation for InvokeDeviceMethodResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a InvokeDeviceMethodResponsePrivate object with public implementation \a q.
 */
InvokeDeviceMethodResponsePrivate::InvokeDeviceMethodResponsePrivate(
    InvokeDeviceMethodResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService InvokeDeviceMethod response element from \a xml.
 */
void InvokeDeviceMethodResponsePrivate::parseInvokeDeviceMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeDeviceMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
