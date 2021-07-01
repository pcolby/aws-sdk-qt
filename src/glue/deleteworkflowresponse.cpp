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

#include "deleteworkflowresponse.h"
#include "deleteworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteWorkflowResponse
 * \brief The DeleteWorkflowResponse class provides an interace for Glue DeleteWorkflow responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteWorkflow
 */

/*!
 * Constructs a DeleteWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkflowResponse::DeleteWorkflowResponse(
        const DeleteWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteWorkflowResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkflowRequest * DeleteWorkflowResponse::request() const
{
    Q_D(const DeleteWorkflowResponse);
    return static_cast<const DeleteWorkflowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteWorkflow \a response.
 */
void DeleteWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteWorkflowResponsePrivate
 * \brief The DeleteWorkflowResponsePrivate class provides private implementation for DeleteWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteWorkflowResponsePrivate object with public implementation \a q.
 */
DeleteWorkflowResponsePrivate::DeleteWorkflowResponsePrivate(
    DeleteWorkflowResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteWorkflow response element from \a xml.
 */
void DeleteWorkflowResponsePrivate::parseDeleteWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
