// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintrunresponse.h"
#include "getblueprintrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunResponse
 * \brief The GetBlueprintRunResponse class provides an interace for Glue GetBlueprintRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRun
 */

/*!
 * Constructs a GetBlueprintRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlueprintRunResponse::GetBlueprintRunResponse(
        const GetBlueprintRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetBlueprintRunResponsePrivate(this), parent)
{
    setRequest(new GetBlueprintRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlueprintRunRequest * GetBlueprintRunResponse::request() const
{
    Q_D(const GetBlueprintRunResponse);
    return static_cast<const GetBlueprintRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetBlueprintRun \a response.
 */
void GetBlueprintRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlueprintRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetBlueprintRunResponsePrivate
 * \brief The GetBlueprintRunResponsePrivate class provides private implementation for GetBlueprintRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunResponsePrivate object with public implementation \a q.
 */
GetBlueprintRunResponsePrivate::GetBlueprintRunResponsePrivate(
    GetBlueprintRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetBlueprintRun response element from \a xml.
 */
void GetBlueprintRunResponsePrivate::parseGetBlueprintRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlueprintRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
