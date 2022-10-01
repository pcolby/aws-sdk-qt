// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
