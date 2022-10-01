// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
    Q_D(const BatchGetJobsResponse);
    return static_cast<const BatchGetJobsRequest *>(d->request);
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
