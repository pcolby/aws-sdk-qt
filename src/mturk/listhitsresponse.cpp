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

#include "listhitsresponse.h"
#include "listhitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsResponse
 * \brief The ListHITsResponse class provides an interace for MTurk ListHITs responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITs
 */

/*!
 * Constructs a ListHITsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHITsResponse::ListHITsResponse(
        const ListHITsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListHITsResponsePrivate(this), parent)
{
    setRequest(new ListHITsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHITsRequest * ListHITsResponse::request() const
{
    Q_D(const ListHITsResponse);
    return static_cast<const ListHITsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListHITs \a response.
 */
void ListHITsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListHITsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListHITsResponsePrivate
 * \brief The ListHITsResponsePrivate class provides private implementation for ListHITsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsResponsePrivate object with public implementation \a q.
 */
ListHITsResponsePrivate::ListHITsResponsePrivate(
    ListHITsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListHITs response element from \a xml.
 */
void ListHITsResponsePrivate::parseListHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHITsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
