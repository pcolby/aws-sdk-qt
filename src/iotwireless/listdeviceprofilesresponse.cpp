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

#include "listdeviceprofilesresponse.h"
#include "listdeviceprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListDeviceProfilesResponse
 * \brief The ListDeviceProfilesResponse class provides an interace for IoTWireless ListDeviceProfiles responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listDeviceProfiles
 */

/*!
 * Constructs a ListDeviceProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceProfilesResponse::ListDeviceProfilesResponse(
        const ListDeviceProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListDeviceProfilesResponsePrivate(this), parent)
{
    setRequest(new ListDeviceProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceProfilesRequest * ListDeviceProfilesResponse::request() const
{
    return static_cast<const ListDeviceProfilesRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListDeviceProfiles \a response.
 */
void ListDeviceProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListDeviceProfilesResponsePrivate
 * \brief The ListDeviceProfilesResponsePrivate class provides private implementation for ListDeviceProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListDeviceProfilesResponsePrivate object with public implementation \a q.
 */
ListDeviceProfilesResponsePrivate::ListDeviceProfilesResponsePrivate(
    ListDeviceProfilesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListDeviceProfiles response element from \a xml.
 */
void ListDeviceProfilesResponsePrivate::parseListDeviceProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
