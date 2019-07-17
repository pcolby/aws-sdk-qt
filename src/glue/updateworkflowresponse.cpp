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

#include "updateworkflowresponse.h"
#include "updateworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateWorkflowResponse
 * \brief The UpdateWorkflowResponse class provides an interace for Glue UpdateWorkflow responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateWorkflow
 */

/*!
 * Constructs a UpdateWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkflowResponse::UpdateWorkflowResponse(
        const UpdateWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateWorkflowResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkflowRequest * UpdateWorkflowResponse::request() const
{
    Q_D(const UpdateWorkflowResponse);
    return static_cast<const UpdateWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateWorkflow \a response.
 */
void UpdateWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateWorkflowResponsePrivate
 * \brief The UpdateWorkflowResponsePrivate class provides private implementation for UpdateWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateWorkflowResponsePrivate object with public implementation \a q.
 */
UpdateWorkflowResponsePrivate::UpdateWorkflowResponsePrivate(
    UpdateWorkflowResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateWorkflow response element from \a xml.
 */
void UpdateWorkflowResponsePrivate::parseUpdateWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
