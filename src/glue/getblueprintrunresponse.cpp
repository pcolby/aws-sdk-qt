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
