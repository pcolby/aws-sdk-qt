// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "invokedevicemethodresponse.h"
#include "invokedevicemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::InvokeDeviceMethodResponse
 * \brief The InvokeDeviceMethodResponse class provides an interace for IoT1ClickDevices InvokeDeviceMethod responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::invokeDeviceMethod
 */

/*!
 * Constructs a InvokeDeviceMethodResponse object for \a reply to \a request, with parent \a parent.
 */
InvokeDeviceMethodResponse::InvokeDeviceMethodResponse(
        const InvokeDeviceMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new InvokeDeviceMethodResponsePrivate(this), parent)
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
 * Parses a successful IoT1ClickDevices InvokeDeviceMethod \a response.
 */
void InvokeDeviceMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InvokeDeviceMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::InvokeDeviceMethodResponsePrivate
 * \brief The InvokeDeviceMethodResponsePrivate class provides private implementation for InvokeDeviceMethodResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a InvokeDeviceMethodResponsePrivate object with public implementation \a q.
 */
InvokeDeviceMethodResponsePrivate::InvokeDeviceMethodResponsePrivate(
    InvokeDeviceMethodResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices InvokeDeviceMethod response element from \a xml.
 */
void InvokeDeviceMethodResponsePrivate::parseInvokeDeviceMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeDeviceMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
