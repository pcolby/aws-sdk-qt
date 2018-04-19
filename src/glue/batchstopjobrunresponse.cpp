/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    Q_D(BatchStopJobRunResponse);
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
    /// @todo
}

} // namespace Glue
} // namespace QtAws
