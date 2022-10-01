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

#include "describescheduledqueryresponse.h"
#include "describescheduledqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DescribeScheduledQueryResponse
 * \brief The DescribeScheduledQueryResponse class provides an interace for TimestreamQuery DescribeScheduledQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::describeScheduledQuery
 */

/*!
 * Constructs a DescribeScheduledQueryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScheduledQueryResponse::DescribeScheduledQueryResponse(
        const DescribeScheduledQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new DescribeScheduledQueryResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScheduledQueryRequest * DescribeScheduledQueryResponse::request() const
{
    Q_D(const DescribeScheduledQueryResponse);
    return static_cast<const DescribeScheduledQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery DescribeScheduledQuery \a response.
 */
void DescribeScheduledQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScheduledQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::DescribeScheduledQueryResponsePrivate
 * \brief The DescribeScheduledQueryResponsePrivate class provides private implementation for DescribeScheduledQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DescribeScheduledQueryResponsePrivate object with public implementation \a q.
 */
DescribeScheduledQueryResponsePrivate::DescribeScheduledQueryResponsePrivate(
    DescribeScheduledQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery DescribeScheduledQuery response element from \a xml.
 */
void DescribeScheduledQueryResponsePrivate::parseDescribeScheduledQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
