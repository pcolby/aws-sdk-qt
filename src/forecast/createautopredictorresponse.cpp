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

#include "createautopredictorresponse.h"
#include "createautopredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateAutoPredictorResponse
 * \brief The CreateAutoPredictorResponse class provides an interace for Forecast CreateAutoPredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createAutoPredictor
 */

/*!
 * Constructs a CreateAutoPredictorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAutoPredictorResponse::CreateAutoPredictorResponse(
        const CreateAutoPredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateAutoPredictorResponsePrivate(this), parent)
{
    setRequest(new CreateAutoPredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAutoPredictorRequest * CreateAutoPredictorResponse::request() const
{
    Q_D(const CreateAutoPredictorResponse);
    return static_cast<const CreateAutoPredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateAutoPredictor \a response.
 */
void CreateAutoPredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAutoPredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateAutoPredictorResponsePrivate
 * \brief The CreateAutoPredictorResponsePrivate class provides private implementation for CreateAutoPredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateAutoPredictorResponsePrivate object with public implementation \a q.
 */
CreateAutoPredictorResponsePrivate::CreateAutoPredictorResponsePrivate(
    CreateAutoPredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateAutoPredictor response element from \a xml.
 */
void CreateAutoPredictorResponsePrivate::parseCreateAutoPredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAutoPredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
