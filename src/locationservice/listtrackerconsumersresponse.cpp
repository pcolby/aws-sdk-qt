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

#include "listtrackerconsumersresponse.h"
#include "listtrackerconsumersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListTrackerConsumersResponse
 * \brief The ListTrackerConsumersResponse class provides an interace for LocationService ListTrackerConsumers responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listTrackerConsumers
 */

/*!
 * Constructs a ListTrackerConsumersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrackerConsumersResponse::ListTrackerConsumersResponse(
        const ListTrackerConsumersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new ListTrackerConsumersResponsePrivate(this), parent)
{
    setRequest(new ListTrackerConsumersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrackerConsumersRequest * ListTrackerConsumersResponse::request() const
{
    Q_D(const ListTrackerConsumersResponse);
    return static_cast<const ListTrackerConsumersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LocationService ListTrackerConsumers \a response.
 */
void ListTrackerConsumersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrackerConsumersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::ListTrackerConsumersResponsePrivate
 * \brief The ListTrackerConsumersResponsePrivate class provides private implementation for ListTrackerConsumersResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListTrackerConsumersResponsePrivate object with public implementation \a q.
 */
ListTrackerConsumersResponsePrivate::ListTrackerConsumersResponsePrivate(
    ListTrackerConsumersResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService ListTrackerConsumers response element from \a xml.
 */
void ListTrackerConsumersResponsePrivate::parseListTrackerConsumersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrackerConsumersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
