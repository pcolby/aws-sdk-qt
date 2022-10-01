// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmllabelingsetgenerationtaskrunresponse.h"
#include "startmllabelingsetgenerationtaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartMLLabelingSetGenerationTaskRunResponse
 * \brief The StartMLLabelingSetGenerationTaskRunResponse class provides an interace for Glue StartMLLabelingSetGenerationTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startMLLabelingSetGenerationTaskRun
 */

/*!
 * Constructs a StartMLLabelingSetGenerationTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartMLLabelingSetGenerationTaskRunResponse::StartMLLabelingSetGenerationTaskRunResponse(
        const StartMLLabelingSetGenerationTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartMLLabelingSetGenerationTaskRunResponsePrivate(this), parent)
{
    setRequest(new StartMLLabelingSetGenerationTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMLLabelingSetGenerationTaskRunRequest * StartMLLabelingSetGenerationTaskRunResponse::request() const
{
    Q_D(const StartMLLabelingSetGenerationTaskRunResponse);
    return static_cast<const StartMLLabelingSetGenerationTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartMLLabelingSetGenerationTaskRun \a response.
 */
void StartMLLabelingSetGenerationTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMLLabelingSetGenerationTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartMLLabelingSetGenerationTaskRunResponsePrivate
 * \brief The StartMLLabelingSetGenerationTaskRunResponsePrivate class provides private implementation for StartMLLabelingSetGenerationTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartMLLabelingSetGenerationTaskRunResponsePrivate object with public implementation \a q.
 */
StartMLLabelingSetGenerationTaskRunResponsePrivate::StartMLLabelingSetGenerationTaskRunResponsePrivate(
    StartMLLabelingSetGenerationTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartMLLabelingSetGenerationTaskRun response element from \a xml.
 */
void StartMLLabelingSetGenerationTaskRunResponsePrivate::parseStartMLLabelingSetGenerationTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMLLabelingSetGenerationTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
