/*
    Copyright 2013-2020 Paul Colby

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

#include "listreservationsresponse.h"
#include "listreservationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListReservationsResponse
 * \brief The ListReservationsResponse class provides an interace for MediaLive ListReservations responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listReservations
 */

/*!
 * Constructs a ListReservationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReservationsResponse::ListReservationsResponse(
        const ListReservationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListReservationsResponsePrivate(this), parent)
{
    setRequest(new ListReservationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReservationsRequest * ListReservationsResponse::request() const
{
    Q_D(const ListReservationsResponse);
    return static_cast<const ListReservationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListReservations \a response.
 */
void ListReservationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReservationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListReservationsResponsePrivate
 * \brief The ListReservationsResponsePrivate class provides private implementation for ListReservationsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListReservationsResponsePrivate object with public implementation \a q.
 */
ListReservationsResponsePrivate::ListReservationsResponsePrivate(
    ListReservationsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListReservations response element from \a xml.
 */
void ListReservationsResponsePrivate::parseListReservationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReservationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
