// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startworkflowrunresponse.h"
#include "startworkflowrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartWorkflowRunResponse
 * \brief The StartWorkflowRunResponse class provides an interace for Glue StartWorkflowRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startWorkflowRun
 */

/*!
 * Constructs a StartWorkflowRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartWorkflowRunResponse::StartWorkflowRunResponse(
        const StartWorkflowRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartWorkflowRunResponsePrivate(this), parent)
{
    setRequest(new StartWorkflowRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartWorkflowRunRequest * StartWorkflowRunResponse::request() const
{
    Q_D(const StartWorkflowRunResponse);
    return static_cast<const StartWorkflowRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartWorkflowRun \a response.
 */
void StartWorkflowRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartWorkflowRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartWorkflowRunResponsePrivate
 * \brief The StartWorkflowRunResponsePrivate class provides private implementation for StartWorkflowRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartWorkflowRunResponsePrivate object with public implementation \a q.
 */
StartWorkflowRunResponsePrivate::StartWorkflowRunResponsePrivate(
    StartWorkflowRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartWorkflowRun response element from \a xml.
 */
void StartWorkflowRunResponsePrivate::parseStartWorkflowRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkflowRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
