// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopworkflowrunresponse.h"
#include "stopworkflowrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopWorkflowRunResponse
 * \brief The StopWorkflowRunResponse class provides an interace for Glue StopWorkflowRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopWorkflowRun
 */

/*!
 * Constructs a StopWorkflowRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopWorkflowRunResponse::StopWorkflowRunResponse(
        const StopWorkflowRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopWorkflowRunResponsePrivate(this), parent)
{
    setRequest(new StopWorkflowRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopWorkflowRunRequest * StopWorkflowRunResponse::request() const
{
    Q_D(const StopWorkflowRunResponse);
    return static_cast<const StopWorkflowRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopWorkflowRun \a response.
 */
void StopWorkflowRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopWorkflowRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopWorkflowRunResponsePrivate
 * \brief The StopWorkflowRunResponsePrivate class provides private implementation for StopWorkflowRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopWorkflowRunResponsePrivate object with public implementation \a q.
 */
StopWorkflowRunResponsePrivate::StopWorkflowRunResponsePrivate(
    StopWorkflowRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopWorkflowRun response element from \a xml.
 */
void StopWorkflowRunResponsePrivate::parseStopWorkflowRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopWorkflowRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
