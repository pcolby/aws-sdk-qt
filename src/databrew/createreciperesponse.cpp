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

#include "createreciperesponse.h"
#include "createreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRecipeResponse
 * \brief The CreateRecipeResponse class provides an interace for DataBrew CreateRecipe responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRecipe
 */

/*!
 * Constructs a CreateRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecipeResponse::CreateRecipeResponse(
        const CreateRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new CreateRecipeResponsePrivate(this), parent)
{
    setRequest(new CreateRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecipeRequest * CreateRecipeResponse::request() const
{
    Q_D(const CreateRecipeResponse);
    return static_cast<const CreateRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew CreateRecipe \a response.
 */
void CreateRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::CreateRecipeResponsePrivate
 * \brief The CreateRecipeResponsePrivate class provides private implementation for CreateRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRecipeResponsePrivate object with public implementation \a q.
 */
CreateRecipeResponsePrivate::CreateRecipeResponsePrivate(
    CreateRecipeResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew CreateRecipe response element from \a xml.
 */
void CreateRecipeResponsePrivate::parseCreateRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
