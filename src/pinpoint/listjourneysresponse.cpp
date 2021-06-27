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

#include "listjourneysresponse.h"
#include "listjourneysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListJourneysResponse
 * \brief The ListJourneysResponse class provides an interace for Pinpoint ListJourneys responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listJourneys
 */

/*!
 * Constructs a ListJourneysResponse object for \a reply to \a request, with parent \a parent.
 */
ListJourneysResponse::ListJourneysResponse(
        const ListJourneysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new ListJourneysResponsePrivate(this), parent)
{
    setRequest(new ListJourneysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJourneysRequest * ListJourneysResponse::request() const
{
    return static_cast<const ListJourneysRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint ListJourneys \a response.
 */
void ListJourneysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJourneysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::ListJourneysResponsePrivate
 * \brief The ListJourneysResponsePrivate class provides private implementation for ListJourneysResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListJourneysResponsePrivate object with public implementation \a q.
 */
ListJourneysResponsePrivate::ListJourneysResponsePrivate(
    ListJourneysResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint ListJourneys response element from \a xml.
 */
void ListJourneysResponsePrivate::parseListJourneysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJourneysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
