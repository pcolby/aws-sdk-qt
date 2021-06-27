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

#include "createpredictorresponse.h"
#include "createpredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreatePredictorResponse
 * \brief The CreatePredictorResponse class provides an interace for ForecastService CreatePredictor responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createPredictor
 */

/*!
 * Constructs a CreatePredictorResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePredictorResponse::CreatePredictorResponse(
        const CreatePredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new CreatePredictorResponsePrivate(this), parent)
{
    setRequest(new CreatePredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePredictorRequest * CreatePredictorResponse::request() const
{
    return static_cast<const CreatePredictorRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService CreatePredictor \a response.
 */
void CreatePredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::CreatePredictorResponsePrivate
 * \brief The CreatePredictorResponsePrivate class provides private implementation for CreatePredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreatePredictorResponsePrivate object with public implementation \a q.
 */
CreatePredictorResponsePrivate::CreatePredictorResponsePrivate(
    CreatePredictorResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService CreatePredictor response element from \a xml.
 */
void CreatePredictorResponsePrivate::parseCreatePredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
