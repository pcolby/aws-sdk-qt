// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishreciperesponse.h"
#include "publishreciperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::PublishRecipeResponse
 * \brief The PublishRecipeResponse class provides an interace for DataBrew PublishRecipe responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::publishRecipe
 */

/*!
 * Constructs a PublishRecipeResponse object for \a reply to \a request, with parent \a parent.
 */
PublishRecipeResponse::PublishRecipeResponse(
        const PublishRecipeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new PublishRecipeResponsePrivate(this), parent)
{
    setRequest(new PublishRecipeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishRecipeRequest * PublishRecipeResponse::request() const
{
    Q_D(const PublishRecipeResponse);
    return static_cast<const PublishRecipeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew PublishRecipe \a response.
 */
void PublishRecipeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishRecipeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::PublishRecipeResponsePrivate
 * \brief The PublishRecipeResponsePrivate class provides private implementation for PublishRecipeResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a PublishRecipeResponsePrivate object with public implementation \a q.
 */
PublishRecipeResponsePrivate::PublishRecipeResponsePrivate(
    PublishRecipeResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew PublishRecipe response element from \a xml.
 */
void PublishRecipeResponsePrivate::parsePublishRecipeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishRecipeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
