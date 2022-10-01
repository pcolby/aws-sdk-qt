// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createscheduledqueryresponse.h"
#include "createscheduledqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::CreateScheduledQueryResponse
 * \brief The CreateScheduledQueryResponse class provides an interace for TimestreamQuery CreateScheduledQuery responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::createScheduledQuery
 */

/*!
 * Constructs a CreateScheduledQueryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateScheduledQueryResponse::CreateScheduledQueryResponse(
        const CreateScheduledQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new CreateScheduledQueryResponsePrivate(this), parent)
{
    setRequest(new CreateScheduledQueryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateScheduledQueryRequest * CreateScheduledQueryResponse::request() const
{
    Q_D(const CreateScheduledQueryResponse);
    return static_cast<const CreateScheduledQueryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery CreateScheduledQuery \a response.
 */
void CreateScheduledQueryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateScheduledQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::CreateScheduledQueryResponsePrivate
 * \brief The CreateScheduledQueryResponsePrivate class provides private implementation for CreateScheduledQueryResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a CreateScheduledQueryResponsePrivate object with public implementation \a q.
 */
CreateScheduledQueryResponsePrivate::CreateScheduledQueryResponsePrivate(
    CreateScheduledQueryResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery CreateScheduledQuery response element from \a xml.
 */
void CreateScheduledQueryResponsePrivate::parseCreateScheduledQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScheduledQueryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
