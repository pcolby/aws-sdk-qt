// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
