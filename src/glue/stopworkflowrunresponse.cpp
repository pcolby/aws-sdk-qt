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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
