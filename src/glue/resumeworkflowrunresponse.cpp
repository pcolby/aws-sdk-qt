// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeworkflowrunresponse.h"
#include "resumeworkflowrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResumeWorkflowRunResponse
 * \brief The ResumeWorkflowRunResponse class provides an interace for Glue ResumeWorkflowRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::resumeWorkflowRun
 */

/*!
 * Constructs a ResumeWorkflowRunResponse object for \a reply to \a request, with parent \a parent.
 */
ResumeWorkflowRunResponse::ResumeWorkflowRunResponse(
        const ResumeWorkflowRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ResumeWorkflowRunResponsePrivate(this), parent)
{
    setRequest(new ResumeWorkflowRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResumeWorkflowRunRequest * ResumeWorkflowRunResponse::request() const
{
    Q_D(const ResumeWorkflowRunResponse);
    return static_cast<const ResumeWorkflowRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ResumeWorkflowRun \a response.
 */
void ResumeWorkflowRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResumeWorkflowRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ResumeWorkflowRunResponsePrivate
 * \brief The ResumeWorkflowRunResponsePrivate class provides private implementation for ResumeWorkflowRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResumeWorkflowRunResponsePrivate object with public implementation \a q.
 */
ResumeWorkflowRunResponsePrivate::ResumeWorkflowRunResponsePrivate(
    ResumeWorkflowRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ResumeWorkflowRun response element from \a xml.
 */
void ResumeWorkflowRunResponsePrivate::parseResumeWorkflowRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResumeWorkflowRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
