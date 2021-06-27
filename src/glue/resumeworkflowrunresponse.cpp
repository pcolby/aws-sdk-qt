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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    return static_cast<const ResumeWorkflowRunRequest *>(GlueResponse::request());
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
