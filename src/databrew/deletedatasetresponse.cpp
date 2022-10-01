// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteDatasetResponse
 * \brief The DeleteDatasetResponse class provides an interace for DataBrew DeleteDataset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteDataset
 */

/*!
 * Constructs a DeleteDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetResponse::DeleteDatasetResponse(
        const DeleteDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new DeleteDatasetResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetRequest * DeleteDatasetResponse::request() const
{
    Q_D(const DeleteDatasetResponse);
    return static_cast<const DeleteDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew DeleteDataset \a response.
 */
void DeleteDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::DeleteDatasetResponsePrivate
 * \brief The DeleteDatasetResponsePrivate class provides private implementation for DeleteDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteDatasetResponsePrivate object with public implementation \a q.
 */
DeleteDatasetResponsePrivate::DeleteDatasetResponsePrivate(
    DeleteDatasetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew DeleteDataset response element from \a xml.
 */
void DeleteDatasetResponsePrivate::parseDeleteDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
