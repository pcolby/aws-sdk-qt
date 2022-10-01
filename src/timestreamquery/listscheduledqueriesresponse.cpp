// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
