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

#include "createprofilejobresponse.h"
#include "createprofilejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::CreateProfileJobResponse
 * \brief The CreateProfileJobResponse class provides an interace for GlueDataBrew CreateProfileJob responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::createProfileJob
 */

/*!
 * Constructs a CreateProfileJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProfileJobResponse::CreateProfileJobResponse(
        const CreateProfileJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new CreateProfileJobResponsePrivate(this), parent)
{
    setRequest(new CreateProfileJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProfileJobRequest * CreateProfileJobResponse::request() const
{
    Q_D(const CreateProfileJobResponse);
    return static_cast<const CreateProfileJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew CreateProfileJob \a response.
 */
void CreateProfileJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProfileJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::CreateProfileJobResponsePrivate
 * \brief The CreateProfileJobResponsePrivate class provides private implementation for CreateProfileJobResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a CreateProfileJobResponsePrivate object with public implementation \a q.
 */
CreateProfileJobResponsePrivate::CreateProfileJobResponsePrivate(
    CreateProfileJobResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew CreateProfileJob response element from \a xml.
 */
void CreateProfileJobResponsePrivate::parseCreateProfileJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProfileJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
