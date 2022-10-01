// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
    Q_D(const CreateWorkflowResponse);
    return static_cast<const CreateWorkflowRequest *>(d->request);
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
