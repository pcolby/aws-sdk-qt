// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecipeversionresponse.h"
#include "deleterecipeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteRecipeVersionResponse
 * \brief The DeleteRecipeVersionResponse class provides an interace for DataBrew DeleteRecipeVersion responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteRecipeVersion
 */

/*!
 * Constructs a DeleteRecipeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecipeVersionResponse::DeleteRecipeVersionResponse(
        const DeleteRecipeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteRecipeVersionResponsePrivate(this), parent)
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
 * Parses a successful DataBrew DeleteRecipeVersion \a response.
 */
void DeleteRecipeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecipeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteRecipeVersionResponsePrivate
 * \brief The DeleteRecipeVersionResponsePrivate class provides private implementation for DeleteRecipeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteRecipeVersionResponsePrivate object with public implementation \a q.
 */
DeleteRecipeVersionResponsePrivate::DeleteRecipeVersionResponsePrivate(
    DeleteRecipeVersionResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteRecipeVersion response element from \a xml.
 */
void DeleteRecipeVersionResponsePrivate::parseDeleteRecipeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecipeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
