// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
