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

#include "updateblueprintresponse.h"
#include "updateblueprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateBlueprintResponse
 * \brief The UpdateBlueprintResponse class provides an interace for Glue UpdateBlueprint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateBlueprint
 */

/*!
 * Constructs a UpdateBlueprintResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBlueprintResponse::UpdateBlueprintResponse(
        const UpdateBlueprintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateBlueprintResponsePrivate(this), parent)
{
    setRequest(new UpdateBlueprintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBlueprintRequest * UpdateBlueprintResponse::request() const
{
    Q_D(const UpdateBlueprintResponse);
    return static_cast<const UpdateBlueprintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateBlueprint \a response.
 */
void UpdateBlueprintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBlueprintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateBlueprintResponsePrivate
 * \brief The UpdateBlueprintResponsePrivate class provides private implementation for UpdateBlueprintResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateBlueprintResponsePrivate object with public implementation \a q.
 */
UpdateBlueprintResponsePrivate::UpdateBlueprintResponsePrivate(
    UpdateBlueprintResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateBlueprint response element from \a xml.
 */
void UpdateBlueprintResponsePrivate::parseUpdateBlueprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBlueprintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
