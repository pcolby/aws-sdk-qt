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

#include "createprojectresponse.h"
#include "createprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::CreateProjectResponse
 * \brief The CreateProjectResponse class provides an interace for GlueDataBrew CreateProject responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::createProject
 */

/*!
 * Constructs a CreateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProjectResponse::CreateProjectResponse(
        const CreateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new CreateProjectResponsePrivate(this), parent)
{
    setRequest(new CreateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProjectRequest * CreateProjectResponse::request() const
{
    return static_cast<const CreateProjectRequest *>(GlueDataBrewResponse::request());
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew CreateProject \a response.
 */
void CreateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::CreateProjectResponsePrivate
 * \brief The CreateProjectResponsePrivate class provides private implementation for CreateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a CreateProjectResponsePrivate object with public implementation \a q.
 */
CreateProjectResponsePrivate::CreateProjectResponsePrivate(
    CreateProjectResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew CreateProject response element from \a xml.
 */
void CreateProjectResponsePrivate::parseCreateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
