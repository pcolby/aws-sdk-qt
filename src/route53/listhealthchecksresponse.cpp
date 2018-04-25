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

#include "listhealthchecksresponse.h"
#include "listhealthchecksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHealthChecksResponse
 * \brief The ListHealthChecksResponse class provides an interace for Route53 ListHealthChecks responses.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listHealthChecks
 */

/*!
 * Constructs a ListHealthChecksResponse object for \a reply to \a request, with parent \a parent.
 */
ListHealthChecksResponse::ListHealthChecksResponse(
        const ListHealthChecksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListHealthChecksResponsePrivate(this), parent)
{
    setRequest(new ListHealthChecksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHealthChecksRequest * ListHealthChecksResponse::request() const
{
    Q_D(const ListHealthChecksResponse);
    return static_cast<const ListHealthChecksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListHealthChecks \a response.
 */
void ListHealthChecksResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHealthChecksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListHealthChecksResponsePrivate
 * \brief The ListHealthChecksResponsePrivate class provides private implementation for ListHealthChecksResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHealthChecksResponsePrivate object with public implementation \a q.
 */
ListHealthChecksResponsePrivate::ListHealthChecksResponsePrivate(
    ListHealthChecksResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListHealthChecks response element from \a xml.
 */
void ListHealthChecksResponsePrivate::parseListHealthChecksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHealthChecksResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
