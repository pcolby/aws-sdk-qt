// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectresponse.h"
#include "deleteprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteProjectResponse
 * \brief The DeleteProjectResponse class provides an interace for DataBrew DeleteProject responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteProject
 */

/*!
 * Constructs a DeleteProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProjectResponse::DeleteProjectResponse(
        const DeleteProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteProjectResponsePrivate(this), parent)
{
    setRequest(new DeleteProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProjectRequest * DeleteProjectResponse::request() const
{
    Q_D(const DeleteProjectResponse);
    return static_cast<const DeleteProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DeleteProject \a response.
 */
void DeleteProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteProjectResponsePrivate
 * \brief The DeleteProjectResponsePrivate class provides private implementation for DeleteProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteProjectResponsePrivate object with public implementation \a q.
 */
DeleteProjectResponsePrivate::DeleteProjectResponsePrivate(
    DeleteProjectResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteProject response element from \a xml.
 */
void DeleteProjectResponsePrivate::parseDeleteProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
