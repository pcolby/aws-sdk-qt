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

#include "listtrackersresponse.h"
#include "listtrackersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListTrackersResponse
 * \brief The ListTrackersResponse class provides an interace for LocationService ListTrackers responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listTrackers
 */

/*!
 * Constructs a ListTrackersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrackersResponse::ListTrackersResponse(
        const ListTrackersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListTrackersResponsePrivate(this), parent)
{
    setRequest(new ListTrackersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrackersRequest * ListTrackersResponse::request() const
{
    Q_D(const ListTrackersResponse);
    return static_cast<const ListTrackersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService ListTrackers \a response.
 */
void ListTrackersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrackersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListTrackersResponsePrivate
 * \brief The ListTrackersResponsePrivate class provides private implementation for ListTrackersResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListTrackersResponsePrivate object with public implementation \a q.
 */
ListTrackersResponsePrivate::ListTrackersResponsePrivate(
    ListTrackersResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListTrackers response element from \a xml.
 */
void ListTrackersResponsePrivate::parseListTrackersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrackersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
