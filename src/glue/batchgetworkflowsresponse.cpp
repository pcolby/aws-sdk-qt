/*
    Copyright 2013-2020 Paul Colby

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

#include "batchgetworkflowsresponse.h"
#include "batchgetworkflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetWorkflowsResponse
 * \brief The BatchGetWorkflowsResponse class provides an interace for Glue BatchGetWorkflows responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetWorkflows
 */

/*!
 * Constructs a BatchGetWorkflowsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetWorkflowsResponse::BatchGetWorkflowsResponse(
        const BatchGetWorkflowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchGetWorkflowsResponsePrivate(this), parent)
{
    setRequest(new BatchGetWorkflowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetWorkflowsRequest * BatchGetWorkflowsResponse::request() const
{
    Q_D(const BatchGetWorkflowsResponse);
    return static_cast<const BatchGetWorkflowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue BatchGetWorkflows \a response.
 */
void BatchGetWorkflowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetWorkflowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::BatchGetWorkflowsResponsePrivate
 * \brief The BatchGetWorkflowsResponsePrivate class provides private implementation for BatchGetWorkflowsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetWorkflowsResponsePrivate object with public implementation \a q.
 */
BatchGetWorkflowsResponsePrivate::BatchGetWorkflowsResponsePrivate(
    BatchGetWorkflowsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue BatchGetWorkflows response element from \a xml.
 */
void BatchGetWorkflowsResponsePrivate::parseBatchGetWorkflowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetWorkflowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
