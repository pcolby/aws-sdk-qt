// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereciperesponse.h"
#include "updatereciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRecipeResponse
 * \brief The UpdateRecipeResponse class provides an interace for DataBrew UpdateRecipe responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRecipe
 */

/*!
 * Constructs a UpdateRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecipeResponse::UpdateRecipeResponse(
        const UpdateRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new UpdateRecipeResponsePrivate(this), parent)
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
 * Parses a successful DataBrew UpdateRecipe \a response.
 */
void UpdateRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::UpdateRecipeResponsePrivate
 * \brief The UpdateRecipeResponsePrivate class provides private implementation for UpdateRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRecipeResponsePrivate object with public implementation \a q.
 */
UpdateRecipeResponsePrivate::UpdateRecipeResponsePrivate(
    UpdateRecipeResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew UpdateRecipe response element from \a xml.
 */
void UpdateRecipeResponsePrivate::parseUpdateRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
