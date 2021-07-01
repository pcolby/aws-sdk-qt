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

#include "listinputdevicetransfersresponse.h"
#include "listinputdevicetransfersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersResponse
 * \brief The ListInputDeviceTransfersResponse class provides an interace for MediaLive ListInputDeviceTransfers responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputDeviceTransfers
 */

/*!
 * Constructs a ListInputDeviceTransfersResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputDeviceTransfersResponse::ListInputDeviceTransfersResponse(
        const ListInputDeviceTransfersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputDeviceTransfersResponsePrivate(this), parent)
{
    setRequest(new ListInputDeviceTransfersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputDeviceTransfersRequest * ListInputDeviceTransfersResponse::request() const
{
    Q_D(const ListInputDeviceTransfersResponse);
    return static_cast<const ListInputDeviceTransfersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputDeviceTransfers \a response.
 */
void ListInputDeviceTransfersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputDeviceTransfersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputDeviceTransfersResponsePrivate
 * \brief The ListInputDeviceTransfersResponsePrivate class provides private implementation for ListInputDeviceTransfersResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputDeviceTransfersResponsePrivate object with public implementation \a q.
 */
ListInputDeviceTransfersResponsePrivate::ListInputDeviceTransfersResponsePrivate(
    ListInputDeviceTransfersResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputDeviceTransfers response element from \a xml.
 */
void ListInputDeviceTransfersResponsePrivate::parseListInputDeviceTransfersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputDeviceTransfersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
