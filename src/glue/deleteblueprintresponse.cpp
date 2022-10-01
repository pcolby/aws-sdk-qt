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

#include "deleteblueprintresponse.h"
#include "deleteblueprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteBlueprintResponse
 * \brief The DeleteBlueprintResponse class provides an interace for Glue DeleteBlueprint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteBlueprint
 */

/*!
 * Constructs a DeleteBlueprintResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBlueprintResponse::DeleteBlueprintResponse(
        const DeleteBlueprintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteBlueprintResponsePrivate(this), parent)
{
    setRequest(new DeleteBlueprintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBlueprintRequest * DeleteBlueprintResponse::request() const
{
    Q_D(const DeleteBlueprintResponse);
    return static_cast<const DeleteBlueprintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteBlueprint \a response.
 */
void DeleteBlueprintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBlueprintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteBlueprintResponsePrivate
 * \brief The DeleteBlueprintResponsePrivate class provides private implementation for DeleteBlueprintResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteBlueprintResponsePrivate object with public implementation \a q.
 */
DeleteBlueprintResponsePrivate::DeleteBlueprintResponsePrivate(
    DeleteBlueprintResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteBlueprint response element from \a xml.
 */
void DeleteBlueprintResponsePrivate::parseDeleteBlueprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBlueprintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
