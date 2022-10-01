// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchstopjobrunresponse.h"
#include "batchstopjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchStopJobRunResponse
 * \brief The BatchStopJobRunResponse class provides an interace for Glue BatchStopJobRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchStopJobRun
 */

/*!
 * Constructs a BatchStopJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
BatchStopJobRunResponse::BatchStopJobRunResponse(
        const BatchStopJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchStopJobRunResponsePrivate(this), parent)
{
    setRequest(new BatchStopJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchStopJobRunRequest * BatchStopJobRunResponse::request() const
{
    Q_D(const BatchStopJobRunResponse);
    return static_cast<const BatchStopJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchStopJobRun \a response.
 */
void BatchStopJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchStopJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchStopJobRunResponsePrivate
 * \brief The BatchStopJobRunResponsePrivate class provides private implementation for BatchStopJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchStopJobRunResponsePrivate object with public implementation \a q.
 */
BatchStopJobRunResponsePrivate::BatchStopJobRunResponsePrivate(
    BatchStopJobRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchStopJobRun response element from \a xml.
 */
void BatchStopJobRunResponsePrivate::parseBatchStopJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchStopJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
