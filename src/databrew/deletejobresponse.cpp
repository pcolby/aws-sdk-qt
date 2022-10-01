// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteJobResponse
 * \brief The DeleteJobResponse class provides an interace for DataBrew DeleteJob responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteJob
 */

/*!
 * Constructs a DeleteJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobResponse::DeleteJobResponse(
        const DeleteJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobRequest * DeleteJobResponse::request() const
{
    Q_D(const DeleteJobResponse);
    return static_cast<const DeleteJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DeleteJob \a response.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteJobResponsePrivate
 * \brief The DeleteJobResponsePrivate class provides private implementation for DeleteJobResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteJobResponsePrivate object with public implementation \a q.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteJob response element from \a xml.
 */
void DeleteJobResponsePrivate::parseDeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
