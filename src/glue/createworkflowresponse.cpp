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

#include "createworkflowresponse.h"
#include "createworkflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateWorkflowResponse
 * \brief The CreateWorkflowResponse class provides an interace for Glue CreateWorkflow responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createWorkflow
 */

/*!
 * Constructs a CreateWorkflowResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkflowResponse::CreateWorkflowResponse(
        const CreateWorkflowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateWorkflowResponsePrivate(this), parent)
{
    setRequest(new CreateWorkflowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkflowRequest * CreateWorkflowResponse::request() const
{
    return static_cast<const CreateWorkflowRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue CreateWorkflow \a response.
 */
void CreateWorkflowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkflowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateWorkflowResponsePrivate
 * \brief The CreateWorkflowResponsePrivate class provides private implementation for CreateWorkflowResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateWorkflowResponsePrivate object with public implementation \a q.
 */
CreateWorkflowResponsePrivate::CreateWorkflowResponsePrivate(
    CreateWorkflowResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateWorkflow response element from \a xml.
 */
void CreateWorkflowResponsePrivate::parseCreateWorkflowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkflowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
