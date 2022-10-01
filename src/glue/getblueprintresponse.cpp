// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getblueprintresponse.h"
#include "getblueprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintResponse
 * \brief The GetBlueprintResponse class provides an interace for Glue GetBlueprint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprint
 */

/*!
 * Constructs a GetBlueprintResponse object for \a reply to \a request, with parent \a parent.
 */
GetBlueprintResponse::GetBlueprintResponse(
        const GetBlueprintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetBlueprintResponsePrivate(this), parent)
{
    setRequest(new GetBlueprintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBlueprintRequest * GetBlueprintResponse::request() const
{
    Q_D(const GetBlueprintResponse);
    return static_cast<const GetBlueprintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetBlueprint \a response.
 */
void GetBlueprintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBlueprintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetBlueprintResponsePrivate
 * \brief The GetBlueprintResponsePrivate class provides private implementation for GetBlueprintResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintResponsePrivate object with public implementation \a q.
 */
GetBlueprintResponsePrivate::GetBlueprintResponsePrivate(
    GetBlueprintResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetBlueprint response element from \a xml.
 */
void GetBlueprintResponsePrivate::parseGetBlueprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlueprintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
