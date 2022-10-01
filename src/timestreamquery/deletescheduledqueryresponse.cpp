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

#include "deletescheduledqueryresponse.h"
#include "deletescheduledqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryResponse
 * \brief The DeleteScheduledQueryResponse class provides an interace for TimestreamQuery DeleteScheduledQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::deleteScheduledQuery
 */

/*!
 * Constructs a DeleteScheduledQueryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteScheduledQueryResponse::DeleteScheduledQueryResponse(
        const DeleteScheduledQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new DeleteScheduledQueryResponsePrivate(this), parent)
{
    setRequest(new DeleteScheduledQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteScheduledQueryRequest * DeleteScheduledQueryResponse::request() const
{
    Q_D(const DeleteScheduledQueryResponse);
    return static_cast<const DeleteScheduledQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery DeleteScheduledQuery \a response.
 */
void DeleteScheduledQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScheduledQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryResponsePrivate
 * \brief The DeleteScheduledQueryResponsePrivate class provides private implementation for DeleteScheduledQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DeleteScheduledQueryResponsePrivate object with public implementation \a q.
 */
DeleteScheduledQueryResponsePrivate::DeleteScheduledQueryResponsePrivate(
    DeleteScheduledQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery DeleteScheduledQuery response element from \a xml.
 */
void DeleteScheduledQueryResponsePrivate::parseDeleteScheduledQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScheduledQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
