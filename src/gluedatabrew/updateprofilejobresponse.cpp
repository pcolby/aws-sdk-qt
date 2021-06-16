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

#include "updateprofilejobresponse.h"
#include "updateprofilejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::UpdateProfileJobResponse
 * \brief The UpdateProfileJobResponse class provides an interace for GlueDataBrew UpdateProfileJob responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::updateProfileJob
 */

/*!
 * Constructs a UpdateProfileJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProfileJobResponse::UpdateProfileJobResponse(
        const UpdateProfileJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new UpdateProfileJobResponsePrivate(this), parent)
{
    setRequest(new UpdateProfileJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProfileJobRequest * UpdateProfileJobResponse::request() const
{
    Q_D(const UpdateProfileJobResponse);
    return static_cast<const UpdateProfileJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew UpdateProfileJob \a response.
 */
void UpdateProfileJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProfileJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::UpdateProfileJobResponsePrivate
 * \brief The UpdateProfileJobResponsePrivate class provides private implementation for UpdateProfileJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a UpdateProfileJobResponsePrivate object with public implementation \a q.
 */
UpdateProfileJobResponsePrivate::UpdateProfileJobResponsePrivate(
    UpdateProfileJobResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew UpdateProfileJob response element from \a xml.
 */
void UpdateProfileJobResponsePrivate::parseUpdateProfileJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProfileJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
