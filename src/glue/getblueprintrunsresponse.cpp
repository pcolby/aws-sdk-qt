/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
