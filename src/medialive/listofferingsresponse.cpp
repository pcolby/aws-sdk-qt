/*
    Copyright 2013-2018 Paul Colby

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

#include "listofferingsresponse.h"
#include "listofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListOfferingsResponse
 * \brief The ListOfferingsResponse class provides an interace for MediaLive ListOfferings responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listOfferings
 */

/*!
 * Constructs a ListOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOfferingsResponse::ListOfferingsResponse(
        const ListOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListOfferingsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOfferingsRequest * ListOfferingsResponse::request() const
{
    Q_D(const ListOfferingsResponse);
    return static_cast<const ListOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListOfferings \a response.
 */
void ListOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListOfferingsResponsePrivate
 * \brief The ListOfferingsResponsePrivate class provides private implementation for ListOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListOfferingsResponsePrivate object with public implementation \a q.
 */
ListOfferingsResponsePrivate::ListOfferingsResponsePrivate(
    ListOfferingsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListOfferings response element from \a xml.
 */
void ListOfferingsResponsePrivate::parseListOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
