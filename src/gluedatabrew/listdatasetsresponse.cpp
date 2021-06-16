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

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::ListDatasetsResponse
 * \brief The ListDatasetsResponse class provides an interace for GlueDataBrew ListDatasets responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::listDatasets
 */

/*!
 * Constructs a ListDatasetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetsResponse::ListDatasetsResponse(
        const ListDatasetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new ListDatasetsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetsRequest * ListDatasetsResponse::request() const
{
    Q_D(const ListDatasetsResponse);
    return static_cast<const ListDatasetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew ListDatasets \a response.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::ListDatasetsResponsePrivate
 * \brief The ListDatasetsResponsePrivate class provides private implementation for ListDatasetsResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a ListDatasetsResponsePrivate object with public implementation \a q.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew ListDatasets response element from \a xml.
 */
void ListDatasetsResponsePrivate::parseListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
