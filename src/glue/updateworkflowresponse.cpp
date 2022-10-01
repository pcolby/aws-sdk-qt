// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
