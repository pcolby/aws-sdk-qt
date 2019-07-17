/*
    Copyright 2013-2019 Paul Colby

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

#include "startworkflowrunresponse.h"
#include "startworkflowrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartWorkflowRunResponse
 * \brief The StartWorkflowRunResponse class provides an interace for Glue StartWorkflowRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startWorkflowRun
 */

/*!
 * Constructs a StartWorkflowRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartWorkflowRunResponse::StartWorkflowRunResponse(
        const StartWorkflowRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartWorkflowRunResponsePrivate(this), parent)
{
    setRequest(new StartWorkflowRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartWorkflowRunRequest * StartWorkflowRunResponse::request() const
{
    Q_D(const StartWorkflowRunResponse);
    return static_cast<const StartWorkflowRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartWorkflowRun \a response.
 */
void StartWorkflowRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartWorkflowRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartWorkflowRunResponsePrivate
 * \brief The StartWorkflowRunResponsePrivate class provides private implementation for StartWorkflowRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartWorkflowRunResponsePrivate object with public implementation \a q.
 */
StartWorkflowRunResponsePrivate::StartWorkflowRunResponsePrivate(
    StartWorkflowRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartWorkflowRun response element from \a xml.
 */
void StartWorkflowRunResponsePrivate::parseStartWorkflowRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkflowRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
