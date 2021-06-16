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

#include "deletepredictorresponse.h"
#include "deletepredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeletePredictorResponse
 * \brief The DeletePredictorResponse class provides an interace for ForecastService DeletePredictor responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deletePredictor
 */

/*!
 * Constructs a DeletePredictorResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePredictorResponse::DeletePredictorResponse(
        const DeletePredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DeletePredictorResponsePrivate(this), parent)
{
    setRequest(new DeletePredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePredictorRequest * DeletePredictorResponse::request() const
{
    Q_D(const DeletePredictorResponse);
    return static_cast<const DeletePredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService DeletePredictor \a response.
 */
void DeletePredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DeletePredictorResponsePrivate
 * \brief The DeletePredictorResponsePrivate class provides private implementation for DeletePredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeletePredictorResponsePrivate object with public implementation \a q.
 */
DeletePredictorResponsePrivate::DeletePredictorResponsePrivate(
    DeletePredictorResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DeletePredictor response element from \a xml.
 */
void DeletePredictorResponsePrivate::parseDeletePredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
