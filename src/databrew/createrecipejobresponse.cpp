// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrecipejobresponse.h"
#include "createrecipejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRecipeJobResponse
 * \brief The CreateRecipeJobResponse class provides an interace for DataBrew CreateRecipeJob responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRecipeJob
 */

/*!
 * Constructs a CreateRecipeJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecipeJobResponse::CreateRecipeJobResponse(
        const CreateRecipeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new CreateRecipeJobResponsePrivate(this), parent)
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
 * Parses a successful DataBrew CreateRecipeJob \a response.
 */
void CreateRecipeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecipeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::CreateRecipeJobResponsePrivate
 * \brief The CreateRecipeJobResponsePrivate class provides private implementation for CreateRecipeJobResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRecipeJobResponsePrivate object with public implementation \a q.
 */
CreateRecipeJobResponsePrivate::CreateRecipeJobResponsePrivate(
    CreateRecipeJobResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew CreateRecipeJob response element from \a xml.
 */
void CreateRecipeJobResponsePrivate::parseCreateRecipeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecipeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
