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

#include "getwirelessgatewaycertificateresponse.h"
#include "getwirelessgatewaycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayCertificateResponse
 * \brief The GetWirelessGatewayCertificateResponse class provides an interace for IoTWireless GetWirelessGatewayCertificate responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayCertificate
 */

/*!
 * Constructs a GetWirelessGatewayCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayCertificateResponse::GetWirelessGatewayCertificateResponse(
        const GetWirelessGatewayCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayCertificateResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayCertificateRequest * GetWirelessGatewayCertificateResponse::request() const
{
    Q_D(const GetWirelessGatewayCertificateResponse);
    return static_cast<const GetWirelessGatewayCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayCertificate \a response.
 */
void GetWirelessGatewayCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayCertificateResponsePrivate
 * \brief The GetWirelessGatewayCertificateResponsePrivate class provides private implementation for GetWirelessGatewayCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayCertificateResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayCertificateResponsePrivate::GetWirelessGatewayCertificateResponsePrivate(
    GetWirelessGatewayCertificateResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayCertificate response element from \a xml.
 */
void GetWirelessGatewayCertificateResponsePrivate::parseGetWirelessGatewayCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
