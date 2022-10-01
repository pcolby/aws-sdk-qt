// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
