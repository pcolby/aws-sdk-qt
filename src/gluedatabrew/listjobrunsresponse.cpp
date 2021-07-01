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

#include "listjobrunsresponse.h"
#include "listjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::ListJobRunsResponse
 * \brief The ListJobRunsResponse class provides an interace for GlueDataBrew ListJobRuns responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::listJobRuns
 */

/*!
 * Constructs a ListJobRunsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobRunsResponse::ListJobRunsResponse(
        const ListJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new ListJobRunsResponsePrivate(this), parent)
{
    setRequest(new ListJobRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobRunsRequest * ListJobRunsResponse::request() const
{
    Q_D(const ListJobRunsResponse);
    return static_cast<const ListJobRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew ListJobRuns \a response.
 */
void ListJobRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::ListJobRunsResponsePrivate
 * \brief The ListJobRunsResponsePrivate class provides private implementation for ListJobRunsResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a ListJobRunsResponsePrivate object with public implementation \a q.
 */
ListJobRunsResponsePrivate::ListJobRunsResponsePrivate(
    ListJobRunsResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew ListJobRuns response element from \a xml.
 */
void ListJobRunsResponsePrivate::parseListJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
