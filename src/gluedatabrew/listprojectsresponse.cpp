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

#include "listprojectsresponse.h"
#include "listprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::ListProjectsResponse
 * \brief The ListProjectsResponse class provides an interace for GlueDataBrew ListProjects responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::listProjects
 */

/*!
 * Constructs a ListProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProjectsResponse::ListProjectsResponse(
        const ListProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new ListProjectsResponsePrivate(this), parent)
{
    setRequest(new ListProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProjectsRequest * ListProjectsResponse::request() const
{
    Q_D(const ListProjectsResponse);
    return static_cast<const ListProjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew ListProjects \a response.
 */
void ListProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::ListProjectsResponsePrivate
 * \brief The ListProjectsResponsePrivate class provides private implementation for ListProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a ListProjectsResponsePrivate object with public implementation \a q.
 */
ListProjectsResponsePrivate::ListProjectsResponsePrivate(
    ListProjectsResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew ListProjects response element from \a xml.
 */
void ListProjectsResponsePrivate::parseListProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
