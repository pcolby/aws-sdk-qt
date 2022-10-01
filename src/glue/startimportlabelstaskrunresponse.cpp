// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportlabelstaskrunresponse.h"
#include "startimportlabelstaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunResponse
 * \brief The StartImportLabelsTaskRunResponse class provides an interace for Glue StartImportLabelsTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startImportLabelsTaskRun
 */

/*!
 * Constructs a StartImportLabelsTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportLabelsTaskRunResponse::StartImportLabelsTaskRunResponse(
        const StartImportLabelsTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartImportLabelsTaskRunResponsePrivate(this), parent)
{
    setRequest(new StartImportLabelsTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImportLabelsTaskRunRequest * StartImportLabelsTaskRunResponse::request() const
{
    Q_D(const StartImportLabelsTaskRunResponse);
    return static_cast<const StartImportLabelsTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartImportLabelsTaskRun \a response.
 */
void StartImportLabelsTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportLabelsTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartImportLabelsTaskRunResponsePrivate
 * \brief The StartImportLabelsTaskRunResponsePrivate class provides private implementation for StartImportLabelsTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartImportLabelsTaskRunResponsePrivate object with public implementation \a q.
 */
StartImportLabelsTaskRunResponsePrivate::StartImportLabelsTaskRunResponsePrivate(
    StartImportLabelsTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartImportLabelsTaskRun response element from \a xml.
 */
void StartImportLabelsTaskRunResponsePrivate::parseStartImportLabelsTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportLabelsTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
