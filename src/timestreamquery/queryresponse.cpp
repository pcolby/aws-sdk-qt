// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryresponse.h"
#include "queryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::QueryResponse
 * \brief The QueryResponse class provides an interace for TimestreamQuery Query responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::query
 */

/*!
 * Constructs a QueryResponse object for \a reply to \a request, with parent \a parent.
 */
QueryResponse::QueryResponse(
        const QueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new QueryResponsePrivate(this), parent)
{
    setRequest(new QueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryRequest * QueryResponse::request() const
{
    Q_D(const QueryResponse);
    return static_cast<const QueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery Query \a response.
 */
void QueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::QueryResponsePrivate
 * \brief The QueryResponsePrivate class provides private implementation for QueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a QueryResponsePrivate object with public implementation \a q.
 */
QueryResponsePrivate::QueryResponsePrivate(
    QueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery Query response element from \a xml.
 */
void QueryResponsePrivate::parseQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
