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

#include "deleterecipeversionresponse.h"
#include "deleterecipeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DeleteRecipeVersionResponse
 * \brief The DeleteRecipeVersionResponse class provides an interace for GlueDataBrew DeleteRecipeVersion responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::deleteRecipeVersion
 */

/*!
 * Constructs a DeleteRecipeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecipeVersionResponse::DeleteRecipeVersionResponse(
        const DeleteRecipeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new DeleteRecipeVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteRecipeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecipeVersionRequest * DeleteRecipeVersionResponse::request() const
{
    Q_D(const DeleteRecipeVersionResponse);
    return static_cast<const DeleteRecipeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew DeleteRecipeVersion \a response.
 */
void DeleteRecipeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecipeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::DeleteRecipeVersionResponsePrivate
 * \brief The DeleteRecipeVersionResponsePrivate class provides private implementation for DeleteRecipeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DeleteRecipeVersionResponsePrivate object with public implementation \a q.
 */
DeleteRecipeVersionResponsePrivate::DeleteRecipeVersionResponsePrivate(
    DeleteRecipeVersionResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew DeleteRecipeVersion response element from \a xml.
 */
void DeleteRecipeVersionResponsePrivate::parseDeleteRecipeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecipeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
