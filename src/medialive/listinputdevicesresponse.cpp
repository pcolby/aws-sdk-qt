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

#include "listinputdevicesresponse.h"
#include "listinputdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDevicesResponse
 * \brief The ListInputDevicesResponse class provides an interace for MediaLive ListInputDevices responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDevices
 */

/*!
 * Constructs a ListInputDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputDevicesResponse::ListInputDevicesResponse(
        const ListInputDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputDevicesResponsePrivate(this), parent)
{
    setRequest(new ListInputDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputDevicesRequest * ListInputDevicesResponse::request() const
{
    return static_cast<const ListInputDevicesRequest *>(MediaLiveResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputDevices \a response.
 */
void ListInputDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputDevicesResponsePrivate
 * \brief The ListInputDevicesResponsePrivate class provides private implementation for ListInputDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDevicesResponsePrivate object with public implementation \a q.
 */
ListInputDevicesResponsePrivate::ListInputDevicesResponsePrivate(
    ListInputDevicesResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputDevices response element from \a xml.
 */
void ListInputDevicesResponsePrivate::parseListInputDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
