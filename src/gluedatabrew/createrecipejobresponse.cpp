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

#include "createrecipejobresponse.h"
#include "createrecipejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::CreateRecipeJobResponse
 * \brief The CreateRecipeJobResponse class provides an interace for GlueDataBrew CreateRecipeJob responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::createRecipeJob
 */

/*!
 * Constructs a CreateRecipeJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecipeJobResponse::CreateRecipeJobResponse(
        const CreateRecipeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new CreateRecipeJobResponsePrivate(this), parent)
{
    setRequest(new CreateRecipeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecipeJobRequest * CreateRecipeJobResponse::request() const
{
    Q_D(const CreateRecipeJobResponse);
    return static_cast<const CreateRecipeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew CreateRecipeJob \a response.
 */
void CreateRecipeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecipeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::CreateRecipeJobResponsePrivate
 * \brief The CreateRecipeJobResponsePrivate class provides private implementation for CreateRecipeJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a CreateRecipeJobResponsePrivate object with public implementation \a q.
 */
CreateRecipeJobResponsePrivate::CreateRecipeJobResponsePrivate(
    CreateRecipeJobResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew CreateRecipeJob response element from \a xml.
 */
void CreateRecipeJobResponsePrivate::parseCreateRecipeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecipeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
