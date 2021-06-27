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

#include "deletedatasetimportjobresponse.h"
#include "deletedatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeleteDatasetImportJobResponse
 * \brief The DeleteDatasetImportJobResponse class provides an interace for ForecastService DeleteDatasetImportJob responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deleteDatasetImportJob
 */

/*!
 * Constructs a DeleteDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetImportJobResponse::DeleteDatasetImportJobResponse(
        const DeleteDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DeleteDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetImportJobRequest * DeleteDatasetImportJobResponse::request() const
{
    return static_cast<const DeleteDatasetImportJobRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService DeleteDatasetImportJob \a response.
 */
void DeleteDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DeleteDatasetImportJobResponsePrivate
 * \brief The DeleteDatasetImportJobResponsePrivate class provides private implementation for DeleteDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeleteDatasetImportJobResponsePrivate object with public implementation \a q.
 */
DeleteDatasetImportJobResponsePrivate::DeleteDatasetImportJobResponsePrivate(
    DeleteDatasetImportJobResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DeleteDatasetImportJob response element from \a xml.
 */
void DeleteDatasetImportJobResponsePrivate::parseDeleteDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
