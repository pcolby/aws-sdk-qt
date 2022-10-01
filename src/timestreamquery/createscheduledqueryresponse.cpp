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
