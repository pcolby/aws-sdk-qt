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

#include "listcidrlocationsresponse.h"
#include "listcidrlocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrLocationsResponse
 * \brief The ListCidrLocationsResponse class provides an interace for Route53 ListCidrLocations responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrLocations
 */

/*!
 * Constructs a ListCidrLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCidrLocationsResponse::ListCidrLocationsResponse(
        const ListCidrLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListCidrLocationsResponsePrivate(this), parent)
{
    setRequest(new ListCidrLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCidrLocationsRequest * ListCidrLocationsResponse::request() const
{
    Q_D(const ListCidrLocationsResponse);
    return static_cast<const ListCidrLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListCidrLocations \a response.
 */
void ListCidrLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCidrLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListCidrLocationsResponsePrivate
 * \brief The ListCidrLocationsResponsePrivate class provides private implementation for ListCidrLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrLocationsResponsePrivate object with public implementation \a q.
 */
ListCidrLocationsResponsePrivate::ListCidrLocationsResponsePrivate(
    ListCidrLocationsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListCidrLocations response element from \a xml.
 */
void ListCidrLocationsResponsePrivate::parseListCidrLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCidrLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
