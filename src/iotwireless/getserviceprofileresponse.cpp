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

#include "getserviceprofileresponse.h"
#include "getserviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceProfileResponse
 * \brief The GetServiceProfileResponse class provides an interace for IoTWireless GetServiceProfile responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getServiceProfile
 */

/*!
 * Constructs a GetServiceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceProfileResponse::GetServiceProfileResponse(
        const GetServiceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetServiceProfileResponsePrivate(this), parent)
{
    setRequest(new GetServiceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceProfileRequest * GetServiceProfileResponse::request() const
{
    return static_cast<const GetServiceProfileRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetServiceProfile \a response.
 */
void GetServiceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetServiceProfileResponsePrivate
 * \brief The GetServiceProfileResponsePrivate class provides private implementation for GetServiceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceProfileResponsePrivate object with public implementation \a q.
 */
GetServiceProfileResponsePrivate::GetServiceProfileResponsePrivate(
    GetServiceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetServiceProfile response element from \a xml.
 */
void GetServiceProfileResponsePrivate::parseGetServiceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
