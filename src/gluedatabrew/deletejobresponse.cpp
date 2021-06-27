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

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DeleteJobResponse
 * \brief The DeleteJobResponse class provides an interace for GlueDataBrew DeleteJob responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::deleteJob
 */

/*!
 * Constructs a DeleteJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobResponse::DeleteJobResponse(
        const DeleteJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobRequest * DeleteJobResponse::request() const
{
    return static_cast<const DeleteJobRequest *>(GlueDataBrewResponse::request());
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew DeleteJob \a response.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::DeleteJobResponsePrivate
 * \brief The DeleteJobResponsePrivate class provides private implementation for DeleteJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DeleteJobResponsePrivate object with public implementation \a q.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew DeleteJob response element from \a xml.
 */
void DeleteJobResponsePrivate::parseDeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
