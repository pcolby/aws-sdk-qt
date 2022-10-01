// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleterecipeversionresponse.h"
#include "batchdeleterecipeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionResponse
 * \brief The BatchDeleteRecipeVersionResponse class provides an interace for DataBrew BatchDeleteRecipeVersion responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::batchDeleteRecipeVersion
 */

/*!
 * Constructs a BatchDeleteRecipeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteRecipeVersionResponse::BatchDeleteRecipeVersionResponse(
        const BatchDeleteRecipeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new BatchDeleteRecipeVersionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteRecipeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteRecipeVersionRequest * BatchDeleteRecipeVersionResponse::request() const
{
    Q_D(const BatchDeleteRecipeVersionResponse);
    return static_cast<const BatchDeleteRecipeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew BatchDeleteRecipeVersion \a response.
 */
void BatchDeleteRecipeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteRecipeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionResponsePrivate
 * \brief The BatchDeleteRecipeVersionResponsePrivate class provides private implementation for BatchDeleteRecipeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a BatchDeleteRecipeVersionResponsePrivate object with public implementation \a q.
 */
BatchDeleteRecipeVersionResponsePrivate::BatchDeleteRecipeVersionResponsePrivate(
    BatchDeleteRecipeVersionResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew BatchDeleteRecipeVersion response element from \a xml.
 */
void BatchDeleteRecipeVersionResponsePrivate::parseBatchDeleteRecipeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteRecipeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
