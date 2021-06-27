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

#include "createdatasetresponse.h"
#include "createdatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreateDatasetResponse
 * \brief The CreateDatasetResponse class provides an interace for ForecastService CreateDataset responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createDataset
 */

/*!
 * Constructs a CreateDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetResponse::CreateDatasetResponse(
        const CreateDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new CreateDatasetResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetRequest * CreateDatasetResponse::request() const
{
    return static_cast<const CreateDatasetRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService CreateDataset \a response.
 */
void CreateDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::CreateDatasetResponsePrivate
 * \brief The CreateDatasetResponsePrivate class provides private implementation for CreateDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreateDatasetResponsePrivate object with public implementation \a q.
 */
CreateDatasetResponsePrivate::CreateDatasetResponsePrivate(
    CreateDatasetResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService CreateDataset response element from \a xml.
 */
void CreateDatasetResponsePrivate::parseCreateDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
