// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startexportlabelstaskrunresponse.h"
#include "startexportlabelstaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartExportLabelsTaskRunResponse
 * \brief The StartExportLabelsTaskRunResponse class provides an interace for Glue StartExportLabelsTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startExportLabelsTaskRun
 */

/*!
 * Constructs a StartExportLabelsTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartExportLabelsTaskRunResponse::StartExportLabelsTaskRunResponse(
        const StartExportLabelsTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartExportLabelsTaskRunResponsePrivate(this), parent)
{
    setRequest(new StartExportLabelsTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartExportLabelsTaskRunRequest * StartExportLabelsTaskRunResponse::request() const
{
    Q_D(const StartExportLabelsTaskRunResponse);
    return static_cast<const StartExportLabelsTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartExportLabelsTaskRun \a response.
 */
void StartExportLabelsTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartExportLabelsTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartExportLabelsTaskRunResponsePrivate
 * \brief The StartExportLabelsTaskRunResponsePrivate class provides private implementation for StartExportLabelsTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartExportLabelsTaskRunResponsePrivate object with public implementation \a q.
 */
StartExportLabelsTaskRunResponsePrivate::StartExportLabelsTaskRunResponsePrivate(
    StartExportLabelsTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartExportLabelsTaskRun response element from \a xml.
 */
void StartExportLabelsTaskRunResponsePrivate::parseStartExportLabelsTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExportLabelsTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
