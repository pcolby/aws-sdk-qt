// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetimportjobresponse.h"
#include "deletedatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetImportJobResponse
 * \brief The DeleteDatasetImportJobResponse class provides an interace for Forecast DeleteDatasetImportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDatasetImportJob
 */

/*!
 * Constructs a DeleteDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetImportJobResponse::DeleteDatasetImportJobResponse(
        const DeleteDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetImportJobRequest * DeleteDatasetImportJobResponse::request() const
{
    Q_D(const DeleteDatasetImportJobResponse);
    return static_cast<const DeleteDatasetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteDatasetImportJob \a response.
 */
void DeleteDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteDatasetImportJobResponsePrivate
 * \brief The DeleteDatasetImportJobResponsePrivate class provides private implementation for DeleteDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetImportJobResponsePrivate object with public implementation \a q.
 */
DeleteDatasetImportJobResponsePrivate::DeleteDatasetImportJobResponsePrivate(
    DeleteDatasetImportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteDatasetImportJob response element from \a xml.
 */
void DeleteDatasetImportJobResponsePrivate::parseDeleteDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
