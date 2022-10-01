// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
