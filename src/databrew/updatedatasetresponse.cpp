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

#include "updatedatasetresponse.h"
#include "updatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateDatasetResponse
 * \brief The UpdateDatasetResponse class provides an interace for DataBrew UpdateDataset responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateDataset
 */

/*!
 * Constructs a UpdateDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatasetResponse::UpdateDatasetResponse(
        const UpdateDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new UpdateDatasetResponsePrivate(this), parent)
{
    setRequest(new UpdateDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatasetRequest * UpdateDatasetResponse::request() const
{
    Q_D(const UpdateDatasetResponse);
    return static_cast<const UpdateDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew UpdateDataset \a response.
 */
void UpdateDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::UpdateDatasetResponsePrivate
 * \brief The UpdateDatasetResponsePrivate class provides private implementation for UpdateDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateDatasetResponsePrivate object with public implementation \a q.
 */
UpdateDatasetResponsePrivate::UpdateDatasetResponsePrivate(
    UpdateDatasetResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew UpdateDataset response element from \a xml.
 */
void UpdateDatasetResponsePrivate::parseUpdateDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
