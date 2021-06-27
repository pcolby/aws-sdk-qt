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

#include "listserviceprofilesresponse.h"
#include "listserviceprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ListServiceProfilesResponse
 * \brief The ListServiceProfilesResponse class provides an interace for IoTWireless ListServiceProfiles responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::listServiceProfiles
 */

/*!
 * Constructs a ListServiceProfilesResponse object for \a reply to \a request, with parent \a parent.
 */
ListServiceProfilesResponse::ListServiceProfilesResponse(
        const ListServiceProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ListServiceProfilesResponsePrivate(this), parent)
{
    setRequest(new ListServiceProfilesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServiceProfilesRequest * ListServiceProfilesResponse::request() const
{
    return static_cast<const ListServiceProfilesRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless ListServiceProfiles \a response.
 */
void ListServiceProfilesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServiceProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ListServiceProfilesResponsePrivate
 * \brief The ListServiceProfilesResponsePrivate class provides private implementation for ListServiceProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ListServiceProfilesResponsePrivate object with public implementation \a q.
 */
ListServiceProfilesResponsePrivate::ListServiceProfilesResponsePrivate(
    ListServiceProfilesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ListServiceProfiles response element from \a xml.
 */
void ListServiceProfilesResponsePrivate::parseListServiceProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceProfilesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
