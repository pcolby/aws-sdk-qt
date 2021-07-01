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

#include "updatereciperesponse.h"
#include "updatereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::UpdateRecipeResponse
 * \brief The UpdateRecipeResponse class provides an interace for GlueDataBrew UpdateRecipe responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::updateRecipe
 */

/*!
 * Constructs a UpdateRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecipeResponse::UpdateRecipeResponse(
        const UpdateRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new UpdateRecipeResponsePrivate(this), parent)
{
    setRequest(new UpdateRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecipeRequest * UpdateRecipeResponse::request() const
{
    Q_D(const UpdateRecipeResponse);
    return static_cast<const UpdateRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew UpdateRecipe \a response.
 */
void UpdateRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::UpdateRecipeResponsePrivate
 * \brief The UpdateRecipeResponsePrivate class provides private implementation for UpdateRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a UpdateRecipeResponsePrivate object with public implementation \a q.
 */
UpdateRecipeResponsePrivate::UpdateRecipeResponsePrivate(
    UpdateRecipeResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew UpdateRecipe response element from \a xml.
 */
void UpdateRecipeResponsePrivate::parseUpdateRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
