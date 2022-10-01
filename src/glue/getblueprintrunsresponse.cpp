// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintrunsresponse.h"
#include "getblueprintrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunsResponse
 * \brief The GetBlueprintRunsResponse class provides an interace for Glue GetBlueprintRuns responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRuns
 */

/*!
 * Constructs a GetBlueprintRunsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlueprintRunsResponse::GetBlueprintRunsResponse(
        const GetBlueprintRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetBlueprintRunsResponsePrivate(this), parent)
{
    setRequest(new GetBlueprintRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlueprintRunsRequest * GetBlueprintRunsResponse::request() const
{
    Q_D(const GetBlueprintRunsResponse);
    return static_cast<const GetBlueprintRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetBlueprintRuns \a response.
 */
void GetBlueprintRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlueprintRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetBlueprintRunsResponsePrivate
 * \brief The GetBlueprintRunsResponsePrivate class provides private implementation for GetBlueprintRunsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunsResponsePrivate object with public implementation \a q.
 */
GetBlueprintRunsResponsePrivate::GetBlueprintRunsResponsePrivate(
    GetBlueprintRunsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetBlueprintRuns response element from \a xml.
 */
void GetBlueprintRunsResponsePrivate::parseGetBlueprintRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlueprintRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
