// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
