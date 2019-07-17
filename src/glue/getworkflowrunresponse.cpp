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

#include "getworkflowrunresponse.h"
#include "getworkflowrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunResponse
 * \brief The GetWorkflowRunResponse class provides an interace for Glue GetWorkflowRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getWorkflowRun
 */

/*!
 * Constructs a GetWorkflowRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowRunResponse::GetWorkflowRunResponse(
        const GetWorkflowRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetWorkflowRunResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRunRequest * GetWorkflowRunResponse::request() const
{
    Q_D(const GetWorkflowRunResponse);
    return static_cast<const GetWorkflowRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetWorkflowRun \a response.
 */
void GetWorkflowRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetWorkflowRunResponsePrivate
 * \brief The GetWorkflowRunResponsePrivate class provides private implementation for GetWorkflowRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunResponsePrivate object with public implementation \a q.
 */
GetWorkflowRunResponsePrivate::GetWorkflowRunResponsePrivate(
    GetWorkflowRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetWorkflowRun response element from \a xml.
 */
void GetWorkflowRunResponsePrivate::parseGetWorkflowRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
