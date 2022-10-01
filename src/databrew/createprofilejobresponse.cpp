// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprofilejobresponse.h"
#include "createprofilejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateProfileJobResponse
 * \brief The CreateProfileJobResponse class provides an interace for DataBrew CreateProfileJob responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createProfileJob
 */

/*!
 * Constructs a CreateProfileJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProfileJobResponse::CreateProfileJobResponse(
        const CreateProfileJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new CreateProfileJobResponsePrivate(this), parent)
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
 * Parses a successful DataBrew CreateProfileJob \a response.
 */
void CreateProfileJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProfileJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::CreateProfileJobResponsePrivate
 * \brief The CreateProfileJobResponsePrivate class provides private implementation for CreateProfileJobResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateProfileJobResponsePrivate object with public implementation \a q.
 */
CreateProfileJobResponsePrivate::CreateProfileJobResponsePrivate(
    CreateProfileJobResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew CreateProfileJob response element from \a xml.
 */
void CreateProfileJobResponsePrivate::parseCreateProfileJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProfileJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
