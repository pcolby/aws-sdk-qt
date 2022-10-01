// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startblueprintrunresponse.h"
#include "startblueprintrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartBlueprintRunResponse
 * \brief The StartBlueprintRunResponse class provides an interace for Glue StartBlueprintRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startBlueprintRun
 */

/*!
 * Constructs a StartBlueprintRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartBlueprintRunResponse::StartBlueprintRunResponse(
        const StartBlueprintRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartBlueprintRunResponsePrivate(this), parent)
{
    setRequest(new StartBlueprintRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartBlueprintRunRequest * StartBlueprintRunResponse::request() const
{
    Q_D(const StartBlueprintRunResponse);
    return static_cast<const StartBlueprintRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartBlueprintRun \a response.
 */
void StartBlueprintRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartBlueprintRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartBlueprintRunResponsePrivate
 * \brief The StartBlueprintRunResponsePrivate class provides private implementation for StartBlueprintRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartBlueprintRunResponsePrivate object with public implementation \a q.
 */
StartBlueprintRunResponsePrivate::StartBlueprintRunResponsePrivate(
    StartBlueprintRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartBlueprintRun response element from \a xml.
 */
void StartBlueprintRunResponsePrivate::parseStartBlueprintRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartBlueprintRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
