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

#include "createexplainabilityresponse.h"
#include "createexplainabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityResponse
 * \brief The CreateExplainabilityResponse class provides an interace for Forecast CreateExplainability responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainability
 */

/*!
 * Constructs a CreateExplainabilityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExplainabilityResponse::CreateExplainabilityResponse(
        const CreateExplainabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateExplainabilityResponsePrivate(this), parent)
{
    setRequest(new CreateExplainabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExplainabilityRequest * CreateExplainabilityResponse::request() const
{
    Q_D(const CreateExplainabilityResponse);
    return static_cast<const CreateExplainabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateExplainability \a response.
 */
void CreateExplainabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExplainabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityResponsePrivate
 * \brief The CreateExplainabilityResponsePrivate class provides private implementation for CreateExplainabilityResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityResponsePrivate object with public implementation \a q.
 */
CreateExplainabilityResponsePrivate::CreateExplainabilityResponsePrivate(
    CreateExplainabilityResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateExplainability response element from \a xml.
 */
void CreateExplainabilityResponsePrivate::parseCreateExplainabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExplainabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
