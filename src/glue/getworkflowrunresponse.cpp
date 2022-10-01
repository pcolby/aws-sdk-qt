// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
