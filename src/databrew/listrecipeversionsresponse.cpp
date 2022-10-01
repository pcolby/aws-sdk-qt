// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecipeversionsresponse.h"
#include "listrecipeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListRecipeVersionsResponse
 * \brief The ListRecipeVersionsResponse class provides an interace for DataBrew ListRecipeVersions responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listRecipeVersions
 */

/*!
 * Constructs a ListRecipeVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecipeVersionsResponse::ListRecipeVersionsResponse(
        const ListRecipeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new ListRecipeVersionsResponsePrivate(this), parent)
{
    setRequest(new ListRecipeVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecipeVersionsRequest * ListRecipeVersionsResponse::request() const
{
    Q_D(const ListRecipeVersionsResponse);
    return static_cast<const ListRecipeVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew ListRecipeVersions \a response.
 */
void ListRecipeVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecipeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::ListRecipeVersionsResponsePrivate
 * \brief The ListRecipeVersionsResponsePrivate class provides private implementation for ListRecipeVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListRecipeVersionsResponsePrivate object with public implementation \a q.
 */
ListRecipeVersionsResponsePrivate::ListRecipeVersionsResponsePrivate(
    ListRecipeVersionsResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew ListRecipeVersions response element from \a xml.
 */
void ListRecipeVersionsResponsePrivate::parseListRecipeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecipeVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
