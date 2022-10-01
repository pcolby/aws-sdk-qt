// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
