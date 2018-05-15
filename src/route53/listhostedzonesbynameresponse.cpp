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

#include "listhostedzonesbynameresponse.h"
#include "listhostedzonesbynameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesByNameResponse
 * \brief The ListHostedZonesByNameResponse class provides an interace for Route53 ListHostedZonesByName responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listHostedZonesByName
 */

/*!
 * Constructs a ListHostedZonesByNameResponse object for \a reply to \a request, with parent \a parent.
 */
ListHostedZonesByNameResponse::ListHostedZonesByNameResponse(
        const ListHostedZonesByNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHostedZonesByNameResponsePrivate(this), parent)
{
    setRequest(new ListHostedZonesByNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHostedZonesByNameRequest * ListHostedZonesByNameResponse::request() const
{
    Q_D(const ListHostedZonesByNameResponse);
    return static_cast<const ListHostedZonesByNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHostedZonesByName \a response.
 */
void ListHostedZonesByNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHostedZonesByNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHostedZonesByNameResponsePrivate
 * \brief The ListHostedZonesByNameResponsePrivate class provides private implementation for ListHostedZonesByNameResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesByNameResponsePrivate object with public implementation \a q.
 */
ListHostedZonesByNameResponsePrivate::ListHostedZonesByNameResponsePrivate(
    ListHostedZonesByNameResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHostedZonesByName response element from \a xml.
 */
void ListHostedZonesByNameResponsePrivate::parseListHostedZonesByNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHostedZonesByNameResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
