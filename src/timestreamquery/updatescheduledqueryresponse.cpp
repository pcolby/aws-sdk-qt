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

#include "updatescheduledqueryresponse.h"
#include "updatescheduledqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryResponse
 * \brief The UpdateScheduledQueryResponse class provides an interace for TimestreamQuery UpdateScheduledQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::updateScheduledQuery
 */

/*!
 * Constructs a UpdateScheduledQueryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateScheduledQueryResponse::UpdateScheduledQueryResponse(
        const UpdateScheduledQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new UpdateScheduledQueryResponsePrivate(this), parent)
{
    setRequest(new UpdateScheduledQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateScheduledQueryRequest * UpdateScheduledQueryResponse::request() const
{
    Q_D(const UpdateScheduledQueryResponse);
    return static_cast<const UpdateScheduledQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery UpdateScheduledQuery \a response.
 */
void UpdateScheduledQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateScheduledQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryResponsePrivate
 * \brief The UpdateScheduledQueryResponsePrivate class provides private implementation for UpdateScheduledQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a UpdateScheduledQueryResponsePrivate object with public implementation \a q.
 */
UpdateScheduledQueryResponsePrivate::UpdateScheduledQueryResponsePrivate(
    UpdateScheduledQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery UpdateScheduledQuery response element from \a xml.
 */
void UpdateScheduledQueryResponsePrivate::parseUpdateScheduledQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScheduledQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
