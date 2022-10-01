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
