// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowrunsresponse.h"
#include "getworkflowrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunsResponse
 * \brief The GetWorkflowRunsResponse class provides an interace for Glue GetWorkflowRuns responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getWorkflowRuns
 */

/*!
 * Constructs a GetWorkflowRunsResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowRunsResponse::GetWorkflowRunsResponse(
        const GetWorkflowRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetWorkflowRunsResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRunsRequest * GetWorkflowRunsResponse::request() const
{
    Q_D(const GetWorkflowRunsResponse);
    return static_cast<const GetWorkflowRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetWorkflowRuns \a response.
 */
void GetWorkflowRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetWorkflowRunsResponsePrivate
 * \brief The GetWorkflowRunsResponsePrivate class provides private implementation for GetWorkflowRunsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunsResponsePrivate object with public implementation \a q.
 */
GetWorkflowRunsResponsePrivate::GetWorkflowRunsResponsePrivate(
    GetWorkflowRunsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetWorkflowRuns response element from \a xml.
 */
void GetWorkflowRunsResponsePrivate::parseGetWorkflowRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
