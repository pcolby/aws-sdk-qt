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

#include "getworkflowresponse.h"
#include "getworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowResponse
 * \brief The GetWorkflowResponse class provides an interace for Glue GetWorkflow responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getWorkflow
 */

/*!
 * Constructs a GetWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowResponse::GetWorkflowResponse(
        const GetWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetWorkflowResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRequest * GetWorkflowResponse::request() const
{
    Q_D(const GetWorkflowResponse);
    return static_cast<const GetWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetWorkflow \a response.
 */
void GetWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetWorkflowResponsePrivate
 * \brief The GetWorkflowResponsePrivate class provides private implementation for GetWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowResponsePrivate object with public implementation \a q.
 */
GetWorkflowResponsePrivate::GetWorkflowResponsePrivate(
    GetWorkflowResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetWorkflow response element from \a xml.
 */
void GetWorkflowResponsePrivate::parseGetWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
