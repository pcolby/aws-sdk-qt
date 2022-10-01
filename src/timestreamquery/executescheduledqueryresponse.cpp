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

#include "executescheduledqueryresponse.h"
#include "executescheduledqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::ExecuteScheduledQueryResponse
 * \brief The ExecuteScheduledQueryResponse class provides an interace for TimestreamQuery ExecuteScheduledQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::executeScheduledQuery
 */

/*!
 * Constructs a ExecuteScheduledQueryResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteScheduledQueryResponse::ExecuteScheduledQueryResponse(
        const ExecuteScheduledQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new ExecuteScheduledQueryResponsePrivate(this), parent)
{
    setRequest(new ExecuteScheduledQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteScheduledQueryRequest * ExecuteScheduledQueryResponse::request() const
{
    Q_D(const ExecuteScheduledQueryResponse);
    return static_cast<const ExecuteScheduledQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery ExecuteScheduledQuery \a response.
 */
void ExecuteScheduledQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteScheduledQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::ExecuteScheduledQueryResponsePrivate
 * \brief The ExecuteScheduledQueryResponsePrivate class provides private implementation for ExecuteScheduledQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a ExecuteScheduledQueryResponsePrivate object with public implementation \a q.
 */
ExecuteScheduledQueryResponsePrivate::ExecuteScheduledQueryResponsePrivate(
    ExecuteScheduledQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery ExecuteScheduledQuery response element from \a xml.
 */
void ExecuteScheduledQueryResponsePrivate::parseExecuteScheduledQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteScheduledQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
