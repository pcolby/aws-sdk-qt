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

#include "batchgetjobsresponse.h"
#include "batchgetjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetJobsResponse
 * \brief The BatchGetJobsResponse class provides an interace for Glue BatchGetJobs responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetJobs
 */

/*!
 * Constructs a BatchGetJobsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetJobsResponse::BatchGetJobsResponse(
        const BatchGetJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetJobsResponsePrivate(this), parent)
{
    setRequest(new BatchGetJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetJobsRequest * BatchGetJobsResponse::request() const
{
    return static_cast<const BatchGetJobsRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetJobs \a response.
 */
void BatchGetJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetJobsResponsePrivate
 * \brief The BatchGetJobsResponsePrivate class provides private implementation for BatchGetJobsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetJobsResponsePrivate object with public implementation \a q.
 */
BatchGetJobsResponsePrivate::BatchGetJobsResponsePrivate(
    BatchGetJobsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetJobs response element from \a xml.
 */
void BatchGetJobsResponsePrivate::parseBatchGetJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
