// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
