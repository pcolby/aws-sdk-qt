// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedeviceresponse.h"
#include "describedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevices {

/*!
 * \class QtAws::IoT1ClickDevices::DescribeDeviceResponse
 * \brief The DescribeDeviceResponse class provides an interace for IoT1ClickDevices DescribeDevice responses.
 *
 * \inmodule QtAwsIoT1ClickDevices
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesClient::describeDevice
 */

/*!
 * Constructs a DescribeDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceResponse::DescribeDeviceResponse(
        const DescribeDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesResponse(new DescribeDeviceResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceRequest * DescribeDeviceResponse::request() const
{
    Q_D(const DescribeDeviceResponse);
    return static_cast<const DescribeDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevices DescribeDevice \a response.
 */
void DescribeDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevices::DescribeDeviceResponsePrivate
 * \brief The DescribeDeviceResponsePrivate class provides private implementation for DescribeDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevices
 */

/*!
 * Constructs a DescribeDeviceResponsePrivate object with public implementation \a q.
 */
DescribeDeviceResponsePrivate::DescribeDeviceResponsePrivate(
    DescribeDeviceResponse * const q) : IoT1ClickDevicesResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevices DescribeDevice response element from \a xml.
 */
void DescribeDeviceResponsePrivate::parseDescribeDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevices
} // namespace QtAws
