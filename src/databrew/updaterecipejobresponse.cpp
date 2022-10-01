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

#include "updaterecipejobresponse.h"
#include "updaterecipejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRecipeJobResponse
 * \brief The UpdateRecipeJobResponse class provides an interace for DataBrew UpdateRecipeJob responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRecipeJob
 */

/*!
 * Constructs a UpdateRecipeJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecipeJobResponse::UpdateRecipeJobResponse(
        const UpdateRecipeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new UpdateRecipeJobResponsePrivate(this), parent)
{
    setRequest(new UpdateRecipeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecipeJobRequest * UpdateRecipeJobResponse::request() const
{
    Q_D(const UpdateRecipeJobResponse);
    return static_cast<const UpdateRecipeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew UpdateRecipeJob \a response.
 */
void UpdateRecipeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecipeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::UpdateRecipeJobResponsePrivate
 * \brief The UpdateRecipeJobResponsePrivate class provides private implementation for UpdateRecipeJobResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRecipeJobResponsePrivate object with public implementation \a q.
 */
UpdateRecipeJobResponsePrivate::UpdateRecipeJobResponsePrivate(
    UpdateRecipeJobResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew UpdateRecipeJob response element from \a xml.
 */
void UpdateRecipeJobResponsePrivate::parseUpdateRecipeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecipeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
