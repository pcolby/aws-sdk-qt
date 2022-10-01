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

#include "listscheduledqueriesresponse.h"
#include "listscheduledqueriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::ListScheduledQueriesResponse
 * \brief The ListScheduledQueriesResponse class provides an interace for TimestreamQuery ListScheduledQueries responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::listScheduledQueries
 */

/*!
 * Constructs a ListScheduledQueriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListScheduledQueriesResponse::ListScheduledQueriesResponse(
        const ListScheduledQueriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new ListScheduledQueriesResponsePrivate(this), parent)
{
    setRequest(new ListScheduledQueriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListScheduledQueriesRequest * ListScheduledQueriesResponse::request() const
{
    Q_D(const ListScheduledQueriesResponse);
    return static_cast<const ListScheduledQueriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery ListScheduledQueries \a response.
 */
void ListScheduledQueriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListScheduledQueriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::ListScheduledQueriesResponsePrivate
 * \brief The ListScheduledQueriesResponsePrivate class provides private implementation for ListScheduledQueriesResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a ListScheduledQueriesResponsePrivate object with public implementation \a q.
 */
ListScheduledQueriesResponsePrivate::ListScheduledQueriesResponsePrivate(
    ListScheduledQueriesResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery ListScheduledQueries response element from \a xml.
 */
void ListScheduledQueriesResponsePrivate::parseListScheduledQueriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListScheduledQueriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
