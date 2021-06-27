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

#include "publishreciperesponse.h"
#include "publishreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::PublishRecipeResponse
 * \brief The PublishRecipeResponse class provides an interace for GlueDataBrew PublishRecipe responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::publishRecipe
 */

/*!
 * Constructs a PublishRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
PublishRecipeResponse::PublishRecipeResponse(
        const PublishRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new PublishRecipeResponsePrivate(this), parent)
{
    setRequest(new PublishRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishRecipeRequest * PublishRecipeResponse::request() const
{
    return static_cast<const PublishRecipeRequest *>(GlueDataBrewResponse::request());
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew PublishRecipe \a response.
 */
void PublishRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::PublishRecipeResponsePrivate
 * \brief The PublishRecipeResponsePrivate class provides private implementation for PublishRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a PublishRecipeResponsePrivate object with public implementation \a q.
 */
PublishRecipeResponsePrivate::PublishRecipeResponsePrivate(
    PublishRecipeResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew PublishRecipe response element from \a xml.
 */
void PublishRecipeResponsePrivate::parsePublishRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
